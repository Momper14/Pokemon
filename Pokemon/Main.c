
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	char in;
	srand((uint)time(NULL));


	//int x, i;
	//for(x = 1; x <= 151; x++){
	//	const struct PokemonBase *pkm = PokemonBaseNatDex[x];
	//	const struct Learnables *ls = pkm->learnables;
	//	const struct Learnable *l;
	//	printf("%s:\n", pkm->name);
	//	for(i = 0; i < ls->count; i++){
	//		l = &ls->learnables[i];
	//		printf("\t%d, %s\n", l->lvl, AttackDex[l->attacke]->name);
	//	}
	//	scanf_s("%c", &in, 1);
	//}

	//struct PokemonClass pkm = { NULL, 100, 0, &Abra, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, 65535, 65535, 65535, 65535, 65535, 65535, NULL, NULL, NULL, NULL, 0 };
	//clacStats(&pkm);
	//printf("KP: %d, ATK: %d, DEF: %d, SP. ATK: %d, SP. DEF: %d, SPD: %d\n", pkm.stats[STAT_KP], pkm.stats[STAT_ANGRIFF], pkm.stats[STAT_VERTEIDIGUNG], pkm.stats[STAT_SPEZIALANGRIFF], pkm.stats[STAT_SPEZIALVERTEIDIGUNG], pkm.stats[STAT_INITIATIVE]);

	struct PokemonClass *pkm = generatePokemon(3, 100);
	printf("%d, %d, %d, %d, %d, %d\n", pkm->iv[0], pkm->iv[1], pkm->iv[2], pkm->iv[3], pkm->iv[4], pkm->iv[5]);
	destroyPokemon(pkm);
	pkm = generatePokemon(3, 100);
	printf("%d, %d, %d, %d, %d, %d\n", pkm->iv[0], pkm->iv[1], pkm->iv[2], pkm->iv[3], pkm->iv[4], pkm->iv[5]);
	destroyPokemon(pkm);

	scanf_s("%c", &in, 1);

	return 0;
}
