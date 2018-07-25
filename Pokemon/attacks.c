#include "Pokemon.h"
#include "Pokemon.c"
#include "stdlib.h"
#include "attacks.h"



uint applyDMG(pokemonClass *angreifer, pokemonClass *verteidiger, Attacke *attacke) {

	uint A = 0;
	uint D = verteidiger->stats[verteidigung];
	int random = 100 - (rand() % 16 + 1)
	// ermitteln ob Angriff oder Spezialangriff
	if (attacke->klasse == physisch) {
		A = angreifer->stats[angriff];
	}
	else if (attacke->klasse == spezial) {
		A = angreifer->stats[spezialangriff];
	}
	else {
		A = 0;
	}
	/*
	         ( (2*angreiferlevel )              (       A        )     )
		     (------------------ )+ 2 * Power * (----------------)     )
	Damage = (         5         )              (       D        )     )
	         (----------------------------------------------------- + 2) * modifier  
			 (                       50                                )

	modifier = critical * random * STAB * type * burn * other
	*/

}