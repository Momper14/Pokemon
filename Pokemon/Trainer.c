#include "Trainer.h"
#include <stdlib.h>

struct Trainer * newTrainer(const char *name, enum Geschlecht geschlecht){
	struct Trainer *trainer = malloc(sizeof(struct Attacke));
	trainer->name = name;
	trainer->geschlecht = geschlecht;
	int i;
	for(i = 0; i < 6; i++){
		trainer->pokemons[i] = NULL;
	}
	return trainer;
}

void destroyTrainer(struct Trainer *trainer){
	int i;
	for(i = 0; i < 6; i++){
		if(trainer->pokemons[i] != NULL){
			free(trainer->pokemons[i]);
		}
	}
}