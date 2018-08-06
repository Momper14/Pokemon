#pragma once

#include "Types.h"
#include "Util.h"

#define PHYSISCH 0
#define SPEZIAL  1
#define STATUS   2

#define ATTACKE_PFUND           1
#define ATTACKE_KARATESCHLAG    2
#define ATTACKE_DUPLEXHIEB      3
#define ATTACKE_KOMETENHIEB     4
#define ATTACKE_MEGAHIEB        5
#define ATTACKE_ZAHLTAG         6
#define ATTACKE_FEUERSCHLAG     7
#define ATTACKE_EISHIEB         8
#define ATTACKE_DONNERSCHLAG    9
#define ATTACKE_KRATZER        10
#define ATTACKE_KLAMMER        11
#define ATTACKE_GUILLOTINE     12
#define ATTACKE_KLINGENSTURM   13
#define ATTACKE_SCHWERTTANZ    14
#define ATTACKE_ZERSCHNEIDER   15
#define ATTACKE_WINDSTOSS      16
#define ATTACKE_FLUEGELSCHLAG  17
#define ATTACKE_WIRBELWIND     18
#define ATTACKE_FLIEGEN        19
#define ATTACKE_KLAMMERGRIFF   20
#define ATTACKE_SLAM           21
#define ATTACKE_RANKENHIEB     22
#define ATTACKE_STAMPFER       23
#define ATTACKE_DOPPELKICK     24
#define ATTACKE_MEGAKICK       25
#define ATTACKE_SPRUNGKICK     26
#define ATTACKE_FEGEKICK       27
#define ATTACKE_SANDWIRBEL     28
#define ATTACKE_KOPFNUSS       29
#define ATTACKE_HORNATTACKE    30
#define ATTACKE_FURIENSCHLAG   31
#define ATTACKE_HORNBOHRER     32
#define ATTACKE_TACKLE         33
#define ATTACKE_BODYSLAM       34
#define ATTACKE_WICKEL         35
#define ATTACKE_BODYCHECK      36
#define ATTACKE_FUCHTLER       37
#define ATTACKE_RISIKOTACKLE   38
#define ATTACKE_RUTENSCHLAG    39
#define ATTACKE_GIFTSTACHEL    40
#define ATTACKE_DUONADEL       41
#define ATTACKE_NADELRAKETE    42
#define ATTACKE_SILBERBLICK    43
#define ATTACKE_BISS           44
#define ATTACKE_HEULER         45
#define ATTACKE_BRUELLER       46
#define ATTACKE_GESANG         47
#define ATTACKE_SUPERSCHALL    48
#define ATTACKE_ULTRASCHALL    49
#define ATTACKE_AUSSETZER      50
#define ATTACKE_SAEURE         51
#define ATTACKE_GLUT           52
#define ATTACKE_FLAMMENWURF    53
#define ATTACKE_WEISSNEBEL     54
#define ATTACKE_AQUAKNARRE     55
#define ATTACKE_HYDROPUMPE     56
#define ATTACKE_SURFER         57
#define ATTACKE_EISSTRAHL      58
#define ATTACKE_BLIZZARD       59
#define ATTACKE_PSYSTRAHL      60
#define ATTACKE_BLUBBSTRAHL    61
#define ATTACKE_AURORASTRAHL   62
#define ATTACKE_HYPERSTRAHL    63
#define ATTACKE_SCHNABEL       64
#define ATTACKE_BOHRSCHNABEL   65
#define ATTACKE_UEBERROLLER    66
#define ATTACKE_FUSSKICK       67
#define ATTACKE_KONTER         68
#define ATTACKE_GEOWURF        69
#define ATTACKE_STAERKE        70
#define ATTACKE_ABSORBER       71
#define ATTACKE_MEGASAUGER     72
#define ATTACKE_EGELSAMEN      73
#define ATTACKE_WACHSTUM       74
#define ATTACKE_RASIERBLATT    75
#define ATTACKE_SOLARSTRAHL    76
#define ATTACKE_GIFTPUDER      77
#define ATTACKE_STACHELSPORE   78
#define ATTACKE_SCHLAFPUDER    79
#define ATTACKE_BLAETTERTANZ   80
#define ATTACKE_FADENSCHUSS    81
#define ATTACKE_DRACHENWUT     82
#define ATTACKE_FEUERWIRBEL    83
#define ATTACKE_DONNERSCHOCK   84
#define ATTACKE_DONNERBLITZ    85
#define ATTACKE_DONNERWELLE    86
#define ATTACKE_DONNER         87
#define ATTACKE_STEINWURF      88
#define ATTACKE_ERDBEBEN       89
#define ATTACKE_GEOFISSUR      90
#define ATTACKE_SCHAUFLER      91
#define ATTACKE_TOXIN          92
#define ATTACKE_KONFUSION      93
#define ATTACKE_PSYCHOKINESE   94
#define ATTACKE_HYPNOSE        95
#define ATTACKE_MEDITATION     96
#define ATTACKE_AGILITAET      97
#define ATTACKE_RUCKZUCKHIEB   98
#define ATTACKE_RASEREI        99
#define ATTACKE_TELEPORT      100
#define ATTACKE_NACHTNEBEL    101
#define ATTACKE_MIMIKRY       102
#define ATTACKE_KREIDESCHREI  103
#define ATTACKE_DOPPELTEAM    104
#define ATTACKE_GENESUNG      105
#define ATTACKE_HAERTNER      106
#define ATTACKE_KOMPRIMATOR   107
#define ATTACKE_RAUCHWOLKE    108
#define ATTACKE_KONFUSTRAHL   109
#define ATTACKE_PANZERSCHUTZ  110
#define ATTACKE_EINIGLER      111
#define ATTACKE_BARRIERE      112
#define ATTACKE_LICHTSCHILD   113
#define ATTACKE_DUNKELNEBEL   114
#define ATTACKE_REFLEKTOR     115
#define ATTACKE_ENERGIEFOKUS  116
#define ATTACKE_GEDULD        117
#define ATTACKE_METRONOM      118
#define ATTACKE_SPIEGELTRICK  119
#define ATTACKE_FINALE        120
#define ATTACKE_EIERBOMBE     121
#define ATTACKE_SCHLECKER     122
#define ATTACKE_SMOG          123
#define ATTACKE_SCHLAMMBAD    124
#define ATTACKE_KNOCHENKEULE  125
#define ATTACKE_FEUERSTURM    126
#define ATTACKE_KASKADE       127
#define ATTACKE_SCHNAPPER     128
#define ATTACKE_STERNSCHAUER  129
#define ATTACKE_SCHAEDELWUMME 130
#define ATTACKE_DORNKANONE    131
#define ATTACKE_UMKLAMMERUNG  132
#define ATTACKE_AMNESIE       133
#define ATTACKE_PSYKRAFT      134
#define ATTACKE_WEICHEI       135
#define ATTACKE_TURMKICK      136
#define ATTACKE_GIFTBLICK     137
#define ATTACKE_TRAUMFRESSER  138
#define ATTACKE_GIFTWOLKE     139
#define ATTACKE_STAKKATO      140 
#define ATTACKE_BLUTSAUGER    141
#define ATTACKE_TODESKUSS     142 
#define ATTACKE_HIMMELSFEGER  143
#define ATTACKE_WANDLER       144
#define ATTACKE_BLUBBER       145
#define ATTACKE_IRRSCHLAG     146
#define ATTACKE_PILZSPORE     147
#define ATTACKE_BLITZ         148
#define ATTACKE_PSYWELLE      149
#define ATTACKE_PLATSCHER     150
#define ATTACKE_SAUREPANZER   151
#define ATTACKE_KRABBHAMMER   152
#define ATTACKE_EXPLOSION     153
#define ATTACKE_KRATZFURIE    154
#define ATTACKE_KNOCHMERANG   155
#define ATTACKE_ERHOLUNG      156
#define ATTACKE_STEINHAGEL    157
#define ATTACKE_HYPERZAHN     158
#define ATTACKE_SCHAERFER     159
#define ATTACKE_UMWANDLUNG    160
#define ATTACKE_TRIPLETTE     161
#define ATTACKE_SUPERZAHN     162
#define ATTACKE_SCHLITZER     163
#define ATTACKE_DELEGATOR     164
#define ATTACKE_VERZWEIFLER   165


struct AttackeBasis{
	const char *name;
	const byte typ;
	const byte DMG;
	const byte precision;
	const byte ap;
	const byte priority;	
	const byte klasse;
};
typedef struct AttackeBasis AttackeBasis;

struct Attacke{
	byte attackeBasis;
	byte ap;
	byte apMax;
	byte apPlus;
};
typedef struct Attacke Attacke;

// SP = Schadenspunkte
// TQ = Trefferquote
// AP = Ability Points
//            name             Name            Typ      SP  TQ AP

extern const AttackeBasis *AttackDex[166];