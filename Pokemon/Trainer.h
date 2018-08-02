#pragma once

#include "Pokemon.h"

enum Geschlecht{maenlich, weiblich};

struct Trainer{
	const char *name;
	enum Geschlecht geschlecht;
	struct PokemonGroup *pokemons[6];
};
typedef struct Trainer Trainer;

//struct Trainer * newTrainer(const char *name, enum Geschlecht geschlecht);

//void destroyTrainer(struct Trainer *trainer);