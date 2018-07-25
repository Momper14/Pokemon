#pragma once

#include "Base.h"

struct pokemonClass{
	char *spitzname;
	pokemonBase base;
	uint stats[6];
	byte iv[6];
	byte dv[6];
	//Attacke *moves[4];
	int status;
	int item;
};