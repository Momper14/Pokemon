
#include "Base.h"
#include "attacks.h"
#include "Pokemon.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
	char in;

	const struct pokemonBase *pkm = pokemons[133];

	int i;
	for(i = 0; i < pkm->numEvolutions; i++){
		printf("%s\n", pkm->evolutions[i].evol->name);
	}
		
	scanf_s("%c", &in, 1);

	return 0;
}


