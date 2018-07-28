#pragma once

#include "Pokemon.h"
#include "Util.h"
#include "Attacks.h"

uint applyDMG(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID);

void mainAttack(PokemonClass *angreifer, PokemonClass *verteidiger, byte attackID);