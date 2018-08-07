#pragma once

#include "Base.h"
#include "Attacks.h"
#include "Util.h"

#define STAT_GENAUIGKEIT 6
#define STAT_FLUCHTWERT  7

#define STATUS_NORMAL     0
#define STATUS_SCHLAF     1
#define STATUS_PARALYSE   2
#define STATUS_BRENN      3
#define STATUS_FREEZE     4
#define STATUS_GIFT       5
#define STATUS_SCHWERGIFT 6
#define STATUS_KO         7

#define SPITZNAME_SIZE 11

struct PokemonClass{
	char spitzname[SPITZNAME_SIZE];
	byte level;
	uint expAct;
	uint expNext;
	byte base;
	ushort stats[6];
	byte iv[6];
	ushort ev[6];
	struct Attacke *moves[4];
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
uint calcEXPNeed(byte aktLvl, enum ExpTier expTier);
ushort expGain(struct PokemonClass *gegner, short teilnemer);
void statsGain(struct PokemonClass *pokemon, const PokemonBase *enemy);
struct PokemonClass* generatePokemon(byte pokemon, byte lvl);
bool lernbar(struct PokemonClass *pkm, byte attacke);
void destroyPokemon(struct PokemonClass *pkm);
struct PokemonGroup * newPokemonGroup(struct PokemonClass *pokemon);
void destroyPokemonGroup(struct PokemonGroup *pokemonGroup);