#include "Pokemon.h"
#include "Pokemon.c"


uint applyDMG(pokemonClass *angreifer, pokemonClass *verteidiger, Attacke *attacke) {
	/*
			 ( (2*angreiferlevel )
			 (------------------ )+ 2 *
	Damage = (         5         )
			 (
	*/
	uint damage = 0;
	if (attacke.klasse == physisch) {
		damage = angreifer->stats[angriff];
	}
	else if (attacke.klasse == spezial) {
		damage = angreifer->stats[spezialangriff];
	}
	

}