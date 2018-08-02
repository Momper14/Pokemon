
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

int main(){
	srand((uint) time(NULL));

	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);

	struct Trainer *trainer = malloc(sizeof(struct Trainer));
	char gelesen[100];

	setlocale(LC_ALL, "");
	printf("Hallo und willkommen bei Pokemon ***\n");

	do{
		printf("Wie lautet dein Name?\n");
		scanf_s("%s", gelesen, 100);
		CLEAR_IN;

		{
			char *name = malloc(sizeof(char) * strlen(gelesen) + 1);
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
	CLEAR_IN;

	scanf_s("%c", gelesen, 1);
	free(trainer);
	return 0;
}
