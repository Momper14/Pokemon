#include "Fight.h"
#include <stdlib.h>

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


void mainFight(PokemonGroup *pkm1, PokemonGroup *pkm2) {

	// Initialisieren der structs PokemonFight
	// pokemonPlayer ist das Pokemon des Spielers, welches er kontrolliert
	// pokemonAI ist das Pokemon der AI
	struct PokemonFight *pokemonPlayer = generatePokemonFight(pkm1);
	struct PokemonFight *pokemonAI     = generatePokemonFight(pkm2);

	int tmp1, tmp2, tmp3, tmp4;
	tmp1 = tmp2 = tmp3 = tmp4 = 0;

	////////////////
	// Main Fight //
	////////////////

	do {

		printf("Was soll %s tun ?\n",pokemonPlayer->pokemon->pokemon->spitzname);
		// AttackDex Index abspeichern 
		tmp1 = pokemonPlayer->pokemon->pokemon->moves[0];
		tmp2 = pokemonPlayer->pokemon->pokemon->moves[1];
		tmp3 = pokemonPlayer->pokemon->pokemon->moves[2];
		tmp4 = pokemonPlayer->pokemon->pokemon->moves[3];
		// Und in attackDex aufrufen
		printf("1 %s\n", AttackDex[tmp1]->name);
		printf("2 %s\n", AttackDex[tmp2]->name);
		printf("3 %s\n", AttackDex[tmp3]->name);
		printf("4 %s\n", AttackDex[tmp4]->name);
	
	
	
	
	
	} while (pokemonAI->pokemon->aktKP != 0 || pokemonPlayer->pokemon->aktKP != 0);
}