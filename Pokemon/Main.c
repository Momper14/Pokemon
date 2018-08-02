
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include "Trainer.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>

#define CLEAR_IN while((getchar()) != '\n')
#define HALBIEREN(wert) ((wert) / 2)

#define MAX_IN 100

void leseSpitzname(char *arr);

int main(){
	srand((uint) time(NULL));

	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);

	struct Trainer *trainer = malloc(sizeof(struct Trainer));
	char gelesen[MAX_IN];

	setlocale(LC_ALL, "");

	printf("Hallo und willkommen bei Pokemon ***\n");

	do{
		printf("Wie lautet dein Name?\n");
		scanf_s("%s", gelesen, MAX_IN);
		CLEAR_IN;

		{
			char *name = malloc(sizeof(char) * (strlen(gelesen) + 1));
			strcpy_s(name, strlen(gelesen) + 1, gelesen);
			trainer->name = name;
		}
		printf("Dein name ist also %s ja? (j/n)\n", trainer->name);
	} while(getchar() != 'j');

	do{
		CLEAR_IN;
		do{
			printf("Bist du ein Junge oder ein Mädchen?\n");
			printf("\t(1) Junge\n");
			printf("\t(2) Mädchen\n");
			gelesen[0] = getchar();
			CLEAR_IN;
			if(gelesen[0] != '1' && gelesen[0] != '2'){
				printf("Das habe ich leider nicht verstanden\n");
			}
		} while(gelesen[0] != '1' && gelesen[0] != '2');

		if(gelesen[0] == '1'){
			trainer->geschlecht = maenlich;
			printf("Du bist also ein Junge ja? (j/n)\n");
		}
		if(gelesen[0] == '2'){
			trainer->geschlecht = weiblich;
			printf("Du bist also ein Mädchen ja? (j/n)\n");
		}

	} while(getchar() != 'j');

	do{
		CLEAR_IN;
		char tmp;
		do{
			printf("Welches Pokemon hättest du gerne als Starter?\n");
			printf("\t(1) Bisasam  (Pflanze)\n");
			printf("\t(2) Glumanda (Feuer)\n");
			printf("\t(3) Schiggy  (Wasser)\n");
			printf("\t(4) Pikachu  (Blitz)\n");

			gelesen[0] = getchar();
			CLEAR_IN;
			if(gelesen[0] < '1' && gelesen[0] > '4'){
				printf("Das habe ich leider nicht verstanden\n");
			}
		} while(gelesen[0] < '1' && gelesen[0] > '4');
		tmp = gelesen[0];

		printf("Du möchtest also");
		switch(tmp){
			case '1':
				printf(" Bisasam");
				break;
			case '2':
				printf(" Glumanda");
				break;
			case '3':
				printf(" Schiggy");
				break;
			case '4':
				printf(" Pikachu");
				break;
		}
		printf(" haben. Ist das richtig? (j/n)\n");
		gelesen[0] = getchar();
		if(gelesen[0] == 'j'){

			switch(tmp){
				case '1':
					trainer->pokemons[0] = newPokemonGroup(generatePokemon(POKEMON_BISASAM, 5));
					break;
				case '2':
					trainer->pokemons[0] = newPokemonGroup(generatePokemon(POKEMON_GLUMANDA, 5));
					break;
				case '3':
					trainer->pokemons[0] = newPokemonGroup(generatePokemon(POKEMON_SCHIGGY, 5));
					break;
				case '4':
					trainer->pokemons[0] = newPokemonGroup(generatePokemon(POKEMON_PIKACHU, 5));
					break;
			}
		}
	} while(gelesen[0] != 'j');
	CLEAR_IN;

	leseSpitzname(gelesen);
	if(strlen(gelesen) != 0){
		char *tmp = malloc(sizeof(char) * (strlen(gelesen) + 1));
		strcpy_s(tmp, strlen(gelesen) + 1, gelesen);
		trainer->pokemons[0]->pokemon->spitzname = tmp;
	}

	getchar();
	free(trainer);
	return 0;
}

void leseSpitzname(char *arr){
	printf("möchtest du ihm einen Spitznamen geben? (j/n)\n");

	if(getchar() != 'j'){
		CLEAR_IN;
		return;
	}	
	CLEAR_IN;

	printf("Wie soll es denn heißen?\n");
	do{
		scanf_s("%s", arr, MAX_IN);
		CLEAR_IN;

		if(strlen(arr) == 0){
			printf("Möchtest du ihm doch kein Spitznamen geben? (j/n)\n");
		} else{
			printf("Ist %s richtig? (j/n)\n", arr);
		}
	} while(getchar() != 'j');
}