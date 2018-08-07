#pragma once

#include "Pokemon.h"

#define NAME_SIZE 11

enum Geschlecht{maenlich, weiblich};

struct Trainer{
	char name[NAME_SIZE];
	enum Geschlecht geschlecht;
	struct PokemonGroup *gruppe[6];
};
typedef struct Trainer Trainer;

//struct Trainer * newTrainer(const char *name, enum Geschlecht geschlecht);

//void destroyTrainer(struct Trainer *trainer);