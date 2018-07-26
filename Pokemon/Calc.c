#include "Calc.h"
#include "stdlib.h"



uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, Attacke *attacke) {

	uint A = 0;
	uint D = verteidiger->stats[STAT_VERTEIDIGUNG];
	uint damage = 1;
	uint random = 100 - (rand() % 16 + 1);
	uint crit   = 100;
	uint temp   = rand()%100+1;
	uint stab   = 100;
	//int attackType, int defenseType1, int defenseType2
	uint type = getMultiplikator(attacke->typ,verteidiger->base->typ1, verteidiger->base->typ2);
	uint correct = crit * stab * 100*100;
	uint modifier = 1;

	// ermitteln ob Angriff oder Spezialangriff
	if (attacke->klasse == PHYSISCH) {
		A = angreifer->stats[STAT_ANGRIFF];
	}
	else if (attacke->klasse == SPEZIAL) {
		A = angreifer->stats[STAT_SPEZIALANGRIFF];
	}
	else {
		A = 0;
	}
	// Crit ermitteln
	unsigned char ranCrit = rand() % 256;
	unsigned char P = angreifer->base->stats[STAT_INITIATIVE] / 512;
	if (ranCrit >= P ) {
		crit = 100;
	}
	else {
		crit = 200;
	}

	// STAB berechnen
	if (angreifer->base->typ1 == attacke->typ || angreifer->base->typ2 == attacke->typ) {
		stab = 150;
	}
	else {
		stab = 100;
	}

	modifier = (crit * random * stab * type)/correct;

	damage = (2*angreifer->level/5) + 2;
	damage = damage * attacke->AP;
	damage = damage * (A / D);
	damage = (damage / 50) + 2;
	damage = damage * modifier;
//	damage = (((((((2*angreifer->level)/5)+2) * attacke->DMG  * (A/D))/(5))/(50))+2)*modifier;


	/*
	         ( (2*angreiferlevel )              (       A        )     )
		     (------------------ )+ 2 * Power * (----------------)     )
	Damage = (         5         )              (       D        )     )
	         (----------------------------------------------------- + 2) * modifier  
			 (                       50                                )

	modifier = critical * random * STAB * type * burn * other
	*/

	return damage;

}