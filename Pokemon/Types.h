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
// Keine Double Werte um Rechen und Parsing Fehler zu umgehen
#define EFFEKT_SEHR  3
#define EFFEKT_NORM  2
#define EFFEKT_NICHT 1
#define EFFEKT_IMMUN 0

// Multiplikator ausrechnen
unsigned long getMultiplikator(int attackType, int defenseType1, int defenseType2, unsigned long *damage);
