
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

	printf("%s\n", PokemonBaseNatDex[1]->evolutions[0].evol->name);

	//for(i = 0; i < pkm->countLearnable; i++){
	//	int tmpi = pkm->learnables[i].lvl;
	//	const char *tmps = pkm->learnables[i].attacke->name;
	//	printf("%d, %s\n", tmpi, tmps);
	//}
		
	scanf_s("%c", &in, 1);

	return 0;
}


