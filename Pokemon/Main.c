
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	char in;

	const struct PokemonBase *pkm = PokemonBaseNatDex[1];

	int i;

	const struct Learnables *ls= pkm->learnables;
	const struct Learnable *l; 
	for(i = 0; i < ls->count; i++){
		l = &ls->learnables[i];
		printf("%d, %s\n", l->lvl, AttackDex[l->attacke]->name);
	}

	scanf_s("%c", &in, 1);

	return 0;
}


