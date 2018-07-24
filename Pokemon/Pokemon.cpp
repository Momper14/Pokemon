
#include "Base.h"
#include <stdio.h>


void printPkm(const struct pokemonBase *pkm);

int main(){
	char in;

	printPkm(&Bisasam);
	printPkm(&Bisaknosp);
	printPkm(&Bisaflor);

	scanf_s("%c", &in);

	return 0;
}

void printPkm(const struct pokemonBase *pkm){
	printf("Nationaldex: %d\n", pkm->natDex);
	printf("Name: %s\n", pkm->name);
	printf("HP: %d\n", pkm->hp);
	printf("Angriff: %d\n", pkm->attack);
	printf("Verteidigung %d\n", pkm->defense);
	printf("Spezial Angriff: %d\n", pkm->spAttack);
	printf("Spezial Verteidigung: %d\n", pkm->spDefense);
	printf("Initiative: %d\n", pkm->speed);
	printf("Entwicklungslevel: %d\n", pkm->evolveLvl);
	if(pkm->evolution != nullptr){
		printf("Weiterentwicklung: %s\n", pkm->evolution->name);
	}
	printf("\n\n\n");
}

