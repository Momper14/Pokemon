#pragma once

#include "Pokemon.h"
#include "Util.h"
#include "attacks.h"

uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, Attacke *attacke);

void mainAttack(PokemonClass *angreifer, PokemonClass *verteidiger,Attacke *attacke);