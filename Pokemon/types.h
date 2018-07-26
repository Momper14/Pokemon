#pragma once

// Positionen des Typs im Array
#define NORMAL   0
#define KAMPF    1
#define FLUG     2
#define GIFT     3
#define BODEN    4
#define STEIN    5
#define KAEFER   6
#define GEIST    7
#define STAHL    8
#define FEUER    9
#define WASSER   10
#define PFLANZE  11
#define ELEKTRO  12
#define PSYCHO   13
#define EIS      14
#define DRACHE   15
#define UNLICHT  16
#define KEINTYP  17

// Effektivität
#define EFFEKT_SEHR  2
#define EFFEKT_NORM  1
#define EFFEKT_NICHT 0.5
#define EFFEKT_IMMUN 0

// Multiplikator ausrechnen
int getMultiplikator(int attackType,int defenseType1,int defenseType2) {

	return (matrix[attackType][defenseType1])*(matrix[attackType][defenseType2]);

}
