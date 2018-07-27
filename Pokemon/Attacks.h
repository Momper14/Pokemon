#pragma once

#include "types.h"
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
#define ATTACKE_FLUEGELSCHALG  17
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
#define ATTACKE_YPERSTRAHL     63
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
#define ATTACKE_HEARTNER      106
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
#define ATTACKE_GIFTBLICK     136
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


typedef struct Attacke{
	const char *name;
	const int typ;
	const int DMG;
	const int precision;
	const int AP;
	const char priority;	
	const int klasse;
}Attacke;
// SP = Schadenspunkte
// TQ = Trefferquote
// AP = Ability Points
//            name             Name            Typ      SP  TQ AP

// Die beste Attacke aller Zeiten
extern const Attacke Platscher;
// Normaler Angriff
extern const Attacke Aquaknarre;
extern const Attacke Blaettertanz;
extern const Attacke Blubber     ;
extern const Attacke Blubbstrahl   ;
extern const Attacke Bohrschnabel  ;
extern const Attacke Eierbombe     ;
extern const Attacke Erdbeben      ;
extern const Attacke Fluegelschlag ;
extern const Attacke Hornattacke   ;
extern const Attacke Hydropumpe    ;
extern const Attacke Hyperzahn     ;
extern const Attacke Hypnose       ;
extern const Attacke Karateschlag  ;
extern const Attacke Kaskade       ;
extern const Attacke Kratzer       ;
extern const Attacke Megahieb      ;
extern const Attacke Megakick      ;
extern const Attacke Pfund         ;
extern const Attacke Rankenhieb    ;
extern const Attacke Rasierblatt   ;
extern const Attacke Schlitzer     ;
extern const Attacke Schnabel      ;
extern const Attacke Slam          ;
extern const Attacke Stampfer      ;
extern const Attacke Staerke       ;
extern const Attacke Steinhagel    ;
extern const Attacke Steinwurf     ;
extern const Attacke Surfer       ;
extern const Attacke Tackle        ;
extern const Attacke Windstoss;
extern const Attacke Zerschneider;

// Buff
extern const Attacke Agilitaet;
extern const Attacke Amnesie;
extern const Attacke Barriere;
extern const Attacke Doppelteam;
extern const Attacke Einigler;
extern const Attacke Energiefokus;
extern const Attacke Genesung;
extern const Attacke Haertner;
extern const Attacke Krabbhammer;
extern const Attacke Komprimator;
extern const Attacke Lichtschild;
extern const Attacke Meditation;
extern const Attacke Panzerschutz;
extern const Attacke Reflektor;
extern const Attacke Schaerfer;
extern const Attacke Schwerttanz;
extern const Attacke Saeurepanzer;
extern const Attacke Wachstum;
extern const Attacke Weichei;
extern const Attacke Weissnebel;

// Debuff
extern const Attacke Aussetzer;
extern const Attacke Blitz;
extern const Attacke Fadenschuss;
extern const Attacke Heuler;
extern const Attacke Konfustrahl;
extern const Attacke Kreideschrei;
extern const Attacke Rauchwolke  ;
extern const Attacke Rutenschlag;
extern const Attacke Sandwirbel;
extern const Attacke Silberblick;
extern const Attacke Superschall ;


// Statuseffekt
extern const Attacke Absorber;
extern const Attacke Blutsauger;
extern const Attacke Bodycheck;
extern const Attacke Dunkelnebel;
extern const Attacke Erholung;
extern const Attacke Explosion;
extern const Attacke Donnerwelle;
extern const Attacke Gesang;
extern const Attacke Giftblick;
extern const Attacke Giftpuder;
extern const Attacke Giftwolke;
extern const Attacke Megasauger;
extern const Attacke Pilzspore;
extern const Attacke Schlafpuder;
extern const Attacke Sprungkick;
extern const Attacke Stachelspore;
extern const Attacke Ueberroller;
extern const Attacke Todeskuss  ;
extern const Attacke Toxin;
extern const Attacke Risikotackle;
extern const Attacke Cerzweifler;
//KO
extern const Attacke Geofissur;
extern const Attacke Guillotine;
extern const Attacke Hornbohrer;


// recursive
extern const Attacke Doppelkick;
extern const Attacke Dornkanone;
extern const Attacke Duonadel;
extern const Attacke Duplexhieb;
extern const Attacke Finale;
extern const Attacke Fuchtler;
extern const Attacke Furienschlag;
extern const Attacke Knochenkeule;
extern const Attacke Kometenhieb;
extern const Attacke Kratzfurie;
extern const Attacke Nadelrakete;
extern const Attacke Stakkato;
extern const Attacke Knochmerang;
// recursive am Ende des Zuges
extern const Attacke Egelsamen;
extern const Attacke Klammer;
extern const Attacke Klammergriff;
extern const Attacke Feuerwirbel;
extern const Attacke Schnapper;
extern const Attacke Wickel;


// 2 - Phase
extern const Attacke Fliegen;
extern const Attacke Geduld;
extern const Attacke Hyperstrahl;
extern const Attacke Klingensturm;
extern const Attacke Solarstrahl;
extern const Attacke Schaufler;
extern const Attacke Himmelsfeger;
extern const Attacke Schaedelwumme;

// zurückschrecken
extern const Attacke Biss;
extern const Attacke Fegekick;
extern const Attacke Kopfnuss;

// Gegner flieht aus dem Kampf
extern const Attacke Brueller;
extern const Attacke Teleport;
extern const Attacke Wirbelwind;



// Dmg & StatuseffektEnemy
extern const Attacke Aurorastrahl;
extern const Attacke Blizzard;
extern const Attacke Bodyslam;
extern const Attacke Donner;
extern const Attacke Donnerblitz;
extern const Attacke Donnerschlag;
extern const Attacke Donnerschock;
extern const Attacke Eishieb;
extern const Attacke Eisstrahl;
extern const Attacke Feuerschlag;
extern const Attacke Feuersturm;
extern const Attacke Flammenwurf;
extern const Attacke Giftstachel;
extern const Attacke Glut;
extern const Attacke Irrschlag;
extern const Attacke Konfusion;
extern const Attacke Psychokinese;
extern const Attacke Psykraft;
extern const Attacke Psystrahl;
extern const Attacke Psywelle;
extern const Attacke Schlammbad;
extern const Attacke Schlecker;
extern const Attacke Saeure;
extern const Attacke Smog;
extern const Attacke Umklammerung;
extern const Attacke Triplette;



// Spezial
extern const Attacke Selegator;
extern const Attacke Srachenwut;
extern const Attacke Fusskick;
extern const Attacke Geowurf;
extern const Attacke Konter;
extern const Attacke Metronom;
extern const Attacke Mimikry;
extern const Attacke Nachtnebel;
extern const Attacke Raserei;
extern const Attacke Ruckzuckhieb;
extern const Attacke Spigeltrick;
extern const Attacke Sternschauer;
extern const Attacke Superzahn;
extern const Attacke Traumfresser;
extern const Attacke Turmkick;
extern const Attacke Ultraschall;
extern const Attacke Umwandlung;
extern const Attacke Wandler;
extern const Attacke Zahltag;

extern const Attacke *AttackDex[166];