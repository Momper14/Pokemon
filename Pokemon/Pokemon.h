#pragma once

#include "Base.h"
#include "Attacks.h"
#include "Util.h"

struct PokemonClass{
	char *spitzname;
	byte level;
	uint expNext;
	struct PokemonBase *base;
	ushort stats[6];
	const byte iv[6];
	byte dv[6];
	struct Attacke *moves[4];
	byte item;
};
typedef struct PokemonClass PokemonClass;

struct PokemonGroup{
	struct PokemonClass *pokemon;
	byte status;
	ushort aktKP;
};
typedef struct PokemonGroup PokemonGroup;

struct PokemonFight{
	struct PokemonGroup *pokemon;
	byte stufen[6];
};
typedef struct PokemonFight PokemonFight;