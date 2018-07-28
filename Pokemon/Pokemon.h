#pragma once

#include "Base.h"
#include "Attacks.h"
#include "Util.h"

struct PokemonClass{
	char *spitzname;
	byte level;
	uint expNext;
	struct PokemonBase *base;
	uint stats[6];
	byte iv[6];
	byte dv[6];
	byte stufen[6];
	struct Attacke *moves[4];
	int status;
	int item;
};
typedef struct PokemonClass PokemonClass;