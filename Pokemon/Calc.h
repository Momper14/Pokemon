#pragma once

#include "Pokemon.h"
#include "Util.h"
#include "attacks.h"

unsigned long applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, int attackID);

unsigned long applyDMGGuaranteed(PokemonClass *angreifer, PokemonClass *verteidiger, int attackID);

void applyDMGRecursive(PokemonClass *angreifer, PokemonClass *verteidiger, int attackID, int counter);

void mainAttack(PokemonClass *angreifer, PokemonClass *verteidiger,int attackID);