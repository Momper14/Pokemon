#pragma once

#include "Pokemon.h"
#include "Util.h"
#include "Attacks.h"

#define STATUS_NORMAL     0
#define STATUS_SCHLAF     1
#define STATUS_PARALYSE   2
#define STATUS_BRENN      3
#define STATUS_FREEZE     4
#define STATUS_GIFT       5
#define STATUS_SCHWERGIFT 6
#define STATUS_KO         7

void mainAttack(PokemonFight *angreifer, PokemonFight *verteidiger,int attackID);