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
	struct PokemonClass *pokemon;	// Verweis auf das Pokemon des Trainers
	byte status;					// SLF / PAR / GIF / BRN / FRZ / Schwere Vergiftug
	ushort aktKP;					// KP im Kampf und bis zur n�chsten Heilung
};
typedef struct PokemonGroup PokemonGroup;

struct PokemonFight{
	struct PokemonGroup *pokemon;
	byte stufen[6];					// Tempor�re stats 
	byte verwirrung;				// 1 F�r verwirrt und 0 f�r nicht verwirrt
};
typedef struct PokemonFight PokemonFight;