#include "Fight.h"
#include <stdlib.h>
#include <stdio.h>

#define CLEAR_CHOICE read[0] = NULL

struct PokemonFight* generatePokemonFight(struct PokemonGroup *pkm) {
	
	PokemonFight *pokemonTemp = malloc(sizeof(struct PokemonFight));
	int i = 0;
	pokemonTemp->pokemon = pkm;
	
	for (i = 0; i < 8; i++) {
		pokemonTemp->stufen[i] = 1;
	}
	pokemonTemp->tempStats[STAT_KP]                  = pokemonTemp->pokemon->aktKP;
	pokemonTemp->tempStats[STAT_ANGRIFF]             = pokemonTemp->pokemon->pokemon->stats[STAT_ANGRIFF];
	pokemonTemp->tempStats[STAT_VERTEIDIGUNG]        = pokemonTemp->pokemon->pokemon->stats[STAT_VERTEIDIGUNG];
	pokemonTemp->tempStats[STAT_SPEZIALANGRIFF]      = pokemonTemp->pokemon->pokemon->stats[STAT_SPEZIALANGRIFF];
	pokemonTemp->tempStats[STAT_SPEZIALVERTEIDIGUNG] = pokemonTemp->pokemon->pokemon->stats[STAT_SPEZIALVERTEIDIGUNG];
	pokemonTemp->tempStats[STAT_INITIATIVE]          = pokemonTemp->pokemon->pokemon->stats[STAT_INITIATIVE];
	pokemonTemp->tempStats[STAT_GENAUIGKEIT]         = 1;
	pokemonTemp->tempStats[STAT_FLUCHTWERT]          = 0;

	pokemonTemp->verwirrung = false;

	return pokemonTemp;

}

char chooseAttackPlayer(PokemonFight *pkm1) {

	char *read[MAX_SIZE];

	do {
		// Falls Schleife wiederholt werden muss
		if (read[0] != NULL) {
			printf("Fehlerhafte Eingabe\n");
		}

		printf("Was soll %s tun ?\n", pkm1->pokemon->pokemon->spitzname);
		// Name der Attacke in AttackDex aufrufen
		printf("1 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[0]->attackeBasis]->name);
		printf("2 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[1]->attackeBasis]->name);
		printf("3 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[2]->attackeBasis]->name);
		printf("4 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[3]->attackeBasis]->name);

		read[0] = getchar();

	} while (read[0] != 1 || read[0] != 2 || read[0] != 3 || read[0] != 4);

	return read[0];
}

char chooseAttackWild(PokemonFight *pkm) {

	char wahl;

	if (pkm->pokemon->pokemon->moves[3] == NULL) {
		wahl = 3;
		if (pkm->pokemon->pokemon->moves[2] == NULL) {
			wahl = 2;
			if (pkm->pokemon->pokemon->moves[1] == NULL) {
				wahl = 1;
				if (pkm->pokemon->pokemon->moves[0] == NULL) {
					printf("Na, was du denn da angestellt ?\n");
					return NULL;
				}
			}
		}
	}else { 
		wahl = 4; 
	}

	return rand()%wahl;
}


void mainFight(PokemonGroup *pkm1, PokemonGroup *pkm2) {

	// Initialisieren der structs PokemonFight
	// pokemonPlayer ist das Pokemon des Spielers, welches er kontrolliert
	// pokemonAI ist das Pokemon der AI
	struct PokemonFight *pokemonPlayer = generatePokemonFight(pkm1);
	struct PokemonFight *pokemonAI     = generatePokemonFight(pkm2);

	int tmp1, tmp2, tmp3, tmp4;
	tmp1 = tmp2 = tmp3 = tmp4 = 0;
	char *read[MAX_SIZE];

	char choice1,choice2;
	choice1 = choice2 = 0;

	////////////////
	// Main Fight //
	////////////////

	do {
		// Player wählt seine Attacke aus
		// In Do-While Schleife um übrige AP zu berücksichtigen
		do {
			if (pokemonPlayer->pokemon->pokemon->moves[choice1]->ap == 0) {
				printf("Nicht genügend AP vorhanden um die Attacke durchzuführen");
			}
			choice1 = chooseAttackPlayer(pokemonPlayer);
		} while (pokemonPlayer->pokemon->pokemon->moves[choice1]->ap == 0);
		// Auswahl der Attacke des Gegners 
		do {
			choice2 = chooseAttackWild(pokemonAI);
		} while (pokemonAI->pokemon->pokemon->moves[choice2]->ap  == 0);

	
	} while (pokemonAI->pokemon->aktKP != 0 || pokemonPlayer->pokemon->aktKP != 0);
}