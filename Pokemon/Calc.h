#pragma once

#include "Pokemon.h"
#include "Util.h"
#include "attacks.h"

unsigned long applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, int attackID);

void mainAttack(PokemonClass *angreifer, PokemonClass *verteidiger,int attackID);