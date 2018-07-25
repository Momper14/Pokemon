#pragma once

#include "Base.h"
#include "attacks.h"

struct pokemonClass{
	char *spitzname;
	byte level;
	uint expNext;
	struct pokemonBase *base;
	uint stats[6];
	byte iv[6];
	byte dv[6];
	Attacke *moves[4];
	int status;
	int item;
};