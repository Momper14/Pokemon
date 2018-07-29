
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	char in;


	int x, i;
	for(x = 1; x <= 151; x++){
		const struct PokemonBase *pkm = PokemonBaseNatDex[x];
		const struct Learnables *ls = pkm->learnables;
		const struct Learnable *l;
		printf("%s:\n", pkm->name);
		for(i = 0; i < ls->count; i++){
			l = &ls->learnables[i];
			printf("\t%d, %s\n", l->lvl, AttackDex[l->attacke]->name);
		}
		scanf_s("%c", &in, 1);
	}

	scanf_s("%c", &in, 1);

	return 0;
}


