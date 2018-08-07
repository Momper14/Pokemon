#include "Fight.h"
#include <stdlib.h>
#include <stdio.h>

#define CLEAR_CHOICE read[0] = 0

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

	// Sleep
	if (pkm->status == STATUS_SCHLAF) {
		//Gen I Sleep lasts 1-7
		pokemonTemp->sleepCounter = (rand()%7)+1;
	}else {
		pokemonTemp->sleepCounter = 0;
	}

	return pokemonTemp;

}

bool APCheck(PokemonFight *pkm) {

	char attackZahl = 0;
	char APLeft = 0;
	int i = 0;
	for (i = 0; pkm->pokemon->pokemon->moves[i]->ap != 0; i++) {
		attackZahl = i + 1;
	}
	// KB auf eventuelle Fehler wegen zugriff auf NULL deswegen zuerst der Counter
	for (i = 0; i > attackZahl; i++) {
		if (pkm->pokemon->pokemon->moves[i]->ap > 0) {
			APLeft++;
		}
	}
	// Falls APLeft dann true 
	if (APLeft > 0) {
		return true;
	} // Sonst false
	else {
		return false;
	}


}

byte chooseAttackPlayer(PokemonFight *pkm1) {

	char read[MAX_SIZE];

	do {
		// Falls Schleife wiederholt werden muss
		if (read[0] != 0) {
			printf("Fehlerhafte Eingabe\n");
			CLEAR_CHOICE;
		}
		if (!(APCheck(pkm1))) {
			return ATTACKE_VERZWEIFLER;
		}
		printf("Was soll %s tun ?\n", pkm1->pokemon->pokemon->spitzname);
		// Name der Attacke in AttackDex aufrufen
		printf("1 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[0]->attackeBasis]->name);
		printf("2 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[1]->attackeBasis]->name);
		printf("3 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[2]->attackeBasis]->name);
		printf("4 %s\n", AttackDex[pkm1->pokemon->pokemon->moves[3]->attackeBasis]->name);

		read[0] = getchar();

	} while (read[0] != 1 || read[0] != 2 || read[0] != 3 || read[0] != 4);

	return pkm1->pokemon->pokemon->moves[read[0]]->attackeBasis;
}

char chooseAttackWild(PokemonFight *pkm) {

	char wahl;

	if (!(APCheck(pkm))) {
		printf("%s hat keine AP mehr übrig\n",PokemonBaseNatDex[pkm->pokemon->pokemon->base]->name);
		return ATTACKE_VERZWEIFLER;
	}


	if (pkm->pokemon->pokemon->moves[3] == NULL) {
		wahl = 3;
		if (pkm->pokemon->pokemon->moves[2] == NULL) {
			wahl = 2;
			if (pkm->pokemon->pokemon->moves[1] == NULL) {
				wahl = 1;
				if (pkm->pokemon->pokemon->moves[0] == NULL) {
					printf("Na, was du denn da angestellt ?\n");
					return 0;
				}
			}
		}
	}else { 
		wahl = 4; 
	}

	return pkm->pokemon->pokemon->moves[rand()%wahl]->attackeBasis;
}

void attackExecute(PokemonFight *angreifer, PokemonFight *verteidiger, byte attack) {

	// Zuerst Status überprüfen ob FRZ,SLP, Verwirrt oder Paralysiert

	if (angreifer->pokemon->status == STATUS_FREEZE) {
		// In Gen I kann ein Pokemon ohne Hilfe nicht auftauen
		printf("%s ist erfroren und kann sich nicht bewegen!\n", angreifer->pokemon->pokemon->spitzname);
		return;
	}

	if (angreifer->pokemon->status == STATUS_PARALYSE) {
		printf("%s ist paralysiert!\n",angreifer->pokemon->pokemon->spitzname);
		if (rand()%100 < 25) {
			printf("Es kann sich nicht bewegen!\n");
			return;
		}
	}

	if (angreifer->pokemon->status == STATUS_SCHLAF) {
		// Wird jede Runde um 1 reduziert
		angreifer->sleepCounter--;

		if (angreifer->sleepCounter == 0) {
			printf("%s ist aufgewacht!\n", angreifer->pokemon->pokemon->spitzname);
			angreifer->pokemon->status = STATUS_NORMAL;
			return;
		} else {
			printf("%s schläft tief und fest!\n", angreifer->pokemon->pokemon->spitzname);
			return;
		}
	}

	if (angreifer->verwirrung) {
		printf("%s ist verwirrt!\n",angreifer->pokemon->pokemon->spitzname);
		if (rand()%100 < 50) { // 50% Chance Gen I - VI
			printf("Es hat sich vor Verwirrung selbst verletzt\n");
			// apply 40-power typeless physical attack (without the possibility of a critical hit) to itself
			return;
		}
	}

	// Jetzt kommen wir zur Ausführung der Attacke (Die jetzt immernoch daneben gehen kann)



}

void mainFight(PokemonGroup *pkm1, PokemonGroup *pkm2) {

	// Initialisieren der structs PokemonFight
	// pokemonPlayer ist das Pokemon des Spielers, welches er kontrolliert
	// pokemonAI ist das Pokemon der AI
	struct PokemonFight *pokemonPlayer = generatePokemonFight(pkm1);
	struct PokemonFight *pokemonAI     = generatePokemonFight(pkm2);

	struct PokemonFight *attackFirst  = malloc(sizeof(struct PokemonFight));
	struct PokemonFight *attackSecond = malloc(sizeof(struct PokemonFight));

	byte attack1, attack2;
	attack1 = attack2 = 0;

	char choicePlayer,choiceAI;
	choicePlayer = choiceAI = 0;

	////////////////
	// Main Fight //
	////////////////

	do {
		// Player wählt seine Attacke aus
		// In Do-While Schleife um übrige AP zu berücksichtigen
		do {
			if (pokemonPlayer->pokemon->pokemon->moves[choicePlayer]->ap == 0) {
				printf("Nicht genügend AP vorhanden um die Attacke durchzuführen");
			}
			choicePlayer = chooseAttackPlayer(pokemonPlayer);


		} while (pokemonPlayer->pokemon->pokemon->moves[choicePlayer]->ap == 0);
		// Auswahl der Attacke des Gegners 
		do {

			if (!(APCheck(pokemonPlayer))) {
				// Use Verzweifler
			}

			choiceAI = chooseAttackWild(pokemonAI);
		} while (pokemonAI->pokemon->pokemon->moves[choiceAI]->ap  == 0);

		// Attacken sind nun ausgewählt. Ermitteln wer zuerst dran ist

		// Zuerst priorität der Attacke überprüfen
		if (AttackDex[choicePlayer]->priority > AttackDex[choiceAI]->priority)  {
			// z.B. Ruckzuckhieb > Konter
			// Fun Fact Paralyse verringert die Initiative um 75 % und sorgt damit nicht dafür dass das paralysierte PKM garantiert zuletzt angreift
			// https://bulbapedia.bulbagarden.net/wiki/Paralysis_(status_condition)
			attackFirst  = pokemonPlayer;
			attackSecond = pokemonAI;
		}
		else if (AttackDex[choicePlayer]->priority < AttackDex[choiceAI]->priority) {
			attackFirst  = pokemonAI;
			attackSecond = pokemonPlayer;
		} else {
			// Wenn keine der Attacke eine höhere Priotität hat geht es natürlich nach Initiative
			if (pokemonPlayer->tempStats[STAT_INITIATIVE] > pokemonAI->tempStats[STAT_INITIATIVE]) {
				attackFirst = pokemonPlayer;
				attackSecond = pokemonAI;
			}else {
				attackFirst = pokemonAI;
				attackSecond = pokemonPlayer;			
			}
		}


	
	} while (pokemonAI->pokemon->aktKP != 0 || pokemonPlayer->pokemon->aktKP != 0);
}