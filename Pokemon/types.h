#pragma once

// Positionen des Typs im Array
#define normal   0
#define kampf    1
#define flug     2
#define gift     3
#define boden    4
#define stein    5
#define kaefer   6
#define geist    7
#define stahl    8
#define feuer    9
#define wasser   10
#define pflanze  11
#define elektro  12
#define psycho   13
#define eis      14
#define drache   15
#define unlicht  16
#define keinTyp  17

// Effektivität
#define sehr   2
#define effekt 1
#define nicht  0.5
#define immun  0

// { normal  ,normal  ,normal  ,normal ,normal  ,normal  ,normal  ,normal  ,normal   ,normal  ,normal   ,normal    ,normal    ,normal   ,normal,normal   , normal },
double matrix[18][18] = {
//             Normal || Kampf || Flug  || Gift || Boden || Stein || Käfer || Geist || Stahl || Feuer || Wasser || Pflanze || Elektro || Psycho || Eis || Drache || Unlicht||	Kein Typ
/* Normal*/	 { effekt  ,effekt  ,effekt  ,effekt ,effekt  ,nicht   ,effekt  ,immun   ,nicht    ,effekt  ,effekt   ,effekt    ,effekt    ,effekt   ,effekt,effekt   , effekt,	effekt },
/* Kampf*/   { sehr    ,effekt  ,nicht   ,nicht  ,effekt  ,sehr    ,nicht   ,immun   ,sehr     ,effekt  ,effekt   ,effekt    ,effekt    ,nicht    ,sehr  ,effekt   , sehr  ,	effekt },
/* Flug*/    { effekt  ,sehr    ,effekt  ,effekt ,effekt  ,nicht   ,sehr    ,effekt  ,nicht    ,effekt  ,effekt   ,sehr      ,nicht     ,effekt   ,effekt,effekt   , effekt,	effekt },
/* Gift*/    { effekt  ,effekt  ,effekt  ,nicht  ,nicht   ,nicht   ,effekt  ,nicht   ,immun    ,effekt  ,effekt   ,sehr      ,effekt    ,effekt   ,effekt,effekt   , effekt,	effekt },
/* Boden*/   { effekt  ,effekt  ,immun   ,sehr   ,effekt  ,sehr    ,nicht   ,effekt  ,sehr     ,sehr    ,effekt   ,nicht     ,sehr      ,effekt   ,effekt,effekt   , effekt,	effekt },
/* Gestein*/ { effekt  ,nicht   ,sehr    ,effekt ,nicht   ,effekt  ,sehr    ,effekt  ,nicht    ,sehr    ,effekt   ,effekt    ,effekt    ,effekt   ,sehr  ,effekt   , effekt,	effekt },
/* Käfer*/   { effekt  ,nicht   ,nicht   ,nicht  ,effekt  ,effekt  ,effekt  ,nicht   ,nicht    ,nicht   ,effekt   ,sehr      ,effekt    ,sehr     ,effekt,effekt   , sehr  ,	effekt },
/* Geist*/   { immun   ,effekt  ,effekt  ,effekt ,effekt  ,effekt  ,effekt  ,sehr    ,nicht    ,effekt  ,effekt   ,effekt    ,effekt    ,sehr     ,effekt,effekt   , nicht ,	effekt },
/* Stahl*/   { effekt  ,effekt  ,effekt  ,effekt ,effekt  ,sehr    ,effekt  ,effekt  ,nicht    ,nicht   ,nicht    ,effekt    ,nicht     ,effekt   ,sehr  ,effekt   , effekt,	effekt },
/* Feuer*/   { effekt  ,effekt  ,effekt  ,effekt ,effekt  ,nicht   ,sehr    ,effekt  ,sehr     ,nicht   ,nicht    ,sehr      ,effekt    ,effekt   ,sehr  ,nicht    , effekt,	effekt },
/* Wasser*/  { effekt  ,effekt  ,effekt  ,effekt ,sehr    ,sehr    ,effekt  ,effekt  ,effekt   ,sehr    ,nicht    ,nicht     ,effekt    ,effekt   ,effekt,nicht    , effekt,	effekt },
/* Pflanze*/ { effekt  ,effekt  ,nicht   ,nicht  ,sehr    ,sehr    ,nicht   ,effekt  ,nicht    ,nicht   ,sehr     ,nicht     ,effekt    ,effekt   ,effekt,nicht    , effekt,	effekt },
/* Elektro*/ { effekt  ,effekt  ,sehr    ,effekt ,immun   ,effekt  ,effekt  ,effekt  ,effekt   ,effekt  ,effekt   ,nicht     ,nicht     ,effekt   ,effekt,nicht    , effekt,	effekt },
/* Psycho*/  { effekt  ,sehr    ,effekt  ,sehr   ,effekt  ,effekt  ,effekt  ,effekt  ,nicht    ,effekt  ,effekt   ,effekt    ,effekt    ,nicht    ,effekt,effekt   , immun ,	effekt },
/* Eis*/     { effekt  ,effekt  ,sehr    ,effekt ,sehr    ,effekt  ,effekt  ,effekt  ,nicht    ,nicht   ,nicht    ,sehr      ,effekt    ,effekt   ,nicht ,sehr     , effekt,	effekt },
/* Drache*/  { effekt  ,effekt  ,effekt  ,effekt ,effekt  ,effekt  ,effekt  ,effekt  ,nicht    ,effekt  ,effekt   ,effekt    ,effekt    ,effekt   ,effekt,sehr     , effekt,	effekt },
/* Unlicht*/ { effekt  ,effekt  ,effekt  ,effekt ,effekt  ,effekt  ,effekt  ,sehr    ,nicht    ,effekt  ,effekt   ,effekt    ,effekt    ,sehr     ,effekt,effekt   , nicht ,	effekt },

/* Kein Typ*/{ effekt  ,effekt  ,effekt  ,effekt ,effekt  ,effekt  ,effekt  ,effekt  ,effekt   ,effekt  ,effekt   ,effekt    ,effekt    ,effekt   ,effekt,effekt   , effekt,  effekt }

};

// Multiplikator ausrechnen
int getMultiplikator(int attackType,int defenseType1,int defenseType2) {

	return 100*(matrix[attackType][defenseType1])*(matrix[attackType][defenseType2]);

}
