#include "Calc.h"
#include "stdlib.h"

uint applyDMG(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID);
uint applyDMGGuaranteed(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID);
void statusChange(PokemonGroup *pokemon, byte status, byte chance);
void applyDmgAndStatus(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID,byte status,byte chance);

uint applyDMG(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID) {

	// berechnen ob es zu einem Treffer kommt
	int hit = rand()%101;
	if (hit > AttackDex[attackID]->precision) {
		return 0;
	}

	uint damage = applyDMGGuaranteed(angreifer,verteidiger,attackID);

	return damage;

}

uint applyDMGGuaranteed(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID) {

	uint damage;
	byte power = AttackDex[attackID]->DMG;
	uint A, D;

	// Ermitteln ob wir mit Normal oder Spez Stats arbeiten müssen und A und D zuweisen

	if (AttackDex[attackID]->typ == SPEZIAL) {
		A = angreifer->stufen[STAT_ANGRIFF];
		D = verteidiger->stufen[STAT_VERTEIDIGUNG];
	}else if (AttackDex[attackID]->typ == PHYSISCH) {
		A = angreifer->stufen[STAT_SPEZIALANGRIFF];
		D = verteidiger->stufen[STAT_SPEZIALVERTEIDIGUNG];
	}else {
		// Sollte, nach jetztigem Kenntnisstand nicht vorkommen
		A = D = 1;
	}
	
	damage = ((2 * angreifer->pokemon->pokemon->level) / 5) + 2;
	damage = damage * power;
	damage = damage * (A / D); // Hier kann es passieren dass DMG = 0 wird, da dies aber auch in den Spielen nicht möglich ist unter 3 KP Dmg zu kommen nehme ich an dass dies gewollt ist
	damage = (damage / 50) + 2;

	// Nun werden die Parameter von modifier ermittelt
	// modifier = critical * random * STAB * type
	byte critical;
	byte random = 100 - (rand() % 16);
	byte stab;
	ulong modifier;
	// type, random und stab (100 * 100 * 10)
	uint korrektur = 100000;
	// modifier = random
	modifier = random;

	// Crit ermitteln
	uint critRange = rand() % 256;
	uint critChance = angreifer->pokemon->pokemon->base->stats[STAT_INITIATIVE] >> 1;
	if (critRange > critChance) {
		critical = 1;
	}
	else {
		critical = 2;
	}
	//modifier = critical * random
	modifier *= critical;
	// STAB ermitteln
	if (angreifer->pokemon->pokemon->base->typ1 == AttackDex[attackID]->typ || angreifer->pokemon->pokemon->base->typ2 == AttackDex[attackID]->typ) {
		stab = 15;
	}
	else {
		stab = 10;
	}
	// modifier = critical * random * stab
	modifier *= stab;

	//type ermittlen mit Funtkion aus Types.c
	// modifier = critical * random * stab * type
	getMultiplikator(AttackDex[attackID]->typ, verteidiger->pokemon->pokemon->base->typ1, verteidiger->pokemon->pokemon->base->typ2, &modifier);

	// Durch 100000 teilen damit wir wieder in den 1-Byte bereich zurückkehren

	modifier /= korrektur;

	// Letzte Rechnung um damage zu ermitteln und zurückgeben

	damage *= modifier;

	// Schauen ob das Pokemon von dem Angriff KO geht, in dem Fall KP auf 0 setzen und Status auf KO setzen
	if (verteidiger->pokemon->aktKP < damage) {
		damage = verteidiger->pokemon->aktKP;
	}

	return damage;
}

void applyDMGRecursive(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID, byte counter) {
	// Für Attacken wie Doppelkick, die nur 2 mal, aber dafür garantiert treffen
	if (counter == 2) {
		for (counter; counter > 0; counter--) {
			verteidiger->pokemon->aktKP -= applyDMGGuaranteed(angreifer,verteidiger,attackID);
		}
		// Für alle anderen wiederholte Attacken, 2 Treffer garantiert, danach können sie daneben gehen
	}else if(counter == 5){
		for (counter; counter > 3; counter--) {
			verteidiger->pokemon->aktKP -= applyDMGGuaranteed(angreifer, verteidiger, attackID);
		}
		int tempDMG = 0;
		for (counter; counter > 3; counter--) {
			 tempDMG = applyDMGGuaranteed(angreifer, verteidiger, attackID);
			 if (tempDMG == 0) {
				 counter = 0;
			 }
			 verteidiger->pokemon->aktKP -= tempDMG;
		}
	}

}

void statusChange(PokemonGroup *pokemon, byte status, byte chance) {

	if (status = STATUS_GIFT) {
		if (pokemon->pokemon->base->typ1 == STAHL || pokemon->pokemon->base->typ2 == STAHL || pokemon->pokemon->base->typ1 == GIFT || pokemon->pokemon->base->typ2 == GIFT) {
			return;
		}	
	}

	// Keine Statusänderung zulassen, solange einer bereits vorliegt
	if (pokemon->status != STATUS_NORMAL ) {
		return;
	}
	// Berechnen ob änderung eintritt
	if (rand()%101 < chance) {
		pokemon->status = status;
		return;
	}
	return;
}

void applyDmgAndStatus(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID, byte status, byte chance) {

	ushort temp = applyDMG(angreifer,verteidiger,attackID);
	verteidiger->pokemon->aktKP -= temp;
	// Ob Statusveränderung stattfinden kann hängt ob es überhaupt einen Treffer gab und ob das Pokemon nicht KO ist
	if (temp > 0 && verteidiger->pokemon->status != STATUS_KO) {
		statusChange(verteidiger,status,chance);
	}

}

void mainAttack(PokemonFight *angreifer, PokemonFight *verteidiger, int attackID) {

	switch (attackID){

	case ATTACKE_PFUND:  
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_KARATESCHLAG:
		// Vorerst keine extra Crit-Rate
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_DUPLEXHIEB:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_KOMETENHIEB:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_ZAHLTAG:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Geld berechnen, falls es implementiert wird
		break;
	case ATTACKE_FEUERSCHLAG:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_EISHIEB:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_FREEZE, 10);
		break;
	case ATTACKE_DONNERSCHLAG:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 10);
		break;
	case ATTACKE_KRATZER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_KLAMMER:
	case ATTACKE_GUILLOTINE:
	case ATTACKE_KLINGENSTURM:
	case ATTACKE_SCHWERTTANZ:
	case ATTACKE_ZERSCHNEIDER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_WINDSTOSS:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_FLUEGELSCHLAG:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_WIRBELWIND:
	case ATTACKE_FLIEGEN:
	case ATTACKE_KLAMMERGRIFF:
	case ATTACKE_SLAM:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_RANKENHIEB:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_STAMPFER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// zurückschrecken berechnen
		break;
	case ATTACKE_DOPPELKICK:
		applyDMGRecursive(angreifer, verteidiger, attackID, 2);
		break;
	case ATTACKE_MEGAKICK:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_SPRUNGKICK:
	case ATTACKE_FEGEKICK:
	case ATTACKE_SANDWIRBEL:
	case ATTACKE_KOPFNUSS:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Zurückschrecken berechnen
		break;
	case ATTACKE_HORNATTACKE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_FURIENSCHLAG:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_HORNBOHRER:
	case ATTACKE_TACKLE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_BODYSLAM:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 30);
		break;
	case ATTACKE_WICKEL:
	case ATTACKE_BODYCHECK:
	case ATTACKE_FUCHTLER:
	case ATTACKE_RISIKOTACKLE:
	case ATTACKE_RUTENSCHLAG:
	case ATTACKE_GIFTSTACHEL:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_GIFT, 30);
	case ATTACKE_DUONADEL:
		applyDMGRecursive(angreifer, verteidiger, attackID, 2);
		break;
	case ATTACKE_NADELRAKETE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_SILBERBLICK:
	case ATTACKE_BISS:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// zurückschrecken berechnen
		break;
	case ATTACKE_HEULER:
	case ATTACKE_BRUELLER:
	case ATTACKE_GESANG:
		statusChange(verteidiger, STATUS_SCHLAF, AttackDex[attackID]->precision);
		break;
	case ATTACKE_SUPERSCHALL:
		break;
	case ATTACKE_ULTRASCHALL:
		// 20 HP abziehen
		break;
	case ATTACKE_AUSSETZER:
	case ATTACKE_SAEURE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Falls das Pokemon nicht KO geht, besteht 10% Chance dass Vert des Verteidigenden Pokemons um 1 Stufe sinkt
		break;
	case ATTACKE_GLUT:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_FLAMMENWURF:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_WEISSNEBEL:
		// werden wieder auf normal zustand gesetzt
		break;
	case ATTACKE_AQUAKNARRE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_HYDROPUMPE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_SURFER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_EISSTRAHL:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_FREEZE, 10);
		break;
	case ATTACKE_BLIZZARD:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_FREEZE, 10);
		break;
	case ATTACKE_PSYSTRAHL:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Verwirrung berechnen
		break;
	case ATTACKE_BLUBBSTRAHL:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_AURORASTRAHL:
	case ATTACKE_HYPERSTRAHL:
		// 2-Phasen Zuerst Angreifen dann Aufladen
		break;
	case ATTACKE_SCHNABEL:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_BOHRSCHNABEL:
	case ATTACKE_UEBERROLLER:
	case ATTACKE_FUSSKICK:
	case ATTACKE_KONTER:
	case ATTACKE_GEOWURF:
	case ATTACKE_STAERKE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_ABSORBER:
	case ATTACKE_MEGASAUGER:
	case ATTACKE_EGELSAMEN:
	case ATTACKE_WACHSTUM:
	case ATTACKE_RASIERBLATT:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_SOLARSTRAHL:
	case ATTACKE_GIFTPUDER:
		statusChange(verteidiger,STATUS_GIFT,AttackDex[attackID]->precision);
		break;
	case ATTACKE_STACHELSPORE:
		statusChange(verteidiger, STATUS_PARALYSE, AttackDex[attackID]->precision);
		break;
	case ATTACKE_SCHLAFPUDER:
		statusChange(verteidiger, STATUS_SCHLAF, AttackDex[attackID]->precision);
		break;
	case ATTACKE_BLAETTERTANZ:
	case ATTACKE_FADENSCHUSS:
	case ATTACKE_DRACHENWUT:
		// 40 KP abziehen
		break;
	case ATTACKE_FEUERWIRBEL:
	case ATTACKE_DONNERSCHOCK:
		applyDmgAndStatus(angreifer,verteidiger,attackID,STATUS_PARALYSE,10);
		break;
	case ATTACKE_DONNERBLITZ:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 10);
		break;
	case ATTACKE_DONNERWELLE:
		statusChange(verteidiger,STATUS_PARALYSE,AttackDex[attackID]->precision);
		break;
	case ATTACKE_DONNER:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 10);
		break;
	case ATTACKE_STEINWURF:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_ERDBEBEN:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_GEOFISSUR:
	case ATTACKE_SCHAUFLER:
	case ATTACKE_TOXIN:
		statusChange(verteidiger, STATUS_SCHWERGIFT, AttackDex[attackID]->precision);
		break;
	case ATTACKE_KONFUSION:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Verwirrung berechnen
		break;
	case ATTACKE_PSYCHOKINESE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Verwirrung berechnen
		break;
	case ATTACKE_HYPNOSE:
		statusChange(verteidiger,STATUS_SCHLAF,AttackDex[attackID]->precision);
		break;
	case ATTACKE_MEDITATION:
	case ATTACKE_AGILITAET:
	case ATTACKE_RUCKZUCKHIEB:
	case ATTACKE_RASEREI:
	case ATTACKE_TELEPORT:
	case ATTACKE_NACHTNEBEL:
		// Schaden = Level des Angreifers
		break;
	case ATTACKE_MIMIKRY:
	case ATTACKE_KREIDESCHREI:
	case ATTACKE_DOPPELTEAM:
	case ATTACKE_GENESUNG:
	case ATTACKE_HAERTNER:
	case ATTACKE_KOMPRIMATOR:
	case ATTACKE_RAUCHWOLKE:
	case ATTACKE_KONFUSTRAHL:
	case ATTACKE_PANZERSCHUTZ:
	case ATTACKE_EINIGLER:
	case ATTACKE_BARRIERE:
	case ATTACKE_LICHTSCHILD:
	case ATTACKE_DUNKELNEBEL:
	case ATTACKE_REFLEKTOR:
	case ATTACKE_ENERGIEFOKUS:
	case ATTACKE_GEDULD:
	case ATTACKE_METRONOM:
	case ATTACKE_SPIEGELTRICK:
	case ATTACKE_FINALE:
		// Das hier wird lustig
	case ATTACKE_EIERBOMBE:
	case ATTACKE_SCHLECKER:
		applyDmgAndStatus(angreifer,verteidiger,attackID,STATUS_PARALYSE,30);
		break;
	case ATTACKE_SMOG:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_GIFT, 40);
		break;
	case ATTACKE_SCHLAMMBAD:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_GIFT, 30);
		break;
	case ATTACKE_KNOCHENKEULE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer,verteidiger,attackID);
		// Zurückschrecken berechnen
		break;
	case ATTACKE_FEUERSTURM:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_KASKADE:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
	case ATTACKE_SCHNAPPER:

	case ATTACKE_STERNSCHAUER:
	case ATTACKE_SCHAEDELWUMME:
	case ATTACKE_DORNKANONE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_UMKLAMMERUNG:
	case ATTACKE_AMNESIE:
	case ATTACKE_PSYKRAFT:
	case ATTACKE_WEICHEI:
	case ATTACKE_TURMKICK:
	case ATTACKE_GIFTBLICK:
		statusChange(verteidiger,STATUS_PARALYSE,75); // Bis einschl. 4. Generation TQ = 75 %
		break;
	case ATTACKE_TRAUMFRESSER:
	case ATTACKE_GIFTWOLKE:
		statusChange(verteidiger,STATUS_GIFT,AttackDex[attackID]->precision);
		break;
	case ATTACKE_STAKKATO:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_BLUTSAUGER:
	case ATTACKE_TODESKUSS:
		statusChange(verteidiger,STATUS_SCHLAF,AttackDex[attackID]->precision);
	case ATTACKE_HIMMELSFEGER:
	case ATTACKE_WANDLER:
		// Das wird auch lustig
	case ATTACKE_BLUBBER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_IRRSCHLAG:
		// Verwirrung berechnen
	case ATTACKE_PILZSPORE:
		statusChange(verteidiger,STATUS_SCHLAF,AttackDex[attackID]->precision);
		break;
	case ATTACKE_BLITZ:
	case ATTACKE_PSYWELLE:
	case ATTACKE_PLATSCHER:
		// ULTIMATIVE ZERSTÖRUNG PROGRAMMIEREN
		break;
	case ATTACKE_SAUREPANZER:
	case ATTACKE_KRABBHAMMER:
		// Erhöte Crit-Chance
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_EXPLOSION:
	case ATTACKE_KRATZFURIE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_KNOCHMERANG:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_ERHOLUNG:
		// ez
	case ATTACKE_STEINHAGEL:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Zurückschrecken programmieren || erst ab der 2en Generation chance auf zurückschrecken
		break;
	case ATTACKE_HYPERZAHN:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// zurückschrecken berechnen
		break;
	case ATTACKE_SCHAERFER:
	case ATTACKE_UMWANDLUNG:
	case ATTACKE_TRIPLETTE:
		switch (rand()%3) {
			case 0: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 20); break;
			case 1: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_FREEZE, 20); break;
			case 2: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 20); break;
		}
		break;
	case ATTACKE_SUPERZAHN:
	case ATTACKE_SCHLITZER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Hohe Critrate berechnen
		break;
	case ATTACKE_DELEGATOR:
	case ATTACKE_VERZWEIFLER:


	default:
		break;


	}
	if (verteidiger->pokemon->aktKP == 0) {
		verteidiger->pokemon->status = STATUS_KO;
	}

}
