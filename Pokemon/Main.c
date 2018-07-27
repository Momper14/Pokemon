
#include "Base.h"
#include "attacks.h"
#include "Pokemon.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	char in;

	const struct PokemonBase *pkm = PokemonBaseNatDex[1];

	int i;

	for(i = 0; i < pkm->learnables->count; i++){
		int tmpi = pkm->learnables->learnables[i].lvl;
		const char *tmps = pkm->learnables->learnables[i].attacke->name;
		printf("%d, %s\n", tmpi, tmps);
	}

	scanf_s("%c", &in, 1);

	return 0;
}


