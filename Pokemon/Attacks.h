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
const Attacke platscher     = { "Platscher"    ,NORMAL ,  0,100,40, 0,PHYSISCH };
// Normaler Angriff
const Attacke aquaknarre    = { "Aquaknarre"   ,WASSER , 40,100,25, 0 ,SPEZIAL };
const Attacke blaettertanz  = { "Blättertanz"  ,PFLANZE,120,100,10, 0 ,SPEZIAL };
const Attacke blubber       = { "Blubber"      ,WASSER , 40,100,30, 0 ,SPEZIAL };
const Attacke blubbstrahl   = { "Blubbstrahl"  ,WASSER , 65,100,20, 0 ,SPEZIAL };
const Attacke bohrschnabel  = { "Bohrschnabel" ,FLUG   , 80,100,20, 0,PHYSISCH };
const Attacke eierbombe     = { "Eierbombe"    ,NORMAL ,100, 75,10, 0,PHYSISCH };
const Attacke erdbeben      = { "Erdbeben"     ,BODEN  ,100,100,10, 0 ,PHYSISCH };
const Attacke fluegelschlag = { "Flügelschlag" ,FLUG   , 60,100,35, 0,PHYSISCH };
const Attacke hornattacke   = { "Hornattacke"  ,NORMAL , 65,100,25, 0 ,PHYSISCH };
const Attacke hydropumpe    = { "Hydropumpe"   ,WASSER ,110, 80, 5, 0 ,SPEZIAL };
const Attacke hyperzahn     = { "Hyperzahn"    ,NORMAL , 80, 90,15, 0 ,PHYSISCH };
const Attacke hypnose       = { "Hypnose"      ,PSYCHO ,  0, 60,20, 0 ,STATUS };
const Attacke karateschlag  = { "Karateschlag" ,KAMPF  , 50,100,25, 0 ,PHYSISCH };
const Attacke kaskade       = { "Kaskade"      ,WASSER , 80,100,15, 0 ,PHYSISCH };
const Attacke kratzer       = { "Kratzer"      ,NORMAL , 40,100,35, 0 ,PHYSISCH };
const Attacke megahieb      = { "Megahieb"     ,NORMAL , 80, 85,20, 0 ,PHYSISCH };
const Attacke megakick      = { "Megakick"     ,NORMAL ,120, 75, 5, 0 ,PHYSISCH };
const Attacke pfund         = { "Pfund"        ,NORMAL , 40,100,35, 0 ,PHYSISCH };
const Attacke rankenhieb    = { "Rankenhieb"   ,PFLANZE, 45,100,25, 0 ,PHYSISCH };
const Attacke rasierblatt   = { "Rasierblatt"  ,PFLANZE, 55, 95,25, 0 ,PHYSISCH };
const Attacke schlitzer     = { "Schlitzer"    ,NORMAL , 70,100,20, 0 ,PHYSISCH };
const Attacke schnabel      = { "Schnabel"     ,FLUG   , 35,100,35, 0 ,PHYSISCH };
const Attacke slam          = { "Slam"         ,NORMAL , 80, 75,20, 0 ,PHYSISCH };
const Attacke stampfer      = { "Stampfer"     ,NORMAL , 65,100,20, 0 ,PHYSISCH };
const Attacke staerke       = { "Staerke"      ,NORMAL , 80,100,15, 0 ,PHYSISCH };
const Attacke steinhagel    = { "Steinhagel"   ,STEIN  , 75, 90,10, 0 ,PHYSISCH };
const Attacke steinwurf     = { "Steinwurf"    ,STEIN  , 50, 90,15, 0 ,PHYSISCH };
const Attacke surfer        = { "Surfer"       ,WASSER , 90,100,15, 0 ,SPEZIAL };
const Attacke tackle        = { "Tackle"       ,NORMAL , 40,100,35, 0 ,PHYSISCH };
const Attacke windstoss     = { "Windstoss"    ,FLUG   , 40,100,35, 0 ,SPEZIAL };
const Attacke zerschneider  = { "Zerschneider" ,NORMAL , 50, 95,30, 0 ,PHYSISCH };

// Buff
const Attacke agilitaet     = { "Agilität"     ,PSYCHO ,  0,100,30, 0 ,STATUS };
const Attacke amnesie       = { "Amnesie"      ,PSYCHO ,  0,100,20, 0 ,STATUS };
const Attacke barriere      = { "Barriere"     ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke doppelteam    = { "Doppelteam"   ,NORMAL ,  0,100,15, 0 ,STATUS };
const Attacke einigler      = { "Einigler"     ,NORMAL ,  0,100,40, 0 ,STATUS };
const Attacke energiefokus  = { "Energiefokus" ,NORMAL ,  0,100,30, 0,STATUS };
const Attacke genesung      = { "Genesung"     ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke haertner      = { "Härtner"      ,NORMAL ,  0,100,30, 0,STATUS };
const Attacke krabbhammer   = { "Krabbhammer"  ,WASSER ,100, 90,10, 0 ,PHYSISCH };
const Attacke komprimator   = { "Kompirmator"  ,NORMAL ,  0,100,10, 0,STATUS };
const Attacke lichtschild   = { "Lichtschild"  ,PSYCHO ,  0,100,30, 0 ,STATUS };
const Attacke meditaion     = { "Meditation"   ,PSYCHO ,  0,100,40, 0 ,STATUS };
const Attacke panzerschutz  = { "Panzerschutz" ,WASSER ,  0,100,40, 0 ,STATUS };
const Attacke reflektor     = { "Reflektor"    ,PSYCHO ,  0,100,20, 0 ,STATUS };
const Attacke schaerfer     = { "Schärfer"     ,NORMAL ,  0,100,30, 0 ,STATUS };
const Attacke schwerttanz   = { "Schwerttanz"  ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke saeurepanzer  = { "Säurepanzer"  ,GIFT   ,  0,100,20, 0 ,STATUS };
const Attacke wachstum      = { "Wachstum"     ,PFLANZE,  0,100,20, 0,STATUS };
const Attacke weichei       = { "Weichei"      ,NORMAL ,  0,100,10, 0,STATUS };
const Attacke weissnebel    = { "Weissnebel"   ,EIS    ,  0,100,30, 0 ,STATUS };

// Debuff
const Attacke aussetzer     = { "Aussetzer"    ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke blitz         = { "Blitz"        ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke fadenschuss   = { "Fadenschuss"  ,KAEFER ,  0, 95,40, 0 ,STATUS };
const Attacke heuler        = { "Heuler"       ,NORMAL ,  0,100,40, 0 ,STATUS };
const Attacke konfustrahl   = { "Konfustrahl"  ,GEIST  ,  0,100,10, 0 ,STATUS };
const Attacke kreideschrei  = { "Kreideschrei" ,NORMAL ,  0, 85,40, 0 ,STATUS };
const Attacke rauchwolke    = { "Rauchwolke"   ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke rutenschlag   = { "Rutenschlag"  ,NORMAL ,  0,100,30, 0 ,STATUS };
const Attacke sandwirbel    = { "Sandwirbel"   ,BODEN  ,  0,100,15, 0 ,STATUS };
const Attacke silberblick   = { "Silberblick"  ,NORMAL ,  0,100,30, 0,STATUS };
const Attacke superschall   = { "Superschall"  ,NORMAL ,  0, 55,20, 0,STATUS };


// Statuseffekt
const Attacke absorber      = { "Absorber"     ,PFLANZE, 20,100,20, 0 ,SPEZIAL };
const Attacke blutsauger    = { "Blutsauger"   ,KAEFER , 80,100,15, 0 ,PHYSISCH };
const Attacke bodycheck     = { "Bodycheck"    ,NORMAL , 90, 85,20, 0 ,PHYSISCH };
const Attacke dunkelnebel   = { "Dunkelnebel"  ,EIS    ,  0,100,30, 0 ,STATUS };
const Attacke erholung      = { "Erholung"     ,PSYCHO ,  0,100,10, 0,STATUS };
const Attacke explosion     = { "Explosion"    ,NORMAL ,250,100, 5, 0 ,PHYSISCH };
const Attacke donnerwelle   = { "Donnerwelle"  ,ELEKTRO,  0, 90,20, 0 ,STATUS };
const Attacke gesang        = { "Gesang"       ,NORMAL ,  0, 55,15, 0,STATUS };
const Attacke giftblick     = { "Giftblick"    ,NORMAL ,  0,100,30, 0 ,STATUS };
const Attacke giftpuder     = { "Giftpuder"    ,GIFT   ,  0, 75,35, 0 ,STATUS };
const Attacke giftwolke     = { "Giftwolkte"   ,GIFT   ,  0, 90,40, 0 ,STATUS };
const Attacke megasauger    = { "Megasauger"   ,PFLANZE, 40,100,10, 0 ,SPEZIAL };
const Attacke pilzspore     = { "Pilzspore"    ,PFLANZE,  0,100,15, 0 ,STATUS };
const Attacke schlafpuder   = { "Schlafpuder"  ,PFLANZE,  0, 75,15, 0 ,STATUS };
const Attacke sprungkick    = { "Sprunkick"    ,KAMPF  ,100, 95,10, 0 ,PHYSISCH };
const Attacke stachelspore  = { "Stachelspore" ,PFLANZE,  0, 75,30, 0 ,STATUS };
const Attacke ueberroller   = { "Überroller"   ,KAMPF  , 80, 80,25, 0 ,PHYSISCH };
const Attacke todeskuss     = { "Todeskuss"    ,NORMAL ,  0, 75,15, 0 ,STATUS };
const Attacke toxin         = { "Toxin"        ,GIFT   ,  0, 90,10, 0 ,STATUS };
const Attacke risikotackle  = { "Risikotackle" ,NORMAL ,120,100,15, 0 ,PHYSISCH };
const Attacke verzweifler   = { "Verzweifler"  ,NORMAL , 50,100, 1, 0 ,PHYSISCH };
//KO
const Attacke geofissur     = { "Geofissur"    ,BODEN  ,  0, 30, 5, 0 ,PHYSISCH };
const Attacke guillotine    = { "Guillotine"   ,NORMAL ,  0, 30, 5, 0 ,PHYSISCH };
const Attacke hornbohrer    = { "Hornbohrer"   ,NORMAL ,  0, 30, 5, 0 ,PHYSISCH };


// recursive
const Attacke doppelkick    = { "Doppelkick"   ,KAMPF  , 30,100,30, 0 ,PHYSISCH };
const Attacke dornkanone    = { "Dornkanone"   ,NORMAL , 20,100,15, 0 ,PHYSISCH };
const Attacke duonadel      = { "Duonadel"     ,KAEFER , 25,100,20, 0 ,PHYSISCH };
const Attacke duplexhieb    = { "Duplexhieb"   ,NORMAL , 15, 85,10, 0 ,PHYSISCH };
const Attacke finale        = { "Finale"       ,NORMAL ,200,100, 5, 0 ,PHYSISCH };
const Attacke fuchtler      = { "Fuchtler"     ,NORMAL ,120,100,10, 0 ,PHYSISCH };
const Attacke furienschlag  = { "Furienschlag" ,NORMAL , 15, 85,20, 0 ,PHYSISCH };
const Attacke knochenkeule  = { "Knochenkeule" ,BODEN  , 50, 90,10, 0 ,PHYSISCH };
const Attacke kometenhieb   = { "Kometenhieb"  ,NORMAL , 18, 85,15, 0 ,PHYSISCH };
const Attacke kratzfurie    = { "Kratzfurie"   ,NORMAL , 18, 80,15, 0 ,PHYSISCH };
const Attacke nadelrakete   = { "Nadelrakete"  ,KAEFER , 25, 95,20, 0 ,PHYSISCH };
const Attacke stakkato      = { "Stakkato"     ,NORMAL , 15, 85,20, 0 ,PHYSISCH };
const Attacke knochenmerang = { "Knochenmerang",BODEN  ,50 ,90 ,10,0 ,PHYSISCH };
// recursive am Ende des Zuges
const Attacke egelsamen     = { "Egelsamen"    ,PFLANZE,  0, 90,10, 0 ,STATUS };
const Attacke klammer       = { "Klammer"      ,NORMAL , 55,100,30, 0 ,PHYSISCH };
const Attacke klammergriff  = { "Klammergriff" ,NORMAL , 15, 85,20, 0 ,PHYSISCH };
const Attacke feuerwirbel   = { "Feuerwirbel"  ,FEUER  , 35, 85,15, 0 ,SPEZIAL };
const Attacke schnapper     = { "Schnapper"    ,WASSER , 35,100,35, 0 ,PHYSISCH };
const Attacke wickel        = { "Wickel"       ,NORMAL , 15, 90,20, 0 ,PHYSISCH };


// 2 - Phase
const Attacke fliegen       = { "Fliegen"      ,FLUG   , 90, 95,15, 0 ,PHYSISCH };
const Attacke geduld        = { "Geduld"       ,NORMAL ,  0,100,10, 0 ,PHYSISCH };
const Attacke hyperstrahl   = { "Hyperstrahl"  ,NORMAL ,150, 90, 5, 0 ,SPEZIAL };
const Attacke klingensturm  = { "Klingensturm" ,NORMAL , 80, 75,10, 0 ,SPEZIAL };
const Attacke solarstrahl   = { "Solarstrahl"  ,PFLANZE,120,100,10, 0 ,SPEZIAL };
const Attacke schaufler     = { "Schaufler"    ,BODEN  , 80,100,10, 0 ,PHYSISCH };
const Attacke himmelsfeger  = { "Himmelsfeger" ,FLUG   ,140, 90, 5, 0 ,PHYSISCH };
const Attacke schaedelwumme = { "Schädelwumme" ,NORMAL ,130,100,10, 0 ,PHYSISCH };

// zurückschrecken
const Attacke biss          = { "Biss"         ,UNLICHT, 60,100,25, 0 ,PHYSISCH };
const Attacke fegekick      = { "Fegekick"     ,KAMPF  , 60, 85,15, 0 ,PHYSISCH };
const Attacke kopfnuss      = { "Kopfnuss"     ,NORMAL , 70,100,15, 0 ,PHYSISCH };


// Gegner flieht aus dem Kampf
const Attacke brueller      = { "Brüller"      ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke teleport      = { "Teleport"     ,PSYCHO ,  0,100,20, 0 ,STATUS };
const Attacke wirbelwind    = { "Wirbelwind"   ,FLUG   ,  0,  0,20, 0,STATUS };



// Dmg & StatuseffektEnemy
const Attacke aurorastrahl  = { "Aurorastrahl" ,EIS    , 65,100,25, 0 ,SPEZIAL };
const Attacke blizzard      = { "Blizzard"     ,EIS    ,110, 70, 5, 0 ,SPEZIAL };
const Attacke bodyslam      = { "Bodyslam"     ,NORMAL , 85,100,15, 0 ,PHYSISCH };
const Attacke donner        = { "Donner"       ,ELEKTRO,110, 70,10, 0 ,SPEZIAL };
const Attacke donnerblitz   = { "Donnerblitz"  ,ELEKTRO, 90,100,15, 0 ,SPEZIAL };
const Attacke donnerschlag  = { "Donnerschlag" ,ELEKTRO, 75,100,15, 0 ,PHYSISCH };
const Attacke donnerschock  = { "Donnerschock" ,ELEKTRO, 40,100,30, 0 ,SPEZIAL };
const Attacke eishieb       = { "Eishieb"      ,EIS    , 75,100,15, 0 ,PHYSISCH };
const Attacke eisstrahl     = { "Eisstrahl"    ,EIS    , 90,100,10, 0 ,SPEZIAL };
const Attacke feuerschlag   = { "Feuerschlag"  ,FEUER  , 75,100,15, 0 ,PHYSISCH };
const Attacke feuersturm    = { "Feuersturm"   ,FEUER  ,110, 85, 5, 0 ,SPEZIAL };
const Attacke flammenwurf   = { "Flaemmenwurf" ,FEUER  , 90,100,15, 0 ,SPEZIAL };
const Attacke giftstachel   = { "Giftstachel"  ,GIFT   , 15,100,35, 0 ,PHYSISCH };
const Attacke glut          = { "Glut"         ,FEUER  , 40,100,25, 0 ,SPEZIAL };
const Attacke irrschlag     = { "Irrschlag"    ,NORMAL , 70,100,10, 0 ,PHYSISCH };
const Attacke konfusion     = { "Konfusion"    ,PSYCHO , 50,100,25, 0 ,SPEZIAL };
const Attacke psychokinese  = { "Psychokinese" ,PSYCHO , 90,100,10, 0 ,SPEZIAL };
const Attacke psykraft      = { "Psykraft"     ,PSYCHO ,  0, 80,15, 0 ,STATUS };
const Attacke psystrahl     = { "Psystrahl"    ,PSYCHO , 65,100,20, 0 ,SPEZIAL };
const Attacke psywelle      = { "Psywelle"     ,PSYCHO ,  0,100,15, 0 ,SPEZIAL };
const Attacke schlammbad    = { "Schlammbad"   ,GIFT   , 65,100,20, 0 ,SPEZIAL };
const Attacke schlecker     = { "Schlecker"    ,GEIST  , 30,100,30, 0 ,PHYSISCH };
const Attacke saeure        = { "Säure"        ,GIFT   , 40,100,30, 0 ,SPEZIAL };
const Attacke smog          = { "Smog"         ,GIFT   , 30, 70,20, 0 ,SPEZIAL };
const Attacke umklammerung  = { "Umklammerung" ,NORMAL , 10,100,35, 0 ,PHYSISCH };
const Attacke triplette     = { "Triplette"    ,NORMAL , 80,100,10, 0 ,SPEZIAL };



// Spezial
const Attacke delegator     = { "Delegator"    ,NORMAL ,  0,100,10, 0 ,STATUS };
const Attacke drachenwut    = { "Drachenwut"   ,DRACHE ,  0,100,10, 0 ,SPEZIAL };
const Attacke fusskick      = { "Fusskick"     ,KAMPF  ,  0, 90,20, 0 ,PHYSISCH };
const Attacke geowurf       = { "Geowurf"      ,KAMPF  ,  0,100,20, 0 ,PHYSISCH };
const Attacke konter        = { "Konter"       ,KAMPF  ,  0,100,20,-5 ,PHYSISCH };
const Attacke metronom      = { "Metronom"     ,NORMAL ,  0,  0,10, 0 ,STATUS };
const Attacke mimikry       = { "Mimikry"      ,NORMAL ,  0,100,10, 0 ,STATUS };
const Attacke nachtnebel    = { "Nachtnebel"   ,GEIST  ,  0,100,15, 0 ,SPEZIAL };
const Attacke raserei       = { "Raserei"      ,NORMAL , 20,100,20, 0 ,PHYSISCH };
const Attacke ruckzuckhieb  = { "Ruckzuckhieb" ,NORMAL , 40,100,30, 1 ,PHYSISCH };
const Attacke spigeltrick   = { "Spiegeltrick" ,FLUG   ,  0,100,20, 0 ,STATUS };
const Attacke sternschauer  = { "Stenschauer"  ,NORMAL , 60,  0,20, 0 ,SPEZIAL };
const Attacke superzahn     = { "Superzahn"    ,NORMAL ,  0, 90,10, 0 ,PHYSISCH };
const Attacke traumfresser  = { "Traumfresser" ,PSYCHO ,100,100,15, 0 ,SPEZIAL };
const Attacke turmkick      = { "Turmkick"     ,KAMPF  ,130, 90,10, 0 ,PHYSISCH };
const Attacke ultraschall   = { "Ultraschall"  ,NORMAL ,  0, 90,20, 0 ,SPEZIAL };
const Attacke umwandlung    = { "Umwandlung"   ,NORMAL ,  0,100,30, 0 ,STATUS };
const Attacke wandler       = { "Wandler"      ,NORMAL ,  0,100,20, 0 ,STATUS };
const Attacke zahltag       = { "Zahltag"      ,NORMAL , 40,100,20, 0 ,PHYSISCH };
