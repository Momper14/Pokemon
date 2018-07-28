#include "Calc.h"
#include "stdlib.h"

uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID);
uint applyDMGGuaranteed(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID);


uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID) {

	// berechnen ob es zu einem Treffer kommt
	int hit = rand()%101;
	if (hit > AttackDex[attackID]->precision) {
		return 0;
	}

	uint damage = applyDMGGuaranteed(angreifer,verteidiger,attackID);

	return damage;

}

uint applyDMGGuaranteed(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID) {

	uint damage;
	byte power = AttackDex[attackID]->DMG;
	uint A, D;

	// Ermitteln ob wir mit Normal oder Spez Stats arbeiten müssen und A und D zuweisen

	if (AttackDex[attackID]->typ == SPEZIAL) {
		A = angreifer->stats[STAT_ANGRIFF];
		D = verteidiger->stats[STAT_VERTEIDIGUNG];
	}
	else if (AttackDex[attackID]->typ == PHYSISCH) {
		A = angreifer->stats[STAT_SPEZIALANGRIFF];
		D = verteidiger->stats[STAT_SPEZIALVERTEIDIGUNG];
	}
	else {
		// Sollte, nach jetztigem Kenntnisstand nicht vorkommen
		A = D = 1;
	}
	
	damage = ((2 * angreifer->level) / 5) + 2;
	damage = damage * power;
	damage = damage * (A / D); // Hier kann es passieren dass DMG = 0 wird, da dies aber auch in den Spielen möglich ist unter 3 KP Dmg zu kommen nehme ich an dass dies gewollt ist
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
	uint critChance = angreifer->base->stats[STAT_INITIATIVE] >> 1;
	if (critRange > critChance) {
		critical = 1;
	}
	else {
		critical = 2;
	}
	//modifier = critical * random
	modifier *= critical;
	// STAB ermitteln
	if (angreifer->base->typ1 == AttackDex[attackID]->typ || angreifer->base->typ2 == AttackDex[attackID]->typ) {
		stab = 15;
	}
	else {
		stab = 10;
	}
	// modifier = critical * random * stab
	modifier *= stab;

	//type ermittlen mit Funtkion aus Types.c
	// modifier = critical * random * stab * type
	getMultiplikator(AttackDex[attackID]->typ, verteidiger->base->typ1, verteidiger->base->typ2, &modifier);

	// Durch 100000 teilen damit wir wieder in den 1-Byte bereich zurückkehren

	modifier /= korrektur;

	// Letzte Rechnung um damage zu ermitteln und zurückgeben

	damage *= modifier;

	return damage;
}

void applyDMGRecursive(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID, byte counter) {

	if (counter == 2) {
		for (counter; counter > 0; counter--) {
			verteidiger->stats[STAT_KP] -= applyDMGGuaranteed(angreifer,verteidiger,attackID);
		}
	}else if(counter == 5){
		for (counter; counter > 3; counter--) {
			verteidiger->stats[STAT_KP] -= applyDMGGuaranteed(angreifer, verteidiger, attackID);
		}
		int tempDMG = 0;
		for (counter; counter > 3; counter--) {
			 tempDMG = applyDMGGuaranteed(angreifer, verteidiger, attackID);
			 if (tempDMG == 0) {
				 counter = 0;
			 }
			 verteidiger->stats[STAT_KP] -= tempDMG;
		}
	}

}

void mainAttack(PokemonClass *angreifer, PokemonClass *verteidiger, int attackID) {

	switch (attackID){

	case ATTACKE_PFUND:  
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_KARATESCHLAG:
		// Vorerst keine extra Crit-Rate
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_DUPLEXHIEB:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_KOMETENHIEB:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_ZAHLTAG:
	case ATTACKE_FEUERSCHLAG:
	case ATTACKE_EISHIEB:
	case ATTACKE_DONNERSCHLAG:
	case ATTACKE_KRATZER:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_KLAMMER:
	case ATTACKE_GUILLOTINE:
	case ATTACKE_KLINGENSTURM:
	case ATTACKE_SCHWERTTANZ:
	case ATTACKE_ZERSCHNEIDER:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_WINDSTOSS:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_FLUEGELSCHLAG:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_WIRBELWIND:
	case ATTACKE_FLIEGEN:
	case ATTACKE_KLAMMERGRIFF:
	case ATTACKE_SLAM:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_RANKENHIEB:
	case ATTACKE_STAMPFER:
	case ATTACKE_DOPPELKICK:
		applyDMGRecursive(angreifer, verteidiger, attackID, 2);
		break;
	case ATTACKE_MEGAKICK:
	case ATTACKE_SPRUNGKICK:
	case ATTACKE_FEGEKICK:
	case ATTACKE_SANDWIRBEL:
	case ATTACKE_KOPFNUSS:
	case ATTACKE_HORNATTACKE:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_FURIENSCHLAG:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_HORNBOHRER:
	case ATTACKE_TACKLE:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_BODYSLAM:
	case ATTACKE_WICKEL:
	case ATTACKE_BODYCHECK:
	case ATTACKE_FUCHTLER:
	case ATTACKE_RISIKOTACKLE:
	case ATTACKE_RUTENSCHLAG:
	case ATTACKE_GIFTSTACHEL:
	case ATTACKE_DUONADEL:
		applyDMGRecursive(angreifer, verteidiger, attackID, 2);
		break;
	case ATTACKE_NADELRAKETE:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_SILBERBLICK:
	case ATTACKE_BISS:
	case ATTACKE_HEULER:
	case ATTACKE_BRUELLER:
	case ATTACKE_GESANG:
	case ATTACKE_SUPERSCHALL:
	case ATTACKE_ULTRASCHALL:
	case ATTACKE_AUSSETZER:
	case ATTACKE_SAEURE:
	case ATTACKE_GLUT:
	case ATTACKE_FLAMMENWURF:
	case ATTACKE_WEISSNEBEL:
	case ATTACKE_AQUAKNARRE:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID);
		break;
	case ATTACKE_HYDROPUMPE:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_SURFER:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_EISSTRAHL:
	case ATTACKE_BLIZZARD:
	case ATTACKE_PSYSTRAHL:
	case ATTACKE_BLUBBSTRAHL:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_AURORASTRAHL:
	case ATTACKE_HYPERSTRAHL:
	case ATTACKE_SCHNABEL:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_BOHRSCHNABEL:
	case ATTACKE_UEBERROLLER:
	case ATTACKE_FUSSKICK:
	case ATTACKE_KONTER:
	case ATTACKE_GEOWURF:
	case ATTACKE_STAERKE:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_ABSORBER:
	case ATTACKE_MEGASAUGER:
	case ATTACKE_EGELSAMEN:
	case ATTACKE_WACHSTUM:
	case ATTACKE_RASIERBLATT:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_SOLARSTRAHL:
	case ATTACKE_GIFTPUDER:
	case ATTACKE_STACHELSPORE:
	case ATTACKE_SCHLAFPUDER:
	case ATTACKE_BLAETTERTANZ:
	case ATTACKE_FADENSCHUSS:
	case ATTACKE_DRACHENWUT:
	case ATTACKE_FEUERWIRBEL:
	case ATTACKE_DONNERSCHOCK:
	case ATTACKE_DONNERBLITZ:
	case ATTACKE_DONNERWELLE:
	case ATTACKE_DONNER:
	case ATTACKE_STEINWURF:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_ERDBEBEN:
		verteidiger->stats[STAT_KP] -= applyDMG(angreifer, verteidiger, attackID); 
		break;
	case ATTACKE_GEOFISSUR:
	case ATTACKE_SCHAUFLER:
	case ATTACKE_TOXIN:
	case ATTACKE_KONFUSION:
	case ATTACKE_PSYCHOKINESE:
	case ATTACKE_HYPNOSE:
	case ATTACKE_MEDITATION:
	case ATTACKE_AGILITAET:
	case ATTACKE_RUCKZUCKHIEB:
	case ATTACKE_RASEREI:
	case ATTACKE_TELEPORT:
	case ATTACKE_NACHTNEBEL:
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
	case ATTACKE_EIERBOMBE:
	case ATTACKE_SCHLECKER:
	case ATTACKE_SMOG:
	case ATTACKE_SCHLAMMBAD:
	case ATTACKE_KNOCHENKEULE:
	case ATTACKE_FEUERSTURM:
	case ATTACKE_KASKADE:
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
	case ATTACKE_TRAUMFRESSER:
	case ATTACKE_GIFTWOLKE:
	case ATTACKE_STAKKATO:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_BLUTSAUGER:
	case ATTACKE_TODESKUSS:
	case ATTACKE_HIMMELSFEGER:
	case ATTACKE_WANDLER:
	case ATTACKE_BLUBBER:
	case ATTACKE_IRRSCHLAG:
	case ATTACKE_PILZSPORE:
	case ATTACKE_BLITZ:
	case ATTACKE_PSYWELLE:
	case ATTACKE_PLATSCHER:
	case ATTACKE_SAUREPANZER:
	case ATTACKE_KRABBHAMMER:
	case ATTACKE_EXPLOSION:
	case ATTACKE_KRATZFURIE:
	case ATTACKE_KNOCHMERANG:
		applyDMGRecursive(angreifer, verteidiger, attackID, 5);
		break;
	case ATTACKE_ERHOLUNG:
	case ATTACKE_STEINHAGEL:
	case ATTACKE_HYPERZAHN:
	case ATTACKE_SCHAERFER:
	case ATTACKE_UMWANDLUNG:
	case ATTACKE_TRIPLETTE:
	case ATTACKE_SUPERZAHN:
	case ATTACKE_SCHLITZER:
	case ATTACKE_DELEGATOR:
	case ATTACKE_VERZWEIFLER:


	default:
		break;


	}

}
