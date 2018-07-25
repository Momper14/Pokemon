#pragma once

#include "types.h"
#include <stddef.h>

#define stoneThunder 101
#define stoneMoon 102
#define stoneFire 103
#define stoneLeaf 104
#define stoneWater 105
#define trade 110
#define kp 0
#define angriff 1
#define verteidigung 2
#define spezialangriff 3
#define spezielverteidigung 4
#define initiative 5

typedef unsigned char byte;
typedef unsigned int uint;

struct pokemonBase{
	const uint natDex;
	const char *name;
	const byte typ1;
	const byte typ2;
	const byte catchrate;
	const uint exp;
	const uint stats[6];
	const byte numEvolutions;
	const struct evolution *evolutions;
};

struct evolution{
	const byte evolCon;
	const struct pokemonBase *evol;
};

//									    dex   name         typ1     typ2      cr  exp   hp  atk  def  sat  sdf  spd  evo
const struct pokemonBase Mew         = { 151, "Mew",       psycho,  keinTyp,  45,  64, 100, 100, 100, 100, 100, 100, 0, NULL };

const struct pokemonBase Mewtu       = { 150, "Mewtu",     psycho,  keinTyp,   3, 220, 106, 110,  90, 154,  90, 130, 0, NULL };

const struct pokemonBase Dragoran    = { 149, "Dragoran",  drache,  flug,     45, 218,  91, 134,  95, 100, 100,  80, 0, NULL };

const struct evolution  DragonirEvo1   = { 55, &Dragoran };
const struct pokemonBase Dragonir    = { 148, "Dragonir",  drache,  keinTyp,  45, 144,  61,  84,  65,  70,  70,  70, 1, (&DragonirEvo1) };

const struct evolution  DratiniEvo1    = { 30, &Dragonir };
const struct pokemonBase Dratini     = { 147, "Dratini",   drache,  keinTyp,  45,  67,  41,  64,  45,  50,  50,  50, 1, (&DratiniEvo1) };

const struct pokemonBase Lavados     = { 146, "Lavados",   feuer,   flug,      3, 217,  90, 100,  90, 125,  85,  90, 0, NULL };

const struct pokemonBase Zapdos      = { 145, "Zapdos",    elektro, flug,      3, 216,  90,  90,  85, 125,  90, 100, 0, NULL };

const struct pokemonBase Arktos      = { 144, "Arktos",    eis,     flug,      3, 215,  90,  85, 100,  95, 125,  85, 0, NULL };

const struct pokemonBase Relaxo      = { 143, "Relaxo",    normal,  keinTyp,  25, 154, 160, 110,  65,  65, 110,  30, 0, NULL };

const struct pokemonBase Aerodactyl  = { 142, "Aerodactyl",stein,   flug,     45, 202,  80, 105,  65,  60,  75, 130, 0, NULL };

const struct pokemonBase Kabutops    = { 141, "Kabutops",  stein,   wasser,   45, 199,  60, 115, 105,  65,  70,  80, 0, NULL };

const struct evolution  KabutoEvo1     = { 40, &Kabutops };
const struct pokemonBase Kabuto      = { 140, "Kabuto",    stein,   wasser,   45,  99,  30,  80,  90,  55,  45,  55, 1, (&KabutoEvo1) };

const struct pokemonBase Amoroso     = { 139, "Amoroso",   stein,   wasser,   45, 199,  70,  60, 125, 115,  70,  55, 0, NULL };

const struct evolution  AmonitasEvo1   = { 40, &Amoroso };
const struct pokemonBase Amonitas    = { 138, "Amonitas",  stein,   wasser,   45,  99,  35,  40, 100,  90,  55,  35, 1, (&AmonitasEvo1) };

const struct pokemonBase Porygon     = { 137, "Porygon",   normal,  keinTyp,  45, 130,  65,  60,  70,  85,  75,  40, 0, NULL };

const struct pokemonBase Flamara     = { 136, "Flamara",   feuer,   keinTyp,  45, 198,  65, 130,  60,  95, 110,  65, 0, NULL };

const struct pokemonBase Blitza      = { 135, "Blitza",    elektro, keinTyp,  45, 197,  65,  65,  60, 110,  95, 130, 0, NULL };

const struct pokemonBase Aquana      = { 134, "Aquana",    wasser,  keinTyp,  45, 196, 130,  65,  60, 110,  95,  65, 0, NULL };

const struct evolution  EvoliEvo3      = { stoneFire, &Flamara };
const struct evolution  EvoliEvo2      = { stoneThunder, &Blitza };
const struct evolution  EvoliEvo1      = { stoneWater, &Aquana };
const struct pokemonBase Evoli       = { 133, "Evoli",     normal,  keinTyp,  45,  92,  55,  55,  50,  45,  65,  55, 3, (&EvoliEvo1, &EvoliEvo2, &EvoliEvo3) };

const struct pokemonBase Ditto       = { 132, "Ditto",     normal,  keinTyp,  35,  61,  48,  48,  48,  48,  48,  48, 0, NULL };

const struct pokemonBase Lapras      = { 131, "Lapras",    wasser,  eis,      45, 219, 130,  85,  80,  85,  95,  60, 0, NULL };

const struct pokemonBase Garados     = { 130, "Garados",   wasser,  flug,     45, 214,  95, 125,  79,  60, 100,  81, 0, NULL };

const struct evolution  KarpadorEvo1   = { 20, &Garados };
const struct pokemonBase Karpador    = { 129, "Karpador",  wasser,  keinTyp, 255,  20,  20,  10,  55,  15,  20,  80, 1, (&KarpadorEvo1) };

const struct pokemonBase Tauros      = { 128, "Tauros",    normal,  keinTyp,  45, 211,  75, 100,  95,  40,  70, 110, 0, NULL };

const struct pokemonBase Pinsir      = { 127, "Pinsir",    kaefer,  keinTyp,  45, 200,  65, 125, 100,  55,  70,  85, 0, NULL };

const struct pokemonBase Magmar      = { 126, "Magmar",    feuer,   keinTyp,  45, 167,  65,  95,  57, 100,  85,  93, 0, NULL };

const struct pokemonBase Elektek     = { 125, "Elektek",   elektro, keinTyp,  45, 156,  65,  83,  57,  95,  85, 105, 0, NULL };

const struct pokemonBase Rossana     = { 124, "Rossana",   eis,     psycho,   45, 137,  65,  50,  35, 115,  95,  95, 0, NULL };

const struct pokemonBase Sichlor     = { 123, "Sichlor",   kaefer,  flug,     45, 187,  70, 110,  80,  55,  80, 105, 0, NULL };

const struct pokemonBase Pantimos    = { 122, "Pantimos",  psycho,  keinTyp,  45, 136,  40,  45,  65, 100, 120,  90, 0, NULL };

const struct pokemonBase Starmie     = { 121, "Starmie",   wasser,  psycho,   60, 207,  60,  75,  85, 100,  85, 115, 0, NULL };

const struct evolution  SternduEvo1    = { stoneWater, &Starmie };
const struct pokemonBase Sterndu     = { 120, "Sterndu",   wasser,  keinTyp, 225, 106,  30,  45,  55,  70,  55,  85, 1, { &SternduEvo1 } };

const struct pokemonBase Golking     = { 119, "Golking",   wasser,  keinTyp,  60, 170,  80,  92,  65,  65,  80,  68, 0, NULL };

const struct evolution  GoldiniEvo1   = { 33, &Golking };
const struct pokemonBase Goldini    = { 118, "Goldini",    wasser,  keinTyp, 225, 111,  45,  67,  60,  35,  50,  63, 1, { &GoldiniEvo1 } };

const struct pokemonBase Seemon     = { 117, "Seemon",     wasser,  keinTyp,  75, 155,  55,  65,  95,  95,  45,  85, 0, NULL };

const struct evolution  SeeperEvo1    = { 32, &Seemon };
const struct pokemonBase Seeper     = { 116, "Seeper",     wasser,  keinTyp, 225,  83,  30,  40,  70,  70,  25,  60, 1, { &SeeperEvo1 } };

const struct pokemonBase Kangama    = { 115, "Kangama",    normal,  keinTyp,  45, 175, 105,  95,  80,  40,  80,  90, 0, NULL };

const struct pokemonBase Tangela    = { 114, "Tangela",    pflanze, keinTyp,  45, 166,  65,  55, 115, 100,  40,  60, 0, NULL };

const struct pokemonBase Chaneira   = { 113, "Chaneira",   normal,  keinTyp,  30, 255, 250,   5,   5,  35, 105,  50, 0, NULL };

const struct pokemonBase Rizeros    = { 112, "Rizeros",    boden,   stein,    60, 204, 105, 130, 120,  45,  45,  40, 0, NULL };

const struct evolution  RihornEvo1    = { 42, &Rizeros };
const struct pokemonBase Rihorn     = { 111, "Rihorn",     boden,   stein,   120, 135,  80,  85,  95,  30,  30,  25, 1, { &RihornEvo1 } };

const struct pokemonBase Smogmog    = { 110, "Smogmog",    gift,    keinTyp,  60, 173,  65,  90, 120,  85,  70,  60, 0, NULL };

const struct evolution  SmogonEvo1    = { 35, &Smogmog };
const struct pokemonBase Smogon     = { 109, "Smogon",     gift,    keinTyp, 190, 114,  40,  65,  95,  60,  45,  35, 1, { &SmogonEvo1 } };

const struct pokemonBase Schlurp    = { 108, "Schlurp",    normal,  keinTyp,  45, 127,  90,  55,  75,  60,  75,  30, 0, NULL };

const struct pokemonBase Nockchan   = { 107, "Nockchan",   kampf,   keinTyp,  45, 140,  50, 105,  79,  35, 110,  76, 0, NULL };

const struct pokemonBase Kicklee    = { 106, "Kicklee",    kampf,   keinTyp,  45, 139,  50, 120,  53,  35, 110,  87, 0, NULL };

const struct pokemonBase Knogga     = { 105, "Knogga",     boden,   keinTyp,  75, 124,  60,  80, 110,  50,  80,  45, 0, NULL };

const struct evolution  TragossoEvo1  = { 28, &Knogga };
const struct pokemonBase Tragosso   = { 104, "Tragosso",   boden,   keinTyp, 190,  87,  50,  50,  95,  40,  50,  35, 1, { &TragossoEvo1 } };

const struct pokemonBase Kokowei    = { 103, "Kokowei",    pflanze, psycho,   45, 212,  95,  95,  85, 125,  75,  55, 0, NULL };

const struct evolution  OweiEvo1      = { stoneLeaf, &Kokowei };
const struct pokemonBase Owei       = { 102, "Owei",       pflanze, psycho,   90,  98,  60,  40,  80,  60,  45,  40, 1, { &OweiEvo1 } };

const struct pokemonBase Lektrobal  = { 101, "Lektrobal",  elektro, keinTyp,  70, 150,  60,  50,  70,  80,  80, 150, 0, NULL };

const struct evolution  VoltobalEvo1  = { 30, &Lektrobal };
const struct pokemonBase Voltobal   = { 100, "Voltobal",   elektro, keinTyp, 190, 103,  40,  30,  50,  55,  55, 100, 1, { &VoltobalEvo1 } };

const struct pokemonBase Kingler    = {  99, "Kingler",    wasser,  keinTyp,  60, 206,  55, 130, 115,  50,  50,  75, 0, NULL };

const struct evolution  KrabbyEvo1    = { 28, &Kingler };
const struct pokemonBase Krabby     = {  98, "Krabby",     wasser,  keinTyp, 225, 115,  30, 105,  90,  25,  25,  50, 1, { &KrabbyEvo1 } };

const struct pokemonBase Hypno      = {  97, "Hypno",      psycho,  keinTyp,  75, 165,  85,  73,  70,  73, 115,  67, 0, NULL };

const struct evolution  TraumatoEvo1  = { 26, &Hypno };
const struct pokemonBase Traumato   = {  96, "Traumato",   psycho,  keinTyp, 190, 102,  60,  48,  45,  43,  90,  42, 1, { &TraumatoEvo1 } };

const struct pokemonBase Onix       = {  95, "Onix",       stein,   boden,    45, 108,  35,  45, 160,  30,  45,  70, 0, NULL };

const struct pokemonBase Gengar     = {  94, "Gengar",     geist,   gift,     45, 190,  60,  65,  60, 130,  75, 110, 0, NULL };

const struct evolution  AlpolloEvo1   = { trade, &Gengar };
const struct pokemonBase Alpollo    = {  93, "Alpollo",    geist,   gift,     90, 126,  45,  50,  45, 115,  55,  95, 1, { &AlpolloEvo1 } };

const struct evolution  NebulakEvo1   = { 25, &Alpollo };
const struct pokemonBase Nebulak    = {  92, "Nebulak",    geist,   gift,    190,  95,  30,  35,  30, 100,  35,  80, 1, { &NebulakEvo1 } };

const struct pokemonBase Austos     = {  91, "Austos",     wasser,  eis,      60, 203,  50,  95, 180,  85,  45,  70, 0, NULL };

const struct evolution  MuschasEvo1   = { stoneWater, &Austos };
const struct pokemonBase Muschas    = {  90, "Muschas",    wasser,  keinTyp, 190,  97,  30,  65, 100,  45,  25,  40, 1, { &MuschasEvo1 } };

const struct pokemonBase Sleimok    = {  89, "Sleimok",    gift,    keinTyp,  75, 157, 105, 105,  75,  65, 100,  50, 0, NULL };

const struct evolution  SleimaEvo1    = { 38, &Sleimok };
const struct pokemonBase Sleima     = {  88, "Sleima",     gift,    keinTyp, 190,  90,  80,  80,  50,  40,  50,  25, 1, { &SleimaEvo1 } };

const struct pokemonBase Jugong     = {  87, "Jugong",     wasser,  eis,      75, 176,  90,  70,  80,  70,  95,  70, 0, NULL };

const struct evolution  JurobEvo1     = { 34, &Jugong };
const struct pokemonBase Jurob      = {  86, "Jurob",      wasser,  keinTyp, 190, 100,  65,  45,  55,  45,  70,  45, 1, { &JurobEvo1 } };

const struct pokemonBase Dodri      = {  85, "Dodri",      normal,  flug,     45, 158,  60, 110,  70,  60,  60, 110, 0, NULL };

const struct evolution  DoduEvo1      = { 31, &Dodri };
const struct pokemonBase Dodu       = {  84, "Dodu",       normal,  flug,    190,  96,  35,  85,  45,  35,  35,  75, 1, { &DoduEvo1 } };

const struct pokemonBase Porenta    = {  83, "Porenta",    normal,  flug,     45,  94,  52,  90,  55,  58,  62,  60, 0, NULL };

const struct pokemonBase Magneton   = {  82, "Magneton",   elektro, stahl,    60, 161,  50,  60,  95, 120,  70,  70, 0, NULL };

const struct evolution  MagnetiloEvo1 = { 30, &Magneton };
const struct pokemonBase Magnetilo  = {  81, "Magnetilo",  elektro, stahl,   190,  89,  25,  35,  70,  95,  55,  45, 1, { &MagnetiloEvo1 } };

const struct pokemonBase Lahmus     = {  80, "Lahmus",     wasser,  psycho,   75, 164,  95,  75, 110, 100,  80,  30, 0, NULL };

const struct evolution FlegmonEvo1     = { 37, &Lahmus };
const struct pokemonBase Flegmon    = {  79, "Flegmon",    wasser,  psycho,  190,  99,  90,  65,  65,  40,  40,  15, 1, { &FlegmonEvo1 } };

const struct pokemonBase Gallopa    = {  78, "Gallopa",    feuer,   keinTyp,  60, 192,  65, 100,  70,  80,  80, 105, 0, NULL };

const struct evolution PonitaEvo1     = { 40, &Gallopa };
const struct pokemonBase Ponita     = {  77, "Ponita",     feuer,   keinTyp, 190, 152,  50,  85,  55,  65,  65,  90, 1, { &PonitaEvo1 } };

const struct pokemonBase Geowaz     = {  76, "Geowaz",     stein,   boden,    45, 177,  80, 120, 130,  55,  65,  45, 0, NULL };

const struct evolution GeorokEvo1     = { trade, &Geowaz };
const struct pokemonBase Georok     = {  75, "Georok",     stein,   boden,   120, 134,  55,  95, 115,  45,  45,  35, 1, { &GeorokEvo1 } };

const struct evolution KleinsteinEvo1 = { 25, &Georok };
const struct pokemonBase Kleinstein = {  74, "Kleinstein", stein,   boden,   255,  73,  40,  80, 100,  30,  30,  20, 1, { &KleinsteinEvo1 } };

const struct pokemonBase Tentoxa    = {  73, "Tentoxa",    wasser,  gift,     60, 205,  80,  70,  65,  80, 120, 100, 0, NULL };

const struct evolution TentachaEvo1 = { 30, &Tentoxa };
const struct pokemonBase Tentacha   = {  72, "Tentacha",   wasser,  gift,    190, 105,  40,  40,  35,  50, 100,  70, 1, { &TentachaEvo1 } };

const struct pokemonBase Sarzenia   = {  71, "Sarzenia",   pflanze, gift,     45, 191,  80, 105,  65, 100,  70,  70, 0, NULL };

const struct evolution UltrigariaEvo1 = { stoneLeaf, &Sarzenia };
const struct pokemonBase Ultrigaria = {  70, "Ultrigaria", pflanze, gift,    120, 151,  65,  90,  50,  85,  45,  55, 1, { &UltrigariaEvo1 } };

const struct evolution KnofensaEvo1   = { 21, &Ultrigaria };
const struct pokemonBase Knofensa   = {  69, "Knofensa",   pflanze, gift,    255,  84,  50,  75,  35,  70,  30,  40, 1, { &KnofensaEvo1 } };

const struct pokemonBase Machomei   = {  68, "Machomei",   kampf,   keinTyp,  45, 193,  90, 130,  80,  65,  85,  55, 0, NULL };

const struct evolution MaschockEvo1   = { trade, &Machomei };
const struct pokemonBase Maschock   = {  67, "Maschock",   kampf,   keinTyp,  90, 146,  80, 100,  70,  50,  60,  45, 1, { &MaschockEvo1 } };

const struct evolution MacholloEvo1   = { 28, &Maschock };
const struct pokemonBase Machollo   = {  66, "Machollo",   kampf,   keinTyp, 180,  75,  70,  80,  50,  35,  35,  35, 1, { &MacholloEvo1 } };

const struct pokemonBase Simsala    = {  65, "Simsala",    psycho,  keinTyp,  50, 186,  55,  50,  45, 135,  95, 120, 0, NULL };

const struct evolution KadabraEvo1    = { trade, &Simsala };
const struct pokemonBase Kadabra    = {  64, "Kadabra",    psycho,  keinTyp, 100, 145,  40,  35,  30, 120,  70, 105, 1, { &KadabraEvo1 } };

const struct evolution AbraEvo1       = { 16, &Kadabra };
const struct pokemonBase Abra       = {  63, "Abra",       psycho,  keinTyp, 200,  75,  25,  20,  15, 105,  55,  90, 1, { &AbraEvo1 } };

const struct pokemonBase Quappo     = {  62, "Quappo",     wasser,  kampf,    45, 185,  90,  95,  95,  70,  90,  70, 0, NULL };

const struct evolution QuaputziEvo1   = { stoneWater, &Quappo };
const struct pokemonBase Quaputzi   = {  61, "Quaputzi",   wasser,  keinTyp, 120, 131,  65,  65,  65,  50,  50,  90, 1, { &QuaputziEvo1 } };

const struct evolution QuapselEvo1    = { 25, &Quaputzi };
const struct pokemonBase Quapsel    = {  60, "Quapsel",    wasser,  keinTyp, 255,  77,  40,  50,  40,  40,  40,  90, 1, { &QuapselEvo1 } };

const struct pokemonBase Arkani     = {  59, "Arkani",     feuer,   keinTyp,  75, 213,  90, 110,  80, 100,  80,  95, 0, NULL };

const struct evolution FukanoEvo1     = { stoneFire, &Arkani };
const struct pokemonBase Fukano     = {  58, "Fukano",     feuer,   keinTyp, 190,  91,  55,  70,  45,  70,  50,  60, 1, { &FukanoEvo1 } };

const struct pokemonBase Rasaff     = {  57, "Rasaff",     kampf,   keinTyp,  75, 149,  65, 105,  60,  60,  70,  95, 0, NULL };

const struct evolution MenkiEvo1      = { 28, &Rasaff };
const struct pokemonBase Menki      = {  56, "Menki",      kampf,   keinTyp, 190,  74,  40,  80,  35,  35,  45,  70, 1, { &MenkiEvo1 } };

const struct pokemonBase Entoron    = {  55, "Entoron",    wasser,  keinTyp,  75, 174,  80,  82,  75,  95,  80,  85, 0, NULL };

const struct evolution EntonEvo1      = { 33, &Entoron };
const struct pokemonBase Enton      = {  54, "Enton",      wasser,  keinTyp, 190,  80,  50,  52,  48,  65,  50,  55, 1, { &EntonEvo1 } };

const struct pokemonBase Snobilikat = {  53, "Snobilikat", normal,  keinTyp,  90, 148,  65,  70,  60,  65,  65, 115, 0, NULL };

const struct evolution MauziEvo1      = { 28, &Snobilikat };
const struct pokemonBase Mauzi      = {  52, "Mauzi",      normal,  keinTyp, 255,  69,  40,  45,  35,  40,  40,  90, 1, { &MauziEvo1 } };

const struct pokemonBase Digdri     = {  51, "Digdri",     boden,   keinTyp,  50, 153,  35, 100,  50,  50,  70, 120, 0, NULL };

const struct evolution DigdaEvo1      = { 26, &Digdri };
const struct pokemonBase Digda      = {  50, "Digda",      boden,   keinTyp, 255,  81,  10,  55,  25,  35,  45,  95, 1, { &DigdaEvo1 } };

const struct pokemonBase Omot       = {  49, "Omot",       kaefer,  gift,     75, 138,  70,  65,  60,  90,  75,  90, 0, NULL };

const struct evolution BluzukEvo1     = { 31, &Omot };
const struct pokemonBase Bluzuk     = {  48, "Bluzuk",     kaefer,  gift,    190,  75,  60,  55,  50,  40,  55,  45, 1, { &BluzukEvo1 } };

const struct pokemonBase Parasek    = {  47, "Parasek",    kaefer,  pflanze,  75, 128,  60,  95,  80,  60,  80,  30, 0, NULL };

const struct evolution ParasEvo1      = { 24, &Parasek };
const struct pokemonBase Paras      = {  46, "Paras",      kaefer,  pflanze, 190,  70,  35,  70,  55,  45,  55,  25, 1, { &ParasEvo1 } };

const struct pokemonBase Giflor     = {  45, "Giflor",     pflanze, gift,     45, 184,  75,  80,  85, 110,  90,  50, 0, NULL };

const struct evolution DuflorEvo1     = { stoneLeaf, &Giflor };
const struct pokemonBase Duflor     = {  44, "Duflor",     pflanze, gift,    120, 132,  60,  65,  70,  85,  75,  40, 1, { &DuflorEvo1 } };

const struct evolution MyraplaEvo1    = { 21, &Duflor };
const struct pokemonBase Myrapla    = {  43, "Myrapla",    pflanze, gift,    255,  78,  45,  50,  55,  75,  65,  30, 1, { &MyraplaEvo1 } };

const struct pokemonBase Golbat     = {  42, "Golbat",     gift,    flug,     90, 171,  71,  80,  70,  65,  75,  90, 0, NULL };

const struct evolution ZubatEvo1      = { 22, &Golbat };
const struct pokemonBase Zubat      = {  41, "Zubat",      gift,    flug,    255,  54,  40,  45,  35,  30,  40,  55, 1, { &ZubatEvo1 } };

const struct pokemonBase Knuddeluff = {  40, "Knuddeluff", normal,  keinTyp,  50, 109, 140,  70,  45,  85,  50,  45, 0, NULL };

const struct evolution PummeluffEvo1  = { stoneMoon, &Knuddeluff };
const struct pokemonBase Pummeluff  = {  39, "Pummeluff",  normal,  keinTyp, 170,  76, 115,  45,  20,  45,  25,  20, 1, { &PummeluffEvo1 } };

const struct pokemonBase Vulnona    = {  38, "Vulnona",    feuer,   keinTyp,  75, 178,  73,  76,  75,  81, 100, 100, 0, NULL };

const struct evolution VulpixEvo1     = { stoneFire, &Vulnona };
const struct pokemonBase Vulpix     = {  37, "Vulpix",     feuer,   keinTyp, 190,  63,  38,  41,  40,  50,  65,  65, 1, { &VulpixEvo1 } };

const struct pokemonBase Pixi       = {  36, "Pixi",       normal,  keinTyp,  25, 129,  95,  70,  73,  95,  90,  60, 0, NULL };

const struct evolution PiepiEvo1      = { stoneMoon, &Pixi };
const struct pokemonBase Piepi      = {  35, "Piepi",      normal,  keinTyp, 150,  68,  70,  45,  48,  60,  65,  35, 1, { &PiepiEvo1 } };

const struct pokemonBase Nidoking   = {  34, "Nidoking",   gift,    boden,    45, 195,  81, 102,  77,  85,  75,  85, 0, NULL };

const struct evolution NidorinoEvo1   = { stoneMoon, &Nidoking };
const struct pokemonBase Nidorino   = {  33, "Nidorino",   gift,    keinTyp, 120, 118,  61,  72,  57,  55,  55,  65, 1, { &NidorinoEvo1 } };

const struct evolution NidoranMEvo1   = { 16, &Nidorino };
const struct pokemonBase NidoranM   = {  32, "NidoranM",   gift,    keinTyp, 235,  60,  46,  57,  40,  40,  40,  50, 1, { &NidoranMEvo1 } };

const struct pokemonBase Nidoqueen  = {  31, "Nidoqueen",  gift,    boden,    45, 194,  90,  92,  87,  75,  85,  76, 0, NULL };

const struct evolution NidorinaEvo1   = { stoneMoon, &Nidoqueen };
const struct pokemonBase Nidorina   = {  30, "Nidorina",   gift,    keinTyp, 120, 117,  70,  62,  67,  55,  55,  56, 1, { &NidorinaEvo1 } };

const struct evolution NidoranWEvo1   = { 16, &Nidorina };
const struct pokemonBase NidoranW   = {  29, "NidoranW",   gift,    keinTyp, 235,  59,  55,  47,  52,  40,  40,  41, 1, { &NidoranWEvo1 } };

const struct pokemonBase Sandamer   = {  28, "Sandamer",   boden,   keinTyp,  90, 163,  75, 100, 110,  45,  55,  65, 0, NULL };

const struct evolution SandanEvo1     = { 22, &Sandamer };
const struct pokemonBase Sandan     = {  27, "Sandan",     boden,   keinTyp, 255,  93,  50,  75,  85,  20,  30,  40, 1, { &SandanEvo1 } };

const struct pokemonBase Raichu     = {  26, "Raichu",     elektro, keinTyp,  75, 122,  60,  90,  55,  90,  80, 110, 0, NULL };

const struct evolution PikachuEvo1    = { stoneThunder, &Raichu };
const struct pokemonBase Pikachu    = {  25, "Pikachu",    elektro, keinTyp, 190,  82,  35,  55,  40,  50,  50,  90, 1, { &PikachuEvo1 } };

const struct pokemonBase Arbok	    = {  24, "Arbok",      gift,    keinTyp,  90, 147,  60,  95,  69,  65,  79,  80, 0, NULL };

const struct evolution RettanEvo1     = { 22, &Arbok };
const struct pokemonBase Rettan     = {  23, "Rettan",     gift,    keinTyp, 255,  62,  35,  60,  44,  40,  45,  55, 1, { &RettanEvo1 } };

const struct pokemonBase Ibitak     = {  22, "Ibitak",     normal,  flug,     90, 162,  65,  90,  65,  61,  61, 100, 0, NULL };

const struct evolution HabitakEvo1    = { 20, &Ibitak };
const struct pokemonBase Habitak    = {  21, "Habitak",    normal,  flug,    255,  58,  40,  60,  30,  31,  31,  70, 1, { &HabitakEvo1 } };

const struct pokemonBase Rattikarl  = {  20, "Rattikarl",  normal,  keinTyp, 127, 116,  55,  81,  60,  50,  70,  97, 0, NULL };

const struct evolution RattfratzEvo1  = { 20, &Rattikarl };
const struct pokemonBase Rattfratz  = {  19, "Rattfratz",  normal,  keinTyp, 255,  57,  30,  56,  35,  25,  35,  72, 1, { &RattfratzEvo1 } };

const struct pokemonBase Tauboss    = {  18, "Tauboss",    normal,  flug,     45, 172,  83,  80,  75,  70,  70, 101, 0, NULL };

const struct evolution TaubogaEvo1    = { 36, &Tauboss };
const struct pokemonBase Tauboga    = {  17, "Tauboga",    normal,  flug,    120, 113,  63,  60,  55,  50,  50,  71, 1, { &TaubogaEvo1 } };

const struct evolution TaubsiEvo1     = { 18, &Tauboga };
const struct pokemonBase Taubsi     = {  16, "Taubsi",     normal,  flug,    255,  55,  40,  45,  40,  35,  35,  53, 1, { &TaubsiEvo1 } };

const struct pokemonBase Bibor      = {  15, "Bibor",      kaefer,  gift,     45, 159,  65,  90,  40,  45,  80,  75, 0, NULL };

const struct evolution KokunaEvo1    = { 10, &Bibor };
const struct pokemonBase Kokuna     = {  14, "Kokuna",     kaefer,  gift,    120,  71,  45,  25,  50,  25,  25,  35, 1, { &KokunaEvo1 } };

const struct evolution HornliuEvo1    = {  7, &Kokuna };
const struct pokemonBase Hornliu    = {  13, "Hornliu",    kaefer,  gift,    255,  52,  40,  35,  30,  20,  20,  50, 1, { &HornliuEvo1 } };

const struct pokemonBase Smettbo    = {  12, "Smettbo",    kaefer,  flug,     45, 160,  60,  45,  50,  90,  80,  70, 0, NULL };

const struct evolution SafconEvo1    = { 10, &Smettbo };
const struct pokemonBase Safcon     = {  11, "Safcon",     kaefer,  keinTyp, 120,  72,  50,  20,  55,  25,  25,  30, 1, { &SafconEvo1 } };

const struct evolution RaupyEvo1     = {  7, &Safcon };
const struct pokemonBase Raupy      = {  10, "Raupy",      kaefer,  keinTyp, 255,  53,  45,  30,  35,  20,  20,  45, 1, { &RaupyEvo1 } };

const struct pokemonBase Turtok     = {   9, "Turtok",     wasser,  keinTyp,  45, 210,  79,  83, 100,  85, 105,  78, 0, NULL };

const struct evolution SchillokEvo1  = { 32, &Turtok };
const struct pokemonBase Schillok   = {   8, "Schillok",   wasser,  keinTyp,  45, 143,  59,  63,  80,  65,  80,  58, 1, { &SchillokEvo1 } };

const struct evolution SchiggyEvo1   = { 16, &Schillok };
const struct pokemonBase Schiggy    = {   7, "Schiggy",    wasser,  keinTyp,  45,  66,  44,  48,  65,  50,  64,  43, 1, { &SchiggyEvo1 } };

const struct pokemonBase Glurak     = {   6, "Glurak",     feuer,   flug,     45, 209,  78,  84,  78, 109,  85, 100, 0, NULL };

const struct evolution GlutexoEvo1   = { 32, &Glurak };
const struct pokemonBase Glutexo    = {   5, "Glutexo",    feuer,   keinTyp,  45, 142,  58,  64,  58,  80,  65,  80, 1, { &GlutexoEvo1 } };

const struct evolution GlumandaEvo1  = { 16, &Glutexo };
const struct pokemonBase Glumanda   = {   4, "Glumanda",   feuer,   keinTyp,  45,  70,  39,  52,  43,  60,  50,  65, 1, { &GlumandaEvo1} };

const struct pokemonBase Bisaflor   = {   3, "Bisaflor",   pflanze, gift,     45, 208,  80,  82,  83, 100, 100,  80, 0, NULL };

const struct evolution BisaknospEvo1 = { 32, &Bisaflor };
const struct pokemonBase Bisaknosp  = {   2, "Bisaknosp",  pflanze, gift,     45, 141,  60,  62,  63,  80,  80,  60, 1, { &BisaknospEvo1 } };

const struct evolution BisasamEvo1   = { 16, &Bisaknosp };
const struct pokemonBase Bisasam    = {   1, "Bisasam",    pflanze, gift,     45,  64,  45,  49,  49,  65,  65,  45, 1, { &BisasamEvo1 } };


const struct pokemonBase *pokemons[152] = {
	NULL,
	&Bisasam,		//001
	&Bisaknosp,		//002
	&Bisaflor,		//003
	&Glumanda,		//004
	&Glutexo,		//005
	&Glurak,		//006
	&Schiggy,		//007
	&Schillok,		//008
	&Turtok,		//009
	&Raupy,			//010
	&Safcon,		//011
	&Smettbo,		//012
	&Hornliu,		//013
	&Kokuna,		//014
	&Bibor,			//015
	&Taubsi,		//016
	&Tauboga,		//017
	&Tauboss,		//018
	&Rattfratz,		//019
	&Rattikarl,		//020
	&Habitak,		//021
	&Ibitak,		//022
	&Rettan,		//023
	&Arbok,			//024
	&Pikachu,		//025
	&Raichu,		//026
	&Sandan,		//027
	&Sandamer,		//028
	&NidoranW,		//029
	&Nidorina,		//030
	&Nidoqueen,		//031
	&NidoranM,		//032
	&Nidorino,		//033
	&Nidoking,		//034
	&Piepi,			//035
	&Pixi,			//036
	&Vulpix,		//037
	&Vulnona,		//038
	&Pummeluff,		//039
	&Knuddeluff,	//040
	&Zubat,			//041
	&Golbat,		//042
	&Myrapla,		//043
	&Duflor,		//044
	&Giflor,		//045
	&Paras,			//046
	&Parasek,		//047
	&Bluzuk,		//048
	&Omot,			//049
	&Digda,			//050
	&Digdri,		//051
	&Mauzi,			//052
	&Snobilikat,	//053
	&Enton,			//054
	&Entoron,		//055
	&Menki,			//056
	&Rasaff,		//057
	&Fukano,		//058
	&Arkani,		//059
	&Quapsel,		//060
	&Quaputzi,		//061
	&Quappo,		//062
	&Abra,			//063
	&Kadabra,		//064
	&Simsala,		//065
	&Machollo,		//066
	&Maschock,		//067
	&Machomei,		//068
	&Knofensa,		//069
	&Ultrigaria,	//070
	&Sarzenia,		//071
	&Tentacha,		//072
	&Tentoxa,		//073
	&Kleinstein,	//074
	&Georok,		//075
	&Geowaz,		//076
	&Ponita,		//077
	&Gallopa,		//078
	&Flegmon,		//079
	&Lahmus,		//080
	&Magnetilo,		//081
	&Magneton,		//082
	&Porenta,		//083
	&Dodu,			//084
	&Dodri,			//085
	&Jurob,			//086
	&Jugong,		//087
	&Sleima,		//088
	&Sleimok,		//089
	&Muschas,		//090
	&Austos,		//091
	&Nebulak,		//092
	&Alpollo,		//093
	&Gengar,		//094
	&Onix,			//095
	&Traumato,		//096
	&Hypno,			//097
	&Krabby,		//098
	&Kingler,		//099
	&Voltobal,		//100
	&Lektrobal,		//101
	&Owei,			//102
	&Kokowei,		//103
	&Tragosso,		//104
	&Knogga,		//105
	&Kicklee,		//106
	&Nockchan,		//107
	&Schlurp,		//108
	&Smogon,		//109
	&Smogmog,		//110
	&Rihorn,		//111
	&Rizeros,		//112
	&Chaneira,		//113
	&Tangela,		//114
	&Kangama,		//115
	&Seeper,		//116
	&Seemon,		//117
	&Goldini,		//118
	&Golking,		//119
	&Sterndu,		//120
	&Starmie,		//121
	&Pantimos,		//122
	&Sichlor,		//123
	&Rossana,		//124
	&Elektek,		//125
	&Magmar,		//126
	&Pinsir,		//127
	&Tauros,		//128
	&Karpador,		//129
	&Garados,		//130
	&Lapras,		//131
	&Ditto,			//132
	&Evoli,			//133
	&Aquana,		//134
	&Blitza,		//135
	&Flamara,		//136
	&Porygon,		//137
	&Amonitas,		//138
	&Amoroso,		//139
	&Kabuto,		//140
	&Kabutops,		//141
	&Aerodactyl,	//142
	&Relaxo,		//143
	&Arktos,		//144
	&Zapdos,		//145
	&Lavados,		//146
	&Dratini,		//147
	&Dragonir,		//148
	&Dragoran,		//149
	&Mewtu,			//150
	&Mew			//151
};
