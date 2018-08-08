
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

#define MAX_IN 100

#define CLEAR_IN fseek(stdin, 0, SEEK_END);
#define LESESEN_JA (gelesen[MAX_IN - 1] = getchar()) == 'j' || gelesen[MAX_IN - 1] == 'J' || gelesen[MAX_IN - 1] == '\n'
#define LESESEN_NEIN (gelesen[MAX_IN - 1] = getchar()) != 'j' && gelesen[MAX_IN - 1] != 'J' && gelesen[MAX_IN - 1] != '\n'
#define JA gelesen[MAX_IN - 1] == 'j' || gelesen[MAX_IN - 1] == 'J' || gelesen[MAX_IN - 1] == '\n'
#define NEIN gelesen[MAX_IN - 1] != 'j' && gelesen[MAX_IN - 1] != 'J' && gelesen[MAX_IN - 1] != '\n'


void leseSpitzname(char *arr);
void prints(const char * format, ...);
void neuesSpiel(struct Trainer *trainer);

byte delay = 50;
char gelesen[MAX_IN];

int main(){
	srand((uint) time(NULL));

	struct Trainer *trainer = malloc(sizeof(struct Trainer));

	setlocale(LC_ALL, "");

	switch(laden(trainer)){
		case ok:
			while(true){
				do{
					prints("Hauptmenu:\n");
					printf("\t(1) Spielstand laden\n");
					printf("\t(2) Neues Spiel\n");

					gelesen[0] = getchar();
					CLEAR_IN;
					if(gelesen[0] != '1' && gelesen[0] != '2'){
						prints("Das habe ich leider nicht verstanden\n");
					}
				} while(gelesen[0] != '1' && gelesen[0] != '2');
				if(gelesen[0] == '1'){
					break;
				}
				if(gelesen[0] == '2'){
					prints("Dein gesammter Vortschritt wird dabei gelöscht. Bist du dir sicher? (J/n)\n");
					if(LESESEN_JA){
						CLEAR_IN;
						neuesSpiel(trainer);
						break;
					}
					CLEAR_IN;
				}
			}
			break;
		case defekt:
			prints("Der Speicherstand ist Defekt. Es wir ein neues Spiel gestartet...\n");
		case leer:
			neuesSpiel(trainer);
			break;
		default:
			neuesSpiel(trainer);
	}

	getchar();
	speichern(trainer);
	free(trainer);
	return 0;
}

void leseSpitzname(char *arr){
	prints("möchtest du ihm einen Spitznamen geben? (J/n)\n");

	if(LESESEN_NEIN){
		CLEAR_IN;
		return;
	}

	do{
		CLEAR_IN;
		prints("Wie soll es denn heißen? (Max %d Zeichen)\n", SPITZNAME_SIZE - 1);
		arr[0] = getchar();
		if(arr[0] != '\n'){
			scanf_s("%s", &arr[1], SPITZNAME_SIZE - 1);
		}
		CLEAR_IN;

		if(arr[0] == '\n'){
			prints("Möchtest du ihm doch kein Spitznamen geben? (J/n)\n");
			arr[0] = '\0';
		} else{
			prints("Ist %s richtig? (J/n)\n", arr);
		}
	} while(LESESEN_NEIN);
	CLEAR_IN;
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

void neuesSpiel(struct Trainer *trainer){
	int i;

	for(i = 0; i < 6; i++){
		trainer->gruppe[i] = NULL;
	}

	prints("Hallo und willkommen bei Pokemon ***\n");

	do{
		CLEAR_IN;
		prints("Wie lautet dein Name? (max %d zeichen)\n", NAME_SIZE - 1);
		scanf_s("%s", gelesen, NAME_SIZE);
		CLEAR_IN;

		strcpy_s(trainer->name, NAME_SIZE, gelesen);
		prints("Dein name ist also %s ja? (J/n)\n", trainer->name);
	} while(LESESEN_NEIN);

	do{
		do{
			CLEAR_IN;
			prints("Bist du ein Junge oder ein Mädchen?\n");
			printf("\t(1) Junge\n");
			printf("\t(2) Mädchen\n");
			gelesen[0] = getchar();
			CLEAR_IN;
			if(gelesen[0] != '1' && gelesen[0] != '2'){
				prints("Das habe ich leider nicht verstanden\n");
			}
		} while(gelesen[0] != '1' && gelesen[0] != '2');
		CLEAR_IN;

		prints("Du bist also ein");
		if(gelesen[0] == '1'){
			trainer->geschlecht = maenlich;
			prints(" Junge");
		}
		if(gelesen[0] == '2'){
			trainer->geschlecht = weiblich;
			prints(" Mädchen");
		}
		prints(" ja? (j/n)\n");

	} while(LESESEN_NEIN);

	do{
		CLEAR_IN;
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

		prints("Du möchtest also");
		switch(gelesen[0]){
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
		prints(" haben. Ist das richtig? (J/n)\n");
		if(LESESEN_JA){
			switch(gelesen[0]){
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
		CLEAR_IN;
	} while(NEIN);
	CLEAR_IN;

	leseSpitzname(gelesen);
	if(strlen(gelesen) != 0){
		strcpy_s(trainer->gruppe[0]->pokemon->spitzname, SPITZNAME_SIZE, gelesen);
	}

}