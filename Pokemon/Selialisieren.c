#include "Serialisieren.h"
#include <string.h>

void speichern(struct Trainer *trainer){
	int groesse = 0, gGroup = 0, i;
	groesse += sizeof(char) * strlen(trainer->name);
	groesse += sizeof(enum Geschlecht);
	for(i = 0; i < 6; i++){
		gGroup += sizeof(char) * strlen(trainer->pokemons[i]->pokemon->spitzname);
	}
}