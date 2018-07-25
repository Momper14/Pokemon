#include "attacks.h"
#include "Pokemon.h"
/*
#include "types.h"
#include "Base.h"
#include "pokemon.h"
*/

uint applyDMG(pokemonClass angreifer, pokemonClass verteidiger,Attacke attacke) {
	
	uint damage = (((2*angreifer->level/5)+2)*attacke.DMG*(angreifer));

}