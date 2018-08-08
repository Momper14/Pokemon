#pragma once

#include "Trainer.h"
#include "Pokemon.h"
#include "Attacks.h"
#include "Util.h"

#define NICHT_VORHANDEN 0

enum SaveState{ok, leer, defekt};

struct SaveAttacke{
	byte attackeBasis;
	byte apPlus;
	byte ap;
};

struct SavePokemonClass{
	char spitzname[SPITZNAME_SIZE];
	byte level;
	uint expAct;
	uint expNext;
	byte base;
	byte iv[6];
	ushort ev[6];
	struct SaveAttacke moves[4];
};

struct SavePokemonGroup{
	struct SavePokemonClass pokemon;
	byte status;
	byte sleepCounter;
	ushort aktKP;
};

struct Save{
	char name[NAME_SIZE];
	enum Geschlecht geschlecht;
	struct SavePokemonGroup gruppe[6];
};

void speichern(struct Trainer *trainer);
enum SaveState laden(struct Trainer *trainer);
