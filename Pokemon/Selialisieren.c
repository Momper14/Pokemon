#include "Serialisieren.h"
#include <string.h>
#include <stdio.h>

void speichern(struct Trainer *trainer){
	int i, x;
	struct Save save;
	struct SaveStrings strings;

	for(i = 0; i < 6; i++){
		strings.spitzname[i] = NULL;
	}

	save.nameLaenge = strlen(trainer->name);
	strings.trainername = trainer->name;
	save.geschlecht = trainer->geschlecht;
	for(i = 0; i < 6; i++){
		if(trainer->gruppe[i] != NULL && trainer->gruppe[i]->pokemon != NULL){
			struct SavePokemonGroup *sPkm = &save.gruppe[i];
			struct SavePokemonClass *sClPkm = &sPkm->pokemon;

			struct PokemonGroup *pkm = trainer->gruppe[i];
			struct PokemonClass *clPkm = pkm->pokemon;

			sClPkm->spitznameLaenge = strlen(clPkm->spitzname);
			strings.spitzname[i] = clPkm->spitzname;
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
					struct SaveAttackeG *sAtk = &sClPkm->moves[x];
					struct Attacke * atk = clPkm->moves[x];

					sAtk->atk.attackeBasis = atk->attackeBasis;
					sAtk->atk.apPlus = atk->apPlus;
					sAtk->ap = atk->ap;
				} else{
					sClPkm->moves[x].atk.attackeBasis = NICHT_VORHANDEN;
				}
			}
			sPkm->status = pkm->status;
			sPkm->aktKP = pkm->aktKP;
		} else{
			save.gruppe[i].pokemon.base = NICHT_VORHANDEN;
		}
	}
	FILE *file;
	errno_t err = fopen_s(&file, "save.sav", "wb");
	if(err == 0){
		fwrite(&save, sizeof(struct Save), 1, file);
		fwrite(strings.trainername, sizeof(char) * strlen(strings.trainername), 1, file);
		for(i = 0; i < 6; i++){
			if(strings.spitzname[i] != NULL){
				fwrite(strings.spitzname[i], sizeof(char) * strlen(strings.spitzname[i]), 1, file);
			}
		}
	}
	fclose(file);
}