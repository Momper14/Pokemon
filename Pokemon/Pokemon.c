#include "Pokemon.h"
#include <math.h>
#include <stdlib.h>

void calcStat(PokemonClass *pokemon, byte stat);

void clacStats(PokemonClass *pokemon){
	byte i;
	for(i = 0; i < 6; i++){
		calcStat(pokemon, i);
	}
}


void calcStat(PokemonClass *pokemon, byte stat){
	byte x, y, basis, iv, level;
	ushort se = pokemon->ev[stat];
	basis = pokemon->base->stats[stat];
	iv = pokemon->iv[stat];
	level = pokemon->level;

	if(se == 0){
		x = 0;
	} else{
		//    2  _________
		//	   \/ ev - 1 | + 1
		// x = ----------------
		//			   4
		x = (byte) sqrt(se - 1);
		if(x < 255){
			x += 1;
		}
		x = x / 4;
	}

	if(stat == STAT_KP){
		y = level + 10;
	} else{
		y = 5;
	}

	// ((basis + iv) * 2 + x) * level
	// ------------------------------ + y
	//              100
	pokemon->stats[stat] = ((((basis + iv) * 2 + x) * level) / 100) + y;
}

uint calcEXPNeed(byte aktLvl, enum EXP_TIER expTier){
	if(aktLvl >= 100){
		return 0;
	} else{
		byte lvlNext = aktLvl + 1;
		switch(expTier){
			case EXP_T2:

				//  4*lvl³
				// -------
				//    5
				return (uint) (4 * pow(lvlNext, 3) / 5);

			case EXP_T3:

				// n³
				return (uint) (pow(lvlNext, 3));

			case EXP_T4:

				//  6
				// ---n³ - 15n² + 100n - 140
				//  5
				return (uint) ((6 * pow(lvlNext, 3)) / 5 - 15 * pow(lvlNext, 2) + 100 * lvlNext - 140);

			case EXP_T5:

				//  5
				// ---n³
				//  4
				return (uint) (((5 * pow(lvlNext, 3)) / 4));
			default:
				return UINT_MAX;
		}
	}
}

ushort expGain(struct PokemonClass *gegner, short teilnemer){
	uint wert = gegner->base->exp * gegner->level;

	return (ushort) (wert / (7 * teilnemer));
}

void statsGain(struct PokemonClass *pokemon, const PokemonBase *enemy){
	byte i;
	for(i = 0; i < 6; i++){
		ushort wert = pokemon->stats[i];
		if(wert < USHRT_MAX){
			uint tmp;
			if((tmp = wert + enemy->stats[i]) >= USHRT_MAX){
				wert = USHRT_MAX;
			} else{
				wert += (ushort) tmp;
			}
			pokemon->stats[i] = wert;
		}
	}
}

struct PokemonClass* generatePokemon(byte dexNr, byte lvl){
	if(dexNr <= ANZ_POKEMON && lvl > 0 && lvl <= 100){
		const struct PokemonBase *base = PokemonBaseNatDex[dexNr];
		struct PokemonClass *pkm = malloc(sizeof(struct PokemonClass));
		pkm->spitzname = NULL;
		pkm->level = lvl;
		pkm->expAct = calcEXPNeed(lvl - 1, base->expTier);
		pkm->expNext = calcEXPNeed(lvl, base->expTier);
		pkm->base = base;
		byte i;
		for(i = 0; i < 6; i++){
			pkm->iv[i] = rand() % 16;
		}
		for(i = 0; i < 6; i++){
			pkm->ev[i] = 0;
		}
		for(i = 0; i < 4; i++){
			pkm->moves[i] = NULL;
		}
		pkm->item = 0;

		clacStats(pkm);
		const struct Learnables *learnables = base->learnables;
		const struct Learnable *learnable;
		byte x = 0;
		for(i = 0; i < learnables->count && (learnable = &learnables->learnables[i])->lvl <= lvl; i++){
			if(lernbar(pkm, learnable->attacke)){
				if(pkm->moves[x] != NULL){
					free(pkm->moves[x]);
				}
				struct Attacke *atk = malloc(sizeof(struct Attacke));
				atk->attacke = learnable->attacke;
				atk->ap = AttackDex[learnable->attacke]->ap;
				atk->apMax = atk->ap;
				atk->apPlus = 0;
				pkm->moves[x] =atk;
				x = (x + 1) % 4;
			}
		}

		return pkm;
	}

	return NULL;
}

bool lernbar(struct PokemonClass *pkm, byte attacke){
	byte i;
	for(i = 0; i < 4; i++){
		if(pkm->moves[i] != NULL && pkm->moves[i]->attacke == attacke){
			return false;
		}
	}
	return true;
}