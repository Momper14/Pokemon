#pragma once
#include "types.h"

typedef struct {
	const char *name;
	const int typ;
	const int DMG;
	const int precision;
	const int AP;
	const char priority;	
}Attacke;
// SP = Schadenspunkte
// TQ = Trefferquote
// AP = Ability Points
//            name             Name            Typ      SP  TQ AP

// Die beste Attacke aller Zeiten
const Attacke platscher     = { "Platscher"    ,normal ,  0,100,40,0 };
// Normaler Angriff
const Attacke aquaknarre    = { "Aquaknarre"   ,wasser , 40,100,25,0 };
const Attacke blaettertanz  = { "Blättertanz"  ,pflanze,120,100,10,0 };
const Attacke blubber       = { "Blubber"      ,wasser , 40,100,30,0 };
const Attacke blubbstrahl   = { "Blubbstrahl"  ,wasser , 65,100,20,0 };
const Attacke bohrschnabel  = { "Bohrschnabel" ,flug   , 80,100,20,0 };
const Attacke eierbombe     = { "Eierbombe"    ,normal ,100, 75,10,0 };
const Attacke erdbeben      = { "Erdbeben"     ,boden  ,100,100,10,0 };
const Attacke fluegelschlag = { "Flügelschlag" ,flug   , 60,100,35,0 };
const Attacke hornattacke   = { "Hornattacke"  ,normal , 65,100,25,0 };
const Attacke hydropumpe    = { "Hydropumpe"   ,wasser ,110, 80, 5,0 };
const Attacke hyperzahn     = { "Hyperzahn"    ,normal , 80, 90,15 ,0 };
const Attacke hypnose       = { "Hypnose"      ,psycho ,  0, 60,20 ,0 };
const Attacke karateschlag  = { "Karateschlag" ,kampf  , 50,100,25 ,0 };
const Attacke kaskade       = { "Kaskade"      ,wasser , 80,100,15 ,0 };
const Attacke kratzer       = { "Kratzer"      ,normal , 40,100,35 ,0 };
const Attacke megahieb      = { "Megahieb"     ,normal , 80, 85,20 ,0 };
const Attacke megakick      = { "Megakick"     ,normal ,120, 75,5 ,0 };
const Attacke pfund         = { "Pfund"        ,normal , 40,100,35 ,0 };
const Attacke rankenhieb    = { "Rankenhieb"   ,pflanze, 45,100,25 ,0 };
const Attacke rasierblatt   = { "Rasierblatt"  ,pflanze, 55, 95,25 ,0 };
const Attacke schlitzer     = { "Schlitzer"    ,normal , 70,100,20 ,0 };
const Attacke schnabel      = { "Schnabel"     ,flug   , 35,100,35 ,0 };
const Attacke slam          = { "Slam"         ,normal , 80, 75,20 ,0 };
const Attacke stampfer      = { "Stampfer"     ,normal , 65,100,20 ,0 };
const Attacke staerke       = { "Staerke"      ,normal , 80,100,15 ,0 };
const Attacke steinhagel    = { "Steinhagel"   ,stein  , 75, 90,10 ,0 };
const Attacke steinwurf     = { "Steinwurf"    ,stein  , 50, 90,15 ,0 };
const Attacke surfer        = { "Surfer"       ,wasser , 90,100,15 ,0 };
const Attacke tackle        = { "Tackle"       ,normal , 40,100,35 ,0 };
const Attacke windstoss     = { "Windstoss"    ,flug   , 40,100,35 ,0 };
const Attacke zerschneider  = { "Zerschneider" ,normal , 50, 95,30 ,0 };

// Buff
const Attacke agilitaet     = { "Agilität"     ,psycho ,  0,100,30 ,0 };
const Attacke amnesie       = { "Amnesie"      ,psycho ,  0,100,20 ,0 };
const Attacke barriere      = { "Barriere"     ,normal ,  0,100,20 ,0 };
const Attacke doppelteam    = { "Doppelteam"   ,normal ,  0,100,15 ,0 };
const Attacke einigler      = { "Einigler"     ,normal ,  0,100,40 ,0 };
const Attacke energiefokus  = { "Energiefokus" ,normal ,  0,100,30 ,0 };
const Attacke genesung      = { "Genesung"     ,normal ,  0,100,20 ,0 };
const Attacke haertner      = { "Härtner"      ,normal ,  0,100,30 ,0 };
const Attacke krabbhammer   = { "Krabbhammer"  ,wasser ,100, 90,10 ,0 };
const Attacke komprimator   = { "Kompirmator"  ,normal ,  0,100,10 ,0 };
const Attacke lichtschild   = { "Lichtschild"  ,psycho ,  0,100,30 ,0 };
const Attacke meditaion     = { "Meditation"   ,psycho ,  0,100,40 ,0 };
const Attacke panzerschutz  = { "Panzerschutz" ,wasser ,  0,100,40 ,0 };
const Attacke reflektor     = { "Reflektor"    ,psycho ,  0,100,20 ,0 };
const Attacke schaerfer     = { "Schärfer"     ,normal ,  0,100,30 ,0 };
const Attacke schwerttanz   = { "Schwerttanz"  ,normal ,  0,100,20 ,0 };
const Attacke saeurepanzer  = { "Säurepanzer"  ,gift   ,  0,100,20 ,0 };
const Attacke wachstum      = { "Wachstum"     ,pflanze,  0,100,20 ,0 };
const Attacke weichei       = { "Weichei"      ,normal ,  0,100,10 ,0 };
const Attacke weissnebel    = { "Weissnebel"   ,eis    ,  0,100,30 ,0 };

// Debuff
const Attacke aussetzer     = { "Aussetzer"    ,normal ,  0,100,20 ,0 };
const Attacke blitz         = { "Blitz"        ,normal ,  0,100,20 ,0 };
const Attacke fadenschuss   = { "Fadenschuss"  ,kaefer ,  0, 95,40 ,0 };
const Attacke heuler        = { "Heuler"       ,normal ,  0,100,40 ,0 };
const Attacke konfustrahl   = { "Konfustrahl"  ,geist  ,  0,100,10 ,0 };
const Attacke kreideschrei  = { "Kreideschrei" ,normal ,  0, 85,40 ,0 };
const Attacke rauchwolke    = { "Rauchwolke"   ,normal ,  0,100,20 ,0 };
const Attacke rutenschlag   = { "Rutenschlag"  ,normal ,  0,100,30 ,0 };
const Attacke sandwirbel    = { "Sandwirbel"   ,boden  ,  0,100,15 ,0 };
const Attacke silberblick   = { "Silberblick"  ,normal ,  0,100,30 ,0 };
const Attacke superschall   = { "Superschall"  ,normal ,  0, 55,20 ,0 };


// statuseffekt
const Attacke absorber      = { "Absorber"     ,pflanze, 20,100,20 ,0 };
const Attacke blutsauger    = { "Blutsauger"   ,kaefer , 80,100,15 ,0 };
const Attacke bodycheck     = { "Bodycheck"    ,normal , 90, 85,20 ,0 };
const Attacke dunkelnebel   = { "Dunkelnebel"  ,eis    ,  0,100,30 ,0 };
const Attacke erholung      = { "Erholung"     ,psycho ,  0,100,10 ,0 };
const Attacke explosion     = { "Explosion"    ,normal ,250,100, 5 ,0 };
const Attacke donnerwelle   = { "Donnerwelle"  ,elektro,  0, 90,20 ,0 };
const Attacke gesang        = { "Gesang"       ,normal ,  0, 55,15 ,0 };
const Attacke giftblick     = { "Giftblick"    ,normal ,  0,100,30 ,0 };
const Attacke giftpuder     = { "Giftpuder"    ,gift   ,  0, 75,35 ,0 };
const Attacke giftwolke     = { "Giftwolkte"   ,gift   ,  0, 90,40 ,0 };
const Attacke megasauger    = { "Megasauger"   ,pflanze, 40,100,10 ,0 };
const Attacke pilzspore     = { "Pilzspore"    ,pflanze,  0,100,15 ,0 };
const Attacke schlafpuder   = { "Schlafpuder"  ,pflanze,  0, 75,15 ,0 };
const Attacke sprungkick    = { "Sprunkick"    ,kampf  ,100, 95,10 ,0 };
const Attacke stachelspore  = { "Stachelspore" ,pflanze,  0, 75,30 ,0 };
const Attacke ueberroller   = { "Überroller"   ,kampf  , 80, 80,25 ,0 };
const Attacke todeskuss     = { "Todeskuss"    ,normal ,  0, 75,15 ,0 };
const Attacke toxin         = { "Toxin"        ,gift   ,  0, 90,10 ,0 };
const Attacke risikotackle  = { "Risikotackle" ,normal ,120,100,15 ,0 };
const Attacke verzweifler   = { "Verzweifler"  ,normal , 50,100, 1 ,0 };
//KO
const Attacke geofissur     = { "Geofissur"    ,boden  ,  0, 30,5 ,0 };
const Attacke guillotine    = { "Guillotine"  ,normal ,  0, 30,5 ,0 };
const Attacke hornbohrer    = { "Hornbohrer"   ,normal ,  0, 30,5 ,0 };


// recursive
const Attacke doppelkick    = { "Doppelkick"   ,kampf  , 30,100,30 ,0 };
const Attacke dornkanone    = { "Dornkanone"   ,normal , 20,100,15 ,0 };
const Attacke duonadel      = { "Duonadel"     ,kaefer , 25,100,20 ,0 };
const Attacke duplexhieb    = { "Duplexhieb"   ,normal , 15, 85,10 ,0 };
const Attacke finale        = { "Finale"       ,normal ,200,100,5 ,0 };
const Attacke fuchtler      = { "Fuchtler"     ,normal ,120,100,10 ,0 };
const Attacke furienschlag  = { "Furienschlag" ,normal , 15, 85,20 ,0 };
const Attacke knochenkeule  = { "Knochenkeule" ,boden  , 50, 90,10 ,0 };
const Attacke kometenhieb   = { "Kometenhieb"  ,normal , 18, 85,15 ,0 };
const Attacke kratzfurie    = { "Kratzfurie"   ,normal , 18, 80,15 ,0 };
const Attacke nadelrakete   = { "Nadelrakete"  ,kaefer , 25, 95,20 ,0 };
const Attacke stakkato      = { "Stakkato"     ,normal , 15, 85,20 ,0 };

// recursive am Ende des Zuges
const Attacke egelsamen     = { "Egelsamen"    ,pflanze,  0, 90,10 ,0 };
const Attacke klammer       = { "Klammer"      ,normal , 55,100,30 ,0 };
const Attacke klammergriff  = { "Klammergriff" ,normal , 15, 85,20 ,0 };
const Attacke feuerwirbel   = { "Feuerwirbel"  ,feuer  , 35, 85,15 ,0 };
const Attacke schnapper     = { "Schnapper"    ,wasser , 35,100,35 ,0 };
const Attacke wickel        = { "Wickel"       ,normal , 15, 90,20 ,0 };


// 2 - Phase
const Attacke fliegen       = { "Fliegen"      ,flug   , 90, 95,15 ,0 };
const Attacke geduld        = { "Geduld"       ,normal ,  0,100,10 ,0 };
const Attacke hyperstrahl   = { "Hyperstrahl"  ,normal ,150, 90,5 ,0 };
const Attacke klingensturm  = { "Klingensturm" ,normal , 80, 75,10 ,0 };
const Attacke solarstrahl   = { "Solarstrahl"  ,pflanze,120,100,10 ,0 };
const Attacke schaufler     = { "Schaufler"    ,boden  , 80,100,10 ,0 };
const Attacke himmelsfeger  = { "Himmelsfeger" ,flug   ,140, 90,5 ,0 };
const Attacke schaedelwumme = { "Schädelwumme" ,normal ,130,100,10 ,0 };

// zurückschrecken
const Attacke biss          = { "Biss"         ,unlicht, 60,100,25 ,0 };
const Attacke fegekick      = { "Fegekick"     ,kampf  , 60, 85,15 ,0 };
const Attacke kopfnuss      = { "Kopfnuss"     ,normal , 70,100,15 ,0 };


// Gegner flieht aus dem Kampf
const Attacke brueller      = { "Brüller"      ,normal ,  0,100,20 ,0 };
const Attacke teleport      = { "Teleport"     ,psycho ,  0,100,20 ,0 };
const Attacke wirbelwind    = { "Wirbelwind"   ,flug   ,  0,  0,20 ,0 };



// Dmg & statuseffektEnemy
const Attacke aurorastrahl  = { "Aurorastrahl" ,eis    , 65,100,25 ,0 };
const Attacke blizzard      = { "Blizzard"     ,eis    ,110, 70,5 ,0 };
const Attacke bodyslam      = { "Bodyslam"     ,normal , 85,100,15 ,0 };
const Attacke donner        = { "Donner"       ,elektro,110, 70,10 ,0 };
const Attacke donnerblitz   = { "Donnerblitz"  ,elektro, 90,100,15 ,0 };
const Attacke donnerschlag  = { "Donnerschlag" ,elektro, 75,100,15 ,0 };
const Attacke donnerschock  = { "Donnerschock" ,elektro, 40,100,30 ,0 };
const Attacke eishieb       = { "Eishieb"      ,eis    , 75,100,15 ,0 };
const Attacke eisstrahl     = { "Eisstrahl"    ,eis    , 90,100,10 ,0 };
const Attacke feuerschlag   = { "Feuerschlag"  ,feuer  , 75,100,15 ,0 };
const Attacke feuersturm    = { "Feuersturm"   ,feuer  ,110, 85, 5 ,0 };
const Attacke flammenwurf   = { "Flaemmenwurf" ,feuer  , 90,100,15 ,0 };
const Attacke giftstachel   = { "Giftstachel"  ,gift   , 15,100,35 ,0 };
const Attacke glut          = { "Glut"         ,feuer  , 40,100,25 ,0 };
const Attacke irrschlag     = { "Irrschlag"    ,normal , 70,100,10 ,0 };
const Attacke konfusion     = { "Konfusion"    ,psycho , 50,100,25 ,0 };
const Attacke psychokinese  = { "Psychokinese" ,psycho , 90,100,10 ,0 };
const Attacke psykraft      = { "Psykraft"     ,psycho ,  0, 80,15 ,0 };
const Attacke psystrahl     = { "Psystrahl"    ,psycho , 65,100,20 ,0 };
const Attacke psywelle      = { "Psywelle"     ,psycho ,  0,100,15 ,0 };
const Attacke schlammbad    = { "Schlammbad"   ,gift   , 65,100,20 ,0 };
const Attacke schlecker     = { "Schlecker"    ,geist  , 30,100,30 ,0 };
const Attacke saeure        = { "Säure"        ,gift   , 40,100,30 ,0 };
const Attacke smog          = { "Smog"         ,gift   , 30, 70,20 ,0 };
const Attacke umklammerung  = { "Umklammerung" ,normal , 10,100,35 ,0 };
const Attacke triplette     = { "Triplette"    ,normal , 80,100,10 ,0 };



// Spezial
const Attacke delegator     = { "Delegator"    ,normal ,  0,100,10,0 }; // ?
const Attacke drachenwut    = { "Drachenwut"   ,drache ,  0,100,10,0 };
const Attacke fusskick      = { "Fusskick"     ,kampf  ,  0, 90,20,0 };
const Attacke geowurf       = { "Geowurf"      ,kampf  ,  0,100,20,0 };
const Attacke konter        = { "Konter"       ,kampf  ,  0,100,20 ,-5 };
const Attacke metronom      = { "Metronom"     ,normal ,  0,  0,10 ,0 };
const Attacke mimikry       = { "Mimikry"      ,normal ,  0,100,10 ,0 };
const Attacke nachtnebel    = { "Nachtnebel"   ,geist  ,  0,100,15 ,0 };
const Attacke raserei       = { "Raserei"      ,normal , 20,100,20 ,0 };
const Attacke ruckzuckhieb  = { "Ruckzuckhieb" ,normal , 40,100,30 ,1 };
const Attacke spigeltrick   = { "Spiegeltrick" ,flug   ,  0,100,20 ,0 };
const Attacke sternschauer  = { "Stenschauer"  ,normal , 60,  0,20 ,0 };
const Attacke superzahn     = { "Superzahn"    ,normal ,  0, 90,10 ,0 };
const Attacke traumfresser  = { "Traumfresser" ,psycho ,100,100,15 ,0 };
const Attacke turmkick      = { "Turmkick"     ,kampf  ,130, 90,10 ,0 };
const Attacke ultraschall   = { "Ultraschall"  ,normal ,  0, 90,20 ,0 };
const Attacke umwandlung    = { "Umwandlung"   ,normal ,  0,100,30 ,0 };
const Attacke wandler       = { "Wandler"      ,normal ,  0,100,20 ,0 };
const Attacke zahltag       = { "Zahltag"      ,normal , 40,100,20 ,0 };


char getName(Attacke *attacke) {
	return *attacke->name;
}

int getTyp(Attacke *attacke) {
	return attacke->typ;
}

int getDMG(Attacke *attacke) {
	return attacke->DMG;
}

int getPrecision(Attacke *attacke) {
	return attacke->precision;
}

int getAP(Attacke *attacke) {
	return attacke->AP;
}

char getPriority(Attacke *attacke) {
	return attacke->priority;
} 
