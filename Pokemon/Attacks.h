#pragma once

#include "types.h"

#define PHYSISCH 0
#define SPEZIAL  1
#define STATUS   2

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
extern const Attacke platscher;
// Normaler Angriff
extern const Attacke aquaknarre;
extern const Attacke blaettertanz;
extern const Attacke blubber     ;
extern const Attacke blubbstrahl   ;
extern const Attacke bohrschnabel  ;
extern const Attacke eierbombe     ;
extern const Attacke erdbeben      ;
extern const Attacke fluegelschlag ;
extern const Attacke hornattacke   ;
extern const Attacke hydropumpe    ;
extern const Attacke hyperzahn     ;
extern const Attacke hypnose       ;
extern const Attacke karateschlag  ;
extern const Attacke kaskade       ;
extern const Attacke kratzer       ;
extern const Attacke megahieb      ;
extern const Attacke megakick      ;
extern const Attacke pfund         ;
extern const Attacke rankenhieb    ;
extern const Attacke rasierblatt   ;
extern const Attacke schlitzer     ;
extern const Attacke schnabel      ;
extern const Attacke slam          ;
extern const Attacke stampfer      ;
extern const Attacke staerke       ;
extern const Attacke steinhagel    ;
extern const Attacke steinwurf     ;
extern const Attacke surfer       ;
extern const Attacke tackle        ;
extern const Attacke windstoss;
extern const Attacke zerschneider;

// Buff
extern const Attacke agilitaet;
extern const Attacke amnesie;
extern const Attacke barriere;
extern const Attacke doppelteam;
extern const Attacke einigler;
extern const Attacke energiefokus;
extern const Attacke genesung;
extern const Attacke haertner;
extern const Attacke krabbhammer;
extern const Attacke komprimator;
extern const Attacke lichtschild;
extern const Attacke meditaion;
extern const Attacke panzerschutz;
extern const Attacke reflektor;
extern const Attacke schaerfer;
extern const Attacke schwerttanz;
extern const Attacke saeurepanzer;
extern const Attacke wachstum;
extern const Attacke weichei;
extern const Attacke weissnebel;

// Debuff
extern const Attacke aussetzer;
extern const Attacke blitz;
extern const Attacke fadenschuss;
extern const Attacke heuler;
extern const Attacke konfustrahl;
extern const Attacke kreideschrei;
extern const Attacke rauchwolke  ;
extern const Attacke rutenschlag;
extern const Attacke sandwirbel;
extern const Attacke silberblick;
extern const Attacke superschall ;


// Statuseffekt
extern const Attacke absorber;
extern const Attacke blutsauger;
extern const Attacke bodycheck;
extern const Attacke dunkelnebel;
extern const Attacke erholung;
extern const Attacke explosion;
extern const Attacke donnerwelle;
extern const Attacke gesang;
extern const Attacke giftblick;
extern const Attacke giftpuder;
extern const Attacke giftwolke;
extern const Attacke megasauger;
extern const Attacke pilzspore;
extern const Attacke schlafpuder;
extern const Attacke sprungkick;
extern const Attacke stachelspore;
extern const Attacke ueberroller;
extern const Attacke todeskuss  ;
extern const Attacke toxin;
extern const Attacke risikotackle;
extern const Attacke verzweifler;
//KO
extern const Attacke geofissur;
extern const Attacke guillotine;
extern const Attacke hornbohrer;


// recursive
extern const Attacke doppelkick;
extern const Attacke dornkanone;
extern const Attacke duonadel;
extern const Attacke duplexhieb;
extern const Attacke finale;
extern const Attacke fuchtler;
extern const Attacke furienschlag;
extern const Attacke knochenkeule;
extern const Attacke kometenhieb;
extern const Attacke kratzfurie;
extern const Attacke nadelrakete;
extern const Attacke stakkato;
extern const Attacke knochenmerang;
// recursive am Ende des Zuges
extern const Attacke egelsamen;
extern const Attacke klammer;
extern const Attacke klammergriff;
extern const Attacke feuerwirbel;
extern const Attacke schnapper;
extern const Attacke wickel;


// 2 - Phase
extern const Attacke fliegen;
extern const Attacke geduld;
extern const Attacke hyperstrahl;
extern const Attacke klingensturm;
extern const Attacke solarstrahl;
extern const Attacke schaufler;
extern const Attacke himmelsfeger;
extern const Attacke schaedelwumme;

// zurückschrecken
extern const Attacke biss;
extern const Attacke fegekick;
extern const Attacke kopfnuss;

// Gegner flieht aus dem Kampf
extern const Attacke brueller;
extern const Attacke teleport;
extern const Attacke wirbelwind;



// Dmg & StatuseffektEnemy
extern const Attacke aurorastrahl;
extern const Attacke blizzard;
extern const Attacke bodyslam;
extern const Attacke donner;
extern const Attacke donnerblitz;
extern const Attacke donnerschlag;
extern const Attacke donnerschock;
extern const Attacke eishieb;
extern const Attacke eisstrahl;
extern const Attacke feuerschlag;
extern const Attacke feuersturm;
extern const Attacke flammenwurf;
extern const Attacke giftstachel;
extern const Attacke glut;
extern const Attacke irrschlag;
extern const Attacke konfusion;
extern const Attacke psychokinese;
extern const Attacke psykraft;
extern const Attacke psystrahl;
extern const Attacke psywelle;
extern const Attacke schlammbad;
extern const Attacke schlecker;
extern const Attacke saeure;
extern const Attacke smog;
extern const Attacke umklammerung;
extern const Attacke triplette;



// Spezial
extern const Attacke delegator;
extern const Attacke drachenwut;
extern const Attacke fusskick;
extern const Attacke geowurf;
extern const Attacke konter;
extern const Attacke metronom;
extern const Attacke mimikry;
extern const Attacke nachtnebel;
extern const Attacke raserei;
extern const Attacke ruckzuckhieb;
extern const Attacke spigeltrick;
extern const Attacke sternschauer;
extern const Attacke superzahn;
extern const Attacke traumfresser;
extern const Attacke turmkick;
extern const Attacke ultraschall;
extern const Attacke umwandlung;
extern const Attacke wandler;
extern const Attacke zahltag;
