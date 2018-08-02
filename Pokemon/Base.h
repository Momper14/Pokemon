#pragma once

#include "Types.h"
#include "Util.h"

#define STONE_THUNDER	101
#define STONE_MOON		102
#define STONE_FIRE		103
#define STONE_LEAF		104
#define STONE_WATER		105
#define EVO_TRADE		110

#define STAT_KP						0
#define STAT_ANGRIFF				1
#define STAT_VERTEIDIGUNG			2
#define STAT_SPEZIALANGRIFF			3
#define STAT_SPEZIALVERTEIDIGUNG	4
#define STAT_INITIATIVE				5

#define POKEMON_MEW        151
#define POKEMON_MEWTU      150
#define POKEMON_DRAGORAN   149
#define POKEMON_DRAGONIR   148
#define POKEMON_DRATINI    147
#define POKEMON_LAVADOS    146
#define POKEMON_ZAPDOS     145
#define POKEMON_ARKTOS     144
#define POKEMON_RELAXO     143
#define POKEMON_AERODACTYL 142
#define POKEMON_KABUTOPS   141
#define POKEMON_KABUTO     140
#define POKEMON_AMOROSO    139
#define POKEMON_AMONITAS   138
#define POKEMON_PORYGON    137
#define POKEMON_FLAMARA    136
#define POKEMON_BLITZA     135
#define POKEMON_AQUANA     134
#define POKEMON_EVOLI      133
#define POKEMON_DITTO      132
#define POKEMON_LAPRAS     131
#define POKEMON_GARADOS    130
#define POKEMON_KARPADOR   129
#define POKEMON_TAUROS     128
#define POKEMON_PINSIR     127
#define POKEMON_MAGMAR     126
#define POKEMON_ELEKTEK    125
#define POKEMON_ROSSANA    124
#define POKEMON_SICHLOR    123
#define POKEMON_PANTIMOS   122
#define POKEMON_STARMIE    121
#define POKEMON_STERNDU    120
#define POKEMON_GOLKING    119
#define POKEMON_GOLDINI    118
#define POKEMON_SEEMON     117
#define POKEMON_SEEPER     116
#define POKEMON_KANGAMA    115
#define POKEMON_TANGELA    114
#define POKEMON_CHANEIRA   113
#define POKEMON_RIZEROS    112
#define POKEMON_RIHORN     111
#define POKEMON_SMOGMOG    110
#define POKEMON_SMOGON     109
#define POKEMON_SCHLURP    108
#define POKEMON_NOCKCHAN   107
#define POKEMON_KICKLEE    106
#define POKEMON_KNOGGA     105
#define POKEMON_TRAGOSSO   104
#define POKEMON_KOKOWEI    103
#define POKEMON_OWEI       102
#define POKEMON_LEKTROBAL  101
#define POKEMON_VOLTOBAL   100
#define POKEMON_KINGLER     99
#define POKEMON_KRABBY      98
#define POKEMON_HYPNO       97
#define POKEMON_TRAUMATO    96
#define POKEMON_ONIX        95
#define POKEMON_GENGAR      94
#define POKEMON_ALPOLLO     93
#define POKEMON_NEBULAK     92
#define POKEMON_AUSTOS      91
#define POKEMON_MUSCHAS     90
#define POKEMON_SLEIMOK     89
#define POKEMON_SLEIMA      88
#define POKEMON_JUGONG      87
#define POKEMON_JUROB       86
#define POKEMON_DODRI       85
#define POKEMON_DODU        84
#define POKEMON_PORENTA     83
#define POKEMON_MAGNETON    82
#define POKEMON_MAGNETILO   81
#define POKEMON_LAHMUS      80
#define POKEMON_FLEGMON     79
#define POKEMON_GALLOPA     78
#define POKEMON_PONITA      77
#define POKEMON_GEOWAZ      76
#define POKEMON_GEOROK      75
#define POKEMON_KLEINSTEIN  74
#define POKEMON_TENTOXA     73
#define POKEMON_TENTACHA    72
#define POKEMON_SARZENIA    71
#define POKEMON_ULTRIGARIA  70
#define POKEMON_KNOFENSA    69
#define POKEMON_MACHOMEI    68
#define POKEMON_MASCHOCK    67
#define POKEMON_MACHOLLO    66
#define POKEMON_SIMSALA     65
#define POKEMON_KADABRA     64
#define POKEMON_ABRA        63
#define POKEMON_QUAPPO      62
#define POKEMON_QUAPUTZI    61
#define POKEMON_QUAPSEL     60
#define POKEMON_ARKANI      59
#define POKEMON_FUKANO      58
#define POKEMON_RASAFF      57
#define POKEMON_MENKI       56
#define POKEMON_ENTORON     55
#define POKEMON_ENTON       54
#define POKEMON_SNOBILIKAT  53
#define POKEMON_MAUZI       52
#define POKEMON_DIGDRI      51
#define POKEMON_DIGDA       50
#define POKEMON_OMOT        49
#define POKEMON_BLUZUK      48
#define POKEMON_PARASEK     47
#define POKEMON_PARAS       46
#define POKEMON_GIFLOR      45
#define POKEMON_DUFLOR      44
#define POKEMON_MYRAPLA     43
#define POKEMON_GOLBAT      42
#define POKEMON_ZUBAT       41
#define POKEMON_KNUDDELUFF  40
#define POKEMON_PUMMELUFF   39
#define POKEMON_VULNONA     38
#define POKEMON_VULPIX      37
#define POKEMON_PIXI        36
#define POKEMON_PIEPI       35
#define POKEMON_NIDOKING    34
#define POKEMON_NIDORINO    33
#define POKEMON_NIDORANM    32
#define POKEMON_NIDOQUEEN   31
#define POKEMON_NIDORINA    30
#define POKEMON_NIDORANW    29
#define POKEMON_SANDAMER    28
#define POKEMON_SANDAN      27
#define POKEMON_RAICHU      26
#define POKEMON_PIKACHU     25
#define POKEMON_ARBOK       24
#define POKEMON_RETTAN      23
#define POKEMON_IBITAK      22
#define POKEMON_HABITAK     21
#define POKEMON_RATTIKARL   20
#define POKEMON_RATTFRATZ   19
#define POKEMON_TAUBOSS     18
#define POKEMON_TAUBOGA     17
#define POKEMON_TAUBSI      16
#define POKEMON_BIBOR       15
#define POKEMON_KOKUNA      14
#define POKEMON_HORNLIU     13
#define POKEMON_SMETTBO     12
#define POKEMON_SAFCON      11
#define POKEMON_RAUPY       10
#define POKEMON_TURTOK       9
#define POKEMON_SCHILLOK     8
#define POKEMON_SCHIGGY      7
#define POKEMON_GLURAK       6
#define POKEMON_GLUTEXO      5
#define POKEMON_GLUMANDA     4
#define POKEMON_BISAFLOR     3
#define POKEMON_BISAKNOSP    2
#define POKEMON_BISASAM      1

#define ANZ_POKEMON 151

enum ExpTier{EXP_T2, EXP_T3, EXP_T4, EXP_T5};


struct PokemonBase{
	const byte natDex;
	const char *name;
	const byte typ1;
	const byte typ2;
	const byte catchrate;
	const byte exp;
	const byte stats[6];
	enum ExpTier expTier;
	const byte countEvolutions;
	const struct Evolution *evolutions;
	const struct Learnables *learnables;
};
typedef struct PokemonBase PokemonBase;

struct Evolution{
	const byte evolCon;
	const struct PokemonBase *evol;
};
typedef struct Evolution Evolution;

struct Evolutions{
	const byte count;
	const struct Evolution *evolutions;
};
typedef struct Evolutions Evolutions;

struct Learnable{
	const byte lvl;
	const byte attacke;
};
typedef struct Learnable Learnable;

struct Learnables{
	const byte count;
	const struct Learnable *learnables;
};
typedef struct Learnables Learnables;

extern const struct PokemonBase *PokemonBaseNatDex[152];
