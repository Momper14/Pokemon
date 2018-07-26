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
extern const Attacke Meditaion;
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
extern const Attacke Knochenmerang;
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
