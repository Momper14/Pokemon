#pragma once

#include "Base.h"
#include "Attacks.h"
#include "Util.h"

#define STAT_GENAUIGKEIT 6
#define STAT_FLUCHTWERT  7

struct PokemonClass{
	char *spitzname;
	byte level;
	uint expAct;
	uint expNext;
	struct PokemonBase *base;
	ushort stats[6];
	const byte iv[6];
	ushort ev[6];
	struct Attacke *moves[4];
	byte item;
};
typedef struct PokemonClass PokemonClass;

struct PokemonGroup{
	struct PokemonClass *pokemon;	// Verweis auf das Pokemon des Trainers
	byte status;					// SLF / PAR / GIF / BRN / FRZ / Schwere Vergiftug / KO
	ushort aktKP;					// KP im Kampf und bis zur nächsten Heilung
	bool teilgenommen;				// ob das Pokemon am aktuellen Kampf teilgenommen hat
};
typedef struct PokemonGroup PokemonGroup;

struct PokemonFight{
	struct PokemonGroup *pokemon;
	char stufen[8];					// Temporäre stufen // @done von byte in char geändert (vorzeichenbehaftet)
	ushort tempStats[8];			// Stats mit Stufen verrechnet
	bool verwirrung;				// 1 Für verwirrt und 0 für nicht verwirrt
};
typedef struct PokemonFight PokemonFight;

void clacStats(struct PokemonClass *pokemon);
void calcEXPNext(struct PokemonClass *pokemon);
ushort expGain(struct PokemonClass *gegner, short teilnemer);
void statsGain(struct PokemonClass *pokemon, const PokemonBase *enemy);