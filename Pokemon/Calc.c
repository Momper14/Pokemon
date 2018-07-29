#include "Calc.h"
#include "stdlib.h"

uint applyDMG(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID);
uint applyDMGGuaranteed(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID);
void statusChange(PokemonFight *pokemon, byte status, byte chance);
void applyDmgAndStatus(PokemonFight *angreifer, PokemonFight *verteidiger, byte attackID,byte status,byte chance);
void applyKOAttack(PokemonFight *verteidiger,byte chance);
void buffStat(PokemonFight *pokemon, ushort stat, ushort stufen);



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
		A = angreifer->tempStats[STAT_ANGRIFF];
		D = verteidiger->tempStats[STAT_VERTEIDIGUNG];
	}else if (AttackDex[attackID]->typ == PHYSISCH) {
		A = angreifer->tempStats[STAT_SPEZIALANGRIFF];
		D = verteidiger->tempStats[STAT_SPEZIALVERTEIDIGUNG];
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

void statusChange(PokemonFight *pokemon, byte status, byte chance){	

	// Keine Statusänderung zulassen, solange einer bereits vorliegt
	if (pokemon->pokemon->status != STATUS_NORMAL ) {
		return;
	}
	// Pokemon von Typ GIFT oder STAHL können nicht vergiftet werden
	if (status = STATUS_GIFT) {
		if (pokemon->pokemon->pokemon->base->typ1 == STAHL || pokemon->pokemon->pokemon->base->typ2 == STAHL || pokemon->pokemon->pokemon->base->typ1 == GIFT || pokemon->pokemon->pokemon->base->typ2 == GIFT) {
			return;
		}
	}
	// Pokemon vom Typ FEUER können nicht verbrannt werden
	if (status == STATUS_BRENN) {
		if (pokemon->pokemon->pokemon->base->typ1 == FEUER || pokemon->pokemon->pokemon->base->typ2 == FEUER) {
			return;
		}
	}
	// Eis Pokemon können nicht FRZ werden
	if (status == STATUS_FREEZE) {
		if (pokemon->pokemon->pokemon->base->typ1 == EIS || pokemon->pokemon->pokemon->base->typ2 == EIS) {
			return;
		}
	}


	// Berechnen ob änderung eintritt
	if (rand()%101 < chance) {
		pokemon->pokemon->status = status;
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

void applyKOAttack(PokemonFight *verteidiger, byte chance) {

	if (rand()%101 <= chance) {
		verteidiger->pokemon->aktKP = 0;
		return;
	}
	return;
}

void buffStat(PokemonFight *pokemon, ushort stat, ushort stufen) {

	if (pokemon->stufen[stat]+stufen > 6 || pokemon->stufen[stat]+stufen < -6) {
		return;
	}
	pokemon->stufen[stat] += stufen;
	/*
	@Moritz 
	Falls du das liest und dich fragst : " Whazze Phuck ?!"
	https://www.pokewiki.de/images/b/b4/StufenGraph.png
	Das hier musste implementiert werden

	Um sicherzustellen dass die Implementierung der Stufen richtig funtkioniert musste ich Stufen mit vorgefertigten Rechnungen, ausgehend vom Ausgangswert 
	einführen

	Wenn ein PKM Buff Stufe 6 auf ATK hat ist sein Wert der 4 Fache vom Basis Wert.
	Sollte er aber reduziert werden kann man nicht einfach einmal nach Rechts shiften
	Denn dann wäre der Wert nur noch das 2 Fache vom Ausgangswert und nicht das 3.5 Fache wie geplant

	░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
	░░░░░░░░░░░░░▄▄▄▄▄▄▄░░░░░░░░░
	░░░░░░░░░▄▀▀▀░░░░░░░▀▄░░░░░░░
	░░░░░░░▄▀░░░░░░░░░░░░▀▄░░░░░░
	░░░░░░▄▀░░░░░░░░░░▄▀▀▄▀▄░░░░░
	░░░░▄▀░░░░░░░░░░▄▀░░██▄▀▄░░░░
	░░░▄▀░░▄▀▀▀▄░░░░█░░░▀▀░█▀▄░░░
	░░░█░░█▄▄░░░█░░░▀▄░░░░░▐░█░░░ Toll
	░░▐▌░░█▀▀░░▄▀░░░░░▀▄▄▄▄▀░░█░░
	░░▐▌░░█░░░▄▀░░░░░░░░░░░░░░█░░
	░░▐▌░░░▀▀▀░░░░░░░░░░░░░░░░▐▌░
	░░▐▌░░░░░░░░░░░░░░░▄░░░░░░▐▌░
	░░▐▌░░░░░░░░░▄░░░░░█░░░░░░▐▌░
	░░░█░░░░░░░░░▀█▄░░▄█░░░░░░▐▌░
	░░░▐▌░░░░░░░░░░▀▀▀▀░░░░░░░▐▌░
	░░░░█░░░░░░░░░░░░░░░░░░░░░█░░
	░░░░▐▌▀▄░░░░░░░░░░░░░░░░░▐▌░░
	░░░░░█░░▀░░░░░░░░░░░░░░░░▀░░░
	░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
	
	Den Wert erhöhen ist ja nicht weiter ein Problem 
	Aber beim Senken der Werte wird es richtig lustig (Also nicht)

	Um Datenverlust zu vermeiden wollte ich nur nach Links shiften
	daher diese tollen ausdrücke wie : 
		zahl << 1 / zahl << 1 + zahl = 2/3 
	Es sieht nach genauso viel Spass aus wie es war ^^		
		*/
	switch (pokemon->stufen[stat]) {
	case 6: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] << 4; // 4 Fach
		break;
	case 5: 
		// Alles brav geshiftet ]:D
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] << 1 + pokemon->pokemon->pokemon->stats[stat] + pokemon->pokemon->pokemon->stats[stat] >> 1; // 3.5 Fach
		break;
	case 4: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] << 1 + pokemon->pokemon->pokemon->stats[stat]; // 3 Fach 
		break;
	case 3: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] << 1 + pokemon->pokemon->pokemon->stats[stat] >> 1; // 2.5 Fach
		break;
	case 2: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] << 1 ; // 2 Fach
		break;
	case 1: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat] + pokemon->pokemon->pokemon->stats[stat] >> 1; // 1.5 Fach
		break;
	case 0: 
		pokemon->tempStats[stat] = pokemon->pokemon->pokemon->stats[stat]; // 1 Fach
		break;
	case -1:
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / ((pokemon->pokemon->pokemon->stats[stat] << 1) + pokemon->pokemon->pokemon->stats[stat]); // 2/3 Fach
		break;
	case -2: 
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / (pokemon->pokemon->pokemon->stats[stat] << 2); // 2/4 Fach
		break;
	case -3: 
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / ((pokemon->pokemon->pokemon->stats[stat] << 2) + pokemon->pokemon->pokemon->stats[stat]);// 2/5 Fach
		break;
	case -4: 
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / ((pokemon->pokemon->pokemon->stats[stat] << 1) + (pokemon->pokemon->pokemon->stats[stat] << 2));// 2/6
		break;
	case -5: 
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / ((pokemon->pokemon->pokemon->stats[stat] << 1) + (pokemon->pokemon->pokemon->stats[stat] << 2)+ (pokemon->pokemon->pokemon->stats[stat]));// 2/7
		break;
	case -6: 
		pokemon->tempStats[stat] = (pokemon->pokemon->pokemon->stats[stat] << 1) / (pokemon->pokemon->pokemon->stats[stat] << 3); // 2/8 Fach
		break;
	}

	return;

}


void mainAttack(PokemonFight *angreifer, PokemonFight *verteidiger, int attackID) {
	
	ushort temp = 0;

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
		applyKOAttack(verteidiger, AttackDex[attackID]->precision);
		break;
	case ATTACKE_KLINGENSTURM:
	case ATTACKE_SCHWERTTANZ:
		buffStat(angreifer,STAT_ANGRIFF,2);
		break;
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
		//geplant buffstat(verteidiger,stat_genauigkeit,-1);
		//genauigkeit und ausweichen muss noch eingeführt werden
		break;
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
		applyKOAttack(verteidiger, AttackDex[attackID]->precision);
		break;
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
		buffStat(verteidiger,STAT_VERTEIDIGUNG,-1);
		break;
	case ATTACKE_GIFTSTACHEL:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_GIFT, 30);
	case ATTACKE_DUONADEL:
		applyDMGRecursive(angreifer, verteidiger, attackID, 2);
		break;
	case ATTACKE_NADELRAKETE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_SILBERBLICK:
		buffStat(verteidiger,STAT_VERTEIDIGUNG,-1);
	case ATTACKE_BISS:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// zurückschrecken berechnen
		break;
	case ATTACKE_HEULER:
		buffStat(verteidiger,STAT_ANGRIFF,-1);
		break;
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
		 temp = applyDMG(angreifer, verteidiger, attackID);
		 if (verteidiger->pokemon->aktKP < temp) {
			 verteidiger->pokemon->aktKP = 0;
		 }
		 else {
			 verteidiger->pokemon->aktKP -= temp;
		 }
		 // temp > 0 ansonsten gab es keinen treffer, verteidiger kp = 0 = KO -> Keine statveränderung, random 10% chance auf senkung
		 if (temp > 0 && verteidiger->pokemon->aktKP != 0 && rand()%101 < 10) {
			 buffStat(verteidiger,STAT_VERTEIDIGUNG,-1);
		 }
		// Falls das Pokemon nicht KO geht, besteht 10% Chance dass Vert des Verteidigenden Pokemons um 1 Stufe sinkt
		break;
	case ATTACKE_GLUT:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_FLAMMENWURF:
		applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 10);
		break;
	case ATTACKE_WEISSNEBEL:
		// erhindert den Einsatz von Attacken, die das Ziel haben, den Status des Pokémon zu verändern. ... FML
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
		temp = applyDMG(angreifer,verteidiger,attackID);
		if (temp > verteidiger->pokemon->aktKP) {
			verteidiger->pokemon->aktKP = 0;
		} else {
			verteidiger->pokemon->aktKP -= temp;
		}
		if (temp > 0 && verteidiger->pokemon->aktKP != 0 && rand()%101 > 10) {
			buffStat(verteidiger,STAT_ANGRIFF,-1);
		}		
		break;
	case ATTACKE_HYPERSTRAHL:
		// 2-Phasen Zuerst Angreifen dann Aufladen
		break;
	case ATTACKE_SCHNABEL:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_BOHRSCHNABEL:
		applyKOAttack(verteidiger,10);
		break;
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
		buffStat(verteidiger,STAT_INITIATIVE,-1);
		break;
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
		applyKOAttack(verteidiger, AttackDex[attackID]->precision);
		break;
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
		buffStat(angreifer,STAT_ANGRIFF,1);
		break;
	case ATTACKE_AGILITAET:
		buffStat(angreifer,STAT_INITIATIVE,2);
		break;
	case ATTACKE_RUCKZUCKHIEB:
	case ATTACKE_RASEREI:
	case ATTACKE_TELEPORT:
	case ATTACKE_NACHTNEBEL:
		// Schaden = Level des Angreifers
		break;
	case ATTACKE_MIMIKRY:
	case ATTACKE_KREIDESCHREI:
		buffStat(verteidiger,STAT_VERTEIDIGUNG,-2);
		break;
	case ATTACKE_DOPPELTEAM:
	case ATTACKE_GENESUNG:
		// Hälfte der Max KP
		temp = angreifer->pokemon->pokemon->stats[STAT_KP] >> 1;
		// Wenn temp > als Max KP aktKP auf MaxKP setzen um Fehler zu umgehen
		if (temp > (angreifer->pokemon->pokemon->stats[STAT_KP] - angreifer->pokemon->aktKP)) {
			angreifer->pokemon->aktKP = angreifer->pokemon->pokemon->stats[STAT_KP];
		// Ansonsten einfach akt KP + 1/2 Max KP
		} else {
			angreifer->pokemon->aktKP += temp;
		}
		break;
	case ATTACKE_HAERTNER:
		buffStat(angreifer,STAT_VERTEIDIGUNG,1);
		break;
	case ATTACKE_KOMPRIMATOR:
		// Evade erhöhen
	case ATTACKE_RAUCHWOLKE:
		// Genauigkeit des verteidigers senken
	case ATTACKE_KONFUSTRAHL:
		// Verwirren
	case ATTACKE_PANZERSCHUTZ:
		buffStat(angreifer,STAT_VERTEIDIGUNG,1);
		break;
	case ATTACKE_EINIGLER:
		buffStat(angreifer, STAT_VERTEIDIGUNG, 1);
		break;
	case ATTACKE_BARRIERE:
		buffStat(angreifer, STAT_VERTEIDIGUNG, 2);
		break;
	case ATTACKE_LICHTSCHILD:
		//Gegnerische spezielle Attacken richten 5 Runden lang nur halben Schaden an, wirkt auch nach Pokémon-Wechsel.
	case ATTACKE_DUNKELNEBEL:
		//Setzt alle Werte-Veränderungen zurück (Spass)
		angreifer->tempStats[STAT_ANGRIFF]             = angreifer->pokemon->pokemon->stats[STAT_ANGRIFF];
		angreifer->tempStats[STAT_VERTEIDIGUNG]        = angreifer->pokemon->pokemon->stats[STAT_VERTEIDIGUNG];
		angreifer->tempStats[STAT_SPEZIALANGRIFF]      = angreifer->pokemon->pokemon->stats[STAT_SPEZIALANGRIFF];
		angreifer->tempStats[STAT_SPEZIALVERTEIDIGUNG] = angreifer->pokemon->pokemon->stats[STAT_SPEZIALVERTEIDIGUNG];
		angreifer->tempStats[STAT_INITIATIVE]          = angreifer->pokemon->pokemon->stats[STAT_INITIATIVE];

		angreifer->stufen[STAT_ANGRIFF]             = 0;
		angreifer->stufen[STAT_VERTEIDIGUNG]        = 0;
		angreifer->stufen[STAT_SPEZIALANGRIFF]      = 0;
		angreifer->stufen[STAT_SPEZIALVERTEIDIGUNG] = 0;
		angreifer->stufen[STAT_INITIATIVE]          = 0;
		break;
	case ATTACKE_REFLEKTOR:
		//Gegnerische physische Attacken richten 5 Runden lang nur halben Schaden an, wirkt auch nach Pokémon-Wechsel.
	case ATTACKE_ENERGIEFOKUS:
	case ATTACKE_GEDULD:
	case ATTACKE_METRONOM:
		// Führt eine zufällige Attacke aus
		mainAttack(angreifer,verteidiger,(rand()%166)+1);
		break;
	case ATTACKE_SPIEGELTRICK:
	case ATTACKE_FINALE:
		// Das hier wird lustig
	case ATTACKE_EIERBOMBE:
		applyDMG(angreifer,verteidiger,attackID);
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
		applyDMGGuaranteed(angreifer,verteidiger,attackID);
		break;
	case ATTACKE_SCHAEDELWUMME:
	case ATTACKE_DORNKANONE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_UMKLAMMERUNG:
	case ATTACKE_AMNESIE:
		buffStat(angreifer,STAT_SPEZIALVERTEIDIGUNG,2);
		break;
	case ATTACKE_PSYKRAFT:
		//Senkt die Genauigkeit des Gegners um eine Stufe.
	case ATTACKE_WEICHEI:
		// Hälfte der Max KP
		temp = angreifer->pokemon->pokemon->stats[STAT_KP] >> 1;
		// Wenn temp > als Max KP aktKP auf MaxKP setzen um Fehler zu umgehen
		if (temp > (angreifer->pokemon->pokemon->stats[STAT_KP] - angreifer->pokemon->aktKP)) {
			angreifer->pokemon->aktKP = angreifer->pokemon->pokemon->stats[STAT_KP];
			// Ansonsten einfach akt KP + 1/2 Max KP
		}
		else {
			angreifer->pokemon->aktKP += temp;
		}

		// Ausserhalb des Kampfes Anwendbar
		break;
	case ATTACKE_TURMKICK:
	case ATTACKE_GIFTBLICK:
		statusChange(verteidiger,STATUS_PARALYSE,75); // Bis einschl. 4. Generation TQ = 75 %
		break;
	case ATTACKE_TRAUMFRESSER:
		if (verteidiger->pokemon->status == STATUS_SCHLAF) {
			applyDMG(angreifer,verteidiger,attackID);
		}
		break;
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
		/*
		Diese Attacke richtet Schaden an und die Höhe des Schadens wird per Zufall bestimmt. 
		Sie kann zwischen 1 KP und dem 1,5-fachen des Levels vom Angreifer liegen. 
		Das heißt, ein Pokémon auf Level 100 kann einen maximalen Schaden von 150 KP anrichten. 
		Sobald die Höhe des Schadens in einem Kampf bestimmt wurde, verändert sich diese nicht mehr. 
		Der Schadensberechnung liegt folgender Formel zu Grunde, wobei X einen zufälligen Wert zwischen 0 und 1 annehmen kann:
		Verursachter Schaden = (0,5+X)*Level des Anwenders 
		*/
	case ATTACKE_PLATSCHER:
		// ULTIMATIVE ZERSTÖRUNG PROGRAMMIEREN
		break;
	case ATTACKE_SAUREPANZER:
		buffStat(angreifer,STAT_VERTEIDIGUNG,2);
		break;
	case ATTACKE_KRABBHAMMER:
		// Erhöte Crit-Chance
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_EXPLOSION:
		// Killt sich selbst, aber Chance besteht dass die Attacke misst
		angreifer->pokemon->aktKP = 0;
		applyDMG(angreifer,verteidiger,attackID);
		break;
	case ATTACKE_KRATZFURIE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_KNOCHMERANG:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_ERHOLUNG:
		angreifer->pokemon->status = STATUS_SCHLAF;
		angreifer->pokemon->aktKP = angreifer->pokemon->pokemon->stats[STAT_KP];
		break;
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
		buffStat(angreifer,STAT_ANGRIFF,1);
		break;
	case ATTACKE_UMWANDLUNG:
	case ATTACKE_TRIPLETTE:
		switch (rand()%3) {
			case 0: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_BRENN, 20); break;
			case 1: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_FREEZE, 20); break;
			case 2: applyDmgAndStatus(angreifer, verteidiger, attackID, STATUS_PARALYSE, 20); break;
		}
		break;
	case ATTACKE_SUPERZAHN:
		//Die gegnerischen vorhandenen KP werden halbiert.
		if (rand()%101 < AttackDex[attackID]->precision) {
			verteidiger->pokemon->aktKP >> 1;
		}
		break;
	case ATTACKE_SCHLITZER:
		verteidiger->pokemon->aktKP -= applyDMG(angreifer, verteidiger, attackID);
		// Hohe Critrate berechnen
		break;
	case ATTACKE_DELEGATOR:
	case ATTACKE_VERZWEIFLER:


	default:
		break;


	}
	// Falls Finale oder Explosion ausgeführt wurde
	if (angreifer->pokemon->aktKP == 0) 
		angreifer->pokemon->status = STATUS_KO;	
	// Falls Verteidigendes Pokemon besiegt wurde
	if (verteidiger->pokemon->aktKP == 0) 
		verteidiger->pokemon->status = STATUS_KO;
	

}
