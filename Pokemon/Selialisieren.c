#include "Serialisieren.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void speichern(struct Trainer *trainer){
	int i, x;
	struct Save save;

	strcpy_s(save.name, NAME_SIZE, trainer->name);
	save.geschlecht = trainer->geschlecht;
	for(i = 0; i < 6; i++){
		if(trainer->gruppe[i] != NULL && trainer->gruppe[i]->pokemon != NULL){
			struct SavePokemonGroup *sPkm = &save.gruppe[i];
			struct SavePokemonClass *sClPkm = &sPkm->pokemon;

			struct PokemonGroup *pkm = trainer->gruppe[i];
			struct PokemonClass *clPkm = pkm->pokemon;

			strcpy_s(sClPkm->spitzname, NAME_SIZE, clPkm->spitzname);
			sClPkm->level = clPkm->level;
			sClPkm->expAct = clPkm->expAct;
			sClPkm->expNext = clPkm->expNext;
			sClPkm->base = clPkm->base;
			for(x = 0; x < 6; x++){
				sClPkm->iv[x] = clPkm->iv[x];
			}
			for(x = 0; x < 6; x++){
				sClPkm->ev[x] = clPkm->ev[x];
			}
			for(x = 0; x < 4; x++){
				if(clPkm->moves[x] != NULL){
					struct SaveAttacke *sAtk = &sClPkm->moves[x];
					struct Attacke * atk = clPkm->moves[x];

					sAtk->attackeBasis = atk->attackeBasis;
					sAtk->apPlus = atk->apPlus;
					sAtk->ap = atk->ap;
				} else{
					sClPkm->moves[x].attackeBasis = NICHT_VORHANDEN;
				}
			}
			sPkm->status = pkm->status;
			sPkm->aktKP = pkm->aktKP;
		} else{
			save.gruppe[i].pokemon.base = NICHT_VORHANDEN;
		}
	}
	FILE *file;
	if(fopen_s(&file, "save.sav", "wb") == 0){
		fwrite(&save, sizeof(struct Save), 1, file);
		fclose(file);
	}
}

enum SaveState laden(struct Trainer *trainer){
	struct Save save;

	FILE *file;
	if(fopen_s(&file, "save.sav", "rb") != 0){
		return leer;
	}

	if(sizeof(file) == 0){
		fclose(file);
		return leer;
	}

	if(fread(&save, sizeof(struct Save), 1, file) != 1){
		fclose(file);
		return defekt;
	}

	int i, x;

	strcpy_s(trainer->name, NAME_SIZE, save.name);
	trainer->geschlecht = save.geschlecht;
	for(i = 0; i < 6; i++){
		if(save.gruppe[i].pokemon.base != NICHT_VORHANDEN){
			struct SavePokemonGroup *sGrPkm = &save.gruppe[i];
			struct SavePokemonClass *sClPkm = &sGrPkm->pokemon;
			struct PokemonGroup *grPkm = malloc(sizeof(struct PokemonGroup));
			struct PokemonClass *clPkm = malloc(sizeof(struct PokemonClass));

			trainer->gruppe[i] = grPkm;

			grPkm->pokemon = clPkm;
			grPkm->status = sGrPkm->status;
			grPkm->aktKP = sGrPkm->aktKP;
			grPkm->teilgenommen = false;

			strcpy_s(clPkm->spitzname, SPITZNAME_SIZE, sClPkm->spitzname);
			clPkm->level = sClPkm->level;
			clPkm->expAct = sClPkm->expAct;
			clPkm->expNext = sClPkm->expNext;
			clPkm->base = sClPkm->base;
			for(x = 0; x < 6; x++){
				clPkm->iv[x] = sClPkm->iv[x];
			}
			for(x = 0; x < 6; x++){
				clPkm->ev[x] = sClPkm->ev[x];
			}
			calcStats(clPkm);
			for(x = 0; x < 4; x++){
				if(sClPkm->moves[x].attackeBasis != NICHT_VORHANDEN){
					struct SaveAttacke *sAtk = &sClPkm->moves[x];
					struct Attacke *atk = malloc(sizeof(struct Attacke));

					clPkm->moves[x] = atk;

					atk->attackeBasis = sAtk->attackeBasis;
					atk->ap = sAtk->ap;
					atk->apPlus = sAtk->apPlus;
					atk->apMax = (byte) ((AttackDex[atk->attackeBasis]->ap * atk->apPlus) * 0.2);
				} else{
					clPkm->moves[x] = NULL;
				}
			}
		} else{
			trainer->gruppe[i] = NULL;
		}
	}

	return ok;
}