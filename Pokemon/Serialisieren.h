#pragma once

#include "Trainer.h"
#include "Pokemon.h"
#include "Attacks.h"
#include "Util.h"

#define NICHT_VORHANDEN 0

// für Bank; AP niht relevant
struct SaveAttacke{
	byte attackeBasis;
	byte apPlus;
};

// für Gruppe; AP relevant
struct SaveAttackeG{
	struct SaveAttacke atk;
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
	struct SaveAttackeG moves[4];
};

struct SavePokemonGroup{
	struct SavePokemonClass pokemon;
	byte status;
	ushort aktKP;
};

struct Save{
	char name[NAME_SIZE];
	enum Geschlecht geschlecht;
	struct SavePokemonGroup gruppe[6];
};

void speichern(struct Trainer *trainer);
bool laden(struct Trainer *trainer);
