#include "Calc.h"
#include "stdlib.h"



uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, Attacke *attacke) {

	uint damage = 0;
	uint power = attacke->DMG;
	uint A, D;

	// Ermitteln ob wir mit Normal oder Spez Stats arbeiten müssen und A und D zuweisen

	if (attacke->typ == SPEZIAL) {
		A = angreifer->stats[STAT_ANGRIFF];
		D = verteidiger->stats[STAT_VERTEIDIGUNG];
	}else if(attacke->typ == PHYSISCH) {
		A = angreifer->stats[STAT_SPEZIALANGRIFF];
		D = verteidiger->stats[STAT_SPEZIALVERTEIDIGUNG];
	}else {
		// Sollte, nach jetztigem Kenntnisstand nicht vorkommen
		A = D = 1;
	}
	/*
	         ( (2*angreiferlevel )              (       A        )     )
		     (-------------------)+2  * Power * (----------------)     )
	Damage = (         5         )              (       D        )     )
	         (----------------------------------------------------- + 2) * modifier  
			 (                       50                                )

	Power = effektive power of the used move (e.g. power hyperstrahl = 150)
	A = effektiver angriffswert/spzialangriffswert des angreifenden Pokemon
	D = effektiver defensiv/spezialDef Wert des verteidigenden Pokemon

	
	*/
	damage = ((2 * angreifer->level) / 5) + 2;
	damage = damage * power;
	damage = damage * (A / D); // Hier kann es passieren dass DMG = 0 wird, da dies aber auch in den Spielen möglich ist unter 3 KP Dmg zu kommen nehme ich an dass dies gewollt ist
	damage = (damage / 50)+2;

	// Nun werden die Parameter von modifier ermittelt
	// modifier = critical * random * STAB * type
	uint critical = 100;
	uint random = 100 - (rand() % 16);
	uint stab = 100;
	uint type = 100;
	unsigned long modifier = 1;
	unsigned long korrektur = critical * 100 * stab * type;
	// modifier = random
	modifier *= random;

	// Crit ermitteln
	uint critRange = rand() % 256;
	uint critChance = angreifer->base->stats[STAT_INITIATIVE] >> 1 ;
	if (critRange > critChance) {
		critical = 100;
	}else {
		critical = 200;
	}
	//modifier = critical * random
	modifier *= critical;
	// STAB ermitteln
	if (angreifer->base->typ1 == attacke->typ || angreifer->base->typ2 == attacke->typ) {
		stab = stab + stab >> 1;	
	}else {
		stab = 100;
	}
	// modifier = critical * random * stab
	modifier *= stab;

	//type ermittlen mit Funtkion aus Types.c
	// modifier = critical * random * stab * type
	modifier = getMultiplikator(attacke->typ,verteidiger->base->typ1,verteidiger->base->typ2,modifier);

	// Durch 100000000 teilen damit wir wieder in den 1-Byte bereich zurückkehren

	modifier = modifier / korrektur;

	// Letzte Rechnung um damage zu ermitteln und zurückgeben

	damage = damage * modifier;

	return damage;

}