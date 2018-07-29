
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char in;


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

	ushort test = USHRT_MAX - 2;
	if(test + 10 > USHRT_MAX){
		test = USHRT_MAX;
	}
	printf("%d\n", test);

	scanf_s("%c", &in, 1);

	return 0;
}
