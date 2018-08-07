
#include "Base.h"
#include "Attacks.h"
#include "Pokemon.h"
#include "Types.h"
#include "Trainer.h"
#include "Serialisieren.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdarg.h>

#define CLEAR_IN while((getchar()) != '\n')
#define HALBIEREN(wert) ((wert) / 2)

#define MAX_IN 100

void leseSpitzname(char *arr);
void prints(const char * format, ...);

byte delay = 50;

int main(){
	srand((uint) time(NULL));

	struct Trainer *trainer = malloc(sizeof(struct Trainer));
	char gelesen[MAX_IN];
	int i;

	setlocale(LC_ALL, "");

	for(i = 0; i < 6; i++){
		trainer->gruppe[i] = NULL;
	}

	prints("Hallo und willkommen bei Pokemon ***\n");

	do{
		prints("Wie lautet dein Name? (max %d zeichen)\n", NAME_SIZE);
		scanf_s("%s", gelesen, NAME_SIZE);
		CLEAR_IN;

		{
			strcpy_s(trainer->name, NAME_SIZE, gelesen);
		}
		prints("Dein name ist also %s ja? (j/n)\n", trainer->name);
	} while(getchar() != 'j');

	do{
		CLEAR_IN;
		do{
			prints("Bist du ein Junge oder ein Mädchen?\n");
			printf("\t(1) Junge\n");
			printf("\t(2) Mädchen\n");
			gelesen[0] = getchar();
			CLEAR_IN;
			if(gelesen[0] != '1' && gelesen[0] != '2'){
				prints("Das habe ich leider nicht verstanden\n");
			}
		} while(gelesen[0] != '1' && gelesen[0] != '2');

		if(gelesen[0] == '1'){
			trainer->geschlecht = maenlich;
			prints("Du bist also ein Junge ja? (j/n)\n");
		}
		if(gelesen[0] == '2'){
			trainer->geschlecht = weiblich;
			prints("Du bist also ein Mädchen ja? (j/n)\n");
		}

	} while(getchar() != 'j');

	do{
		CLEAR_IN;
		char tmp;
		do{
			prints("Welches Pokemon hättest du gerne als Starter?\n");
			printf("\t(1) Bisasam  (Pflanze)\n");
			printf("\t(2) Glumanda (Feuer)\n");
			printf("\t(3) Schiggy  (Wasser)\n");
			printf("\t(4) Pikachu  (Blitz)\n");

			gelesen[0] = getchar();
			CLEAR_IN;
			if(gelesen[0] < '1' && gelesen[0] > '4'){
				prints("Das habe ich leider nicht verstanden\n");
			}
		} while(gelesen[0] < '1' && gelesen[0] > '4');
		tmp = gelesen[0];

		prints("Du möchtest also");
		switch(tmp){
			case '1':
				prints(" Bisasam");
				break;
			case '2':
				prints(" Glumanda");
				break;
			case '3':
				prints(" Schiggy");
				break;
			case '4':
				prints(" Pikachu");
				break;
		}
		prints(" haben. Ist das richtig? (j/n)\n");
		gelesen[0] = getchar();
		if(gelesen[0] == 'j'){

			switch(tmp){
				case '1':
					trainer->gruppe[0] = newPokemonGroup(generatePokemon(POKEMON_BISASAM, 5));
					break;
				case '2':
					trainer->gruppe[0] = newPokemonGroup(generatePokemon(POKEMON_GLUMANDA, 5));
					break;
				case '3':
					trainer->gruppe[0] = newPokemonGroup(generatePokemon(POKEMON_SCHIGGY, 5));
					break;
				case '4':
					trainer->gruppe[0] = newPokemonGroup(generatePokemon(POKEMON_PIKACHU, 5));
					break;
			}
		}
	} while(gelesen[0] != 'j');
	CLEAR_IN;

	leseSpitzname(gelesen);
	CLEAR_IN;
	if(strlen(gelesen) != 0){
		strcpy_s(trainer->gruppe[0]->pokemon->spitzname, SPITZNAME_SIZE, gelesen);
	}
	speichern(trainer);
	getchar();
	free(trainer);
	return 0;
}

void leseSpitzname(char *arr){
	prints("möchtest du ihm einen Spitznamen geben? (j/n)\n");
	arr[0] = '\0';

	if(getchar() != 'j'){
		CLEAR_IN;
		return;
	}
	CLEAR_IN;

	do{
		prints("Wie soll es denn heißen? (Max %d Zeichen)\n", SPITZNAME_SIZE);
		scanf_s("%s", arr, SPITZNAME_SIZE);
		CLEAR_IN;

		if(strlen(arr) == 0){
			prints("Möchtest du ihm doch kein Spitznamen geben? (j/n)\n");
		} else{
			prints("Ist %s richtig? (j/n)\n", arr);
		}
	} while(getchar() != 'j');
}

void prints(const char * format, ...){
	va_list args;
	va_start(args, format);
	char str[200];
	vsprintf_s(str, 200, format, args);
	va_end(args);
	int i;
	for(i = 0; str[i] != '\0'; i++){
		fprintf_s(stderr, "%c", str[i]);
		Sleep(delay);
	}
}