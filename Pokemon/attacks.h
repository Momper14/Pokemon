#pragma once

#include "types.h"

#define physisch 0
#define spezial  1
#define status   2

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
const Attacke platscher     = { "Platscher"    ,normal ,  0,100,40, 0,physisch };
// Normaler Angriff
const Attacke aquaknarre    = { "Aquaknarre"   ,wasser , 40,100,25, 0 ,spezial };
const Attacke blaettertanz  = { "Blättertanz"  ,pflanze,120,100,10, 0 ,spezial };
const Attacke blubber       = { "Blubber"      ,wasser , 40,100,30, 0 ,spezial };
const Attacke blubbstrahl   = { "Blubbstrahl"  ,wasser , 65,100,20, 0 ,spezial };
const Attacke bohrschnabel  = { "Bohrschnabel" ,flug   , 80,100,20, 0,physisch };
const Attacke eierbombe     = { "Eierbombe"    ,normal ,100, 75,10, 0,physisch };
const Attacke erdbeben      = { "Erdbeben"     ,boden  ,100,100,10, 0 ,physisch };
const Attacke fluegelschlag = { "Flügelschlag" ,flug   , 60,100,35, 0,physisch };
const Attacke hornattacke   = { "Hornattacke"  ,normal , 65,100,25, 0 ,physisch };
const Attacke hydropumpe    = { "Hydropumpe"   ,wasser ,110, 80, 5, 0 ,spezial };
const Attacke hyperzahn     = { "Hyperzahn"    ,normal , 80, 90,15, 0 ,physisch };
const Attacke hypnose       = { "Hypnose"      ,psycho ,  0, 60,20, 0 ,status };
const Attacke karateschlag  = { "Karateschlag" ,kampf  , 50,100,25, 0 ,physisch };
const Attacke kaskade       = { "Kaskade"      ,wasser , 80,100,15, 0 ,physisch };
const Attacke kratzer       = { "Kratzer"      ,normal , 40,100,35, 0 ,physisch };
const Attacke megahieb      = { "Megahieb"     ,normal , 80, 85,20, 0 ,physisch };
const Attacke megakick      = { "Megakick"     ,normal ,120, 75, 5, 0 ,physisch };
const Attacke pfund         = { "Pfund"        ,normal , 40,100,35, 0 ,physisch };
const Attacke rankenhieb    = { "Rankenhieb"   ,pflanze, 45,100,25, 0 ,physisch };
const Attacke rasierblatt   = { "Rasierblatt"  ,pflanze, 55, 95,25, 0 ,physisch };
const Attacke schlitzer     = { "Schlitzer"    ,normal , 70,100,20, 0 ,physisch };
const Attacke schnabel      = { "Schnabel"     ,flug   , 35,100,35, 0 ,physisch };
const Attacke slam          = { "Slam"         ,normal , 80, 75,20, 0 ,physisch };
const Attacke stampfer      = { "Stampfer"     ,normal , 65,100,20, 0 ,physisch };
const Attacke staerke       = { "Staerke"      ,normal , 80,100,15, 0 ,physisch };
const Attacke steinhagel    = { "Steinhagel"   ,stein  , 75, 90,10, 0 ,physisch };
const Attacke steinwurf     = { "Steinwurf"    ,stein  , 50, 90,15, 0 ,physisch };
const Attacke surfer        = { "Surfer"       ,wasser , 90,100,15, 0 ,spezial };
const Attacke tackle        = { "Tackle"       ,normal , 40,100,35, 0 ,physisch };
const Attacke windstoss     = { "Windstoss"    ,flug   , 40,100,35, 0 ,spezial };
const Attacke zerschneider  = { "Zerschneider" ,normal , 50, 95,30, 0 ,physisch };

// Buff
const Attacke agilitaet     = { "Agilität"     ,psycho ,  0,100,30, 0 ,status };
const Attacke amnesie       = { "Amnesie"      ,psycho ,  0,100,20, 0 ,status };
const Attacke barriere      = { "Barriere"     ,normal ,  0,100,20, 0 ,status };
const Attacke doppelteam    = { "Doppelteam"   ,normal ,  0,100,15, 0 ,status };
const Attacke einigler      = { "Einigler"     ,normal ,  0,100,40, 0 ,status };
const Attacke energiefokus  = { "Energiefokus" ,normal ,  0,100,30, 0,status };
const Attacke genesung      = { "Genesung"     ,normal ,  0,100,20, 0 ,status };
const Attacke haertner      = { "Härtner"      ,normal ,  0,100,30, 0,status };
const Attacke krabbhammer   = { "Krabbhammer"  ,wasser ,100, 90,10, 0 ,physisch };
const Attacke komprimator   = { "Kompirmator"  ,normal ,  0,100,10, 0,status };
const Attacke lichtschild   = { "Lichtschild"  ,psycho ,  0,100,30, 0 ,status };
const Attacke meditaion     = { "Meditation"   ,psycho ,  0,100,40, 0 ,status };
const Attacke panzerschutz  = { "Panzerschutz" ,wasser ,  0,100,40, 0 ,status };
const Attacke reflektor     = { "Reflektor"    ,psycho ,  0,100,20, 0 ,status };
const Attacke schaerfer     = { "Schärfer"     ,normal ,  0,100,30, 0 ,status };
const Attacke schwerttanz   = { "Schwerttanz"  ,normal ,  0,100,20, 0 ,status };
const Attacke saeurepanzer  = { "Säurepanzer"  ,gift   ,  0,100,20, 0 ,status };
const Attacke wachstum      = { "Wachstum"     ,pflanze,  0,100,20, 0,status };
const Attacke weichei       = { "Weichei"      ,normal ,  0,100,10, 0,status };
const Attacke weissnebel    = { "Weissnebel"   ,eis    ,  0,100,30, 0 ,status };

// Debuff
const Attacke aussetzer     = { "Aussetzer"    ,normal ,  0,100,20, 0 ,status };
const Attacke blitz         = { "Blitz"        ,normal ,  0,100,20, 0 ,status };
const Attacke fadenschuss   = { "Fadenschuss"  ,kaefer ,  0, 95,40, 0 ,status };
const Attacke heuler        = { "Heuler"       ,normal ,  0,100,40, 0 ,status };
const Attacke konfustrahl   = { "Konfustrahl"  ,geist  ,  0,100,10, 0 ,status };
const Attacke kreideschrei  = { "Kreideschrei" ,normal ,  0, 85,40, 0 ,status };
const Attacke rauchwolke    = { "Rauchwolke"   ,normal ,  0,100,20, 0 ,status };
const Attacke rutenschlag   = { "Rutenschlag"  ,normal ,  0,100,30, 0 ,status };
const Attacke sandwirbel    = { "Sandwirbel"   ,boden  ,  0,100,15, 0 ,status };
const Attacke silberblick   = { "Silberblick"  ,normal ,  0,100,30, 0,status };
const Attacke superschall   = { "Superschall"  ,normal ,  0, 55,20, 0,status };


// statuseffekt
const Attacke absorber      = { "Absorber"     ,pflanze, 20,100,20, 0 ,spezial };
const Attacke blutsauger    = { "Blutsauger"   ,kaefer , 80,100,15, 0 ,physisch };
const Attacke bodycheck     = { "Bodycheck"    ,normal , 90, 85,20, 0 ,physisch };
const Attacke dunkelnebel   = { "Dunkelnebel"  ,eis    ,  0,100,30, 0 ,status };
const Attacke erholung      = { "Erholung"     ,psycho ,  0,100,10, 0,status };
const Attacke explosion     = { "Explosion"    ,normal ,250,100, 5, 0 ,physisch };
const Attacke donnerwelle   = { "Donnerwelle"  ,elektro,  0, 90,20, 0 ,status };
const Attacke gesang        = { "Gesang"       ,normal ,  0, 55,15, 0,status };
const Attacke giftblick     = { "Giftblick"    ,normal ,  0,100,30, 0 ,status };
const Attacke giftpuder     = { "Giftpuder"    ,gift   ,  0, 75,35, 0 ,status };
const Attacke giftwolke     = { "Giftwolkte"   ,gift   ,  0, 90,40, 0 ,status };
const Attacke megasauger    = { "Megasauger"   ,pflanze, 40,100,10, 0 ,spezial };
const Attacke pilzspore     = { "Pilzspore"    ,pflanze,  0,100,15, 0 ,status };
const Attacke schlafpuder   = { "Schlafpuder"  ,pflanze,  0, 75,15, 0 ,status };
const Attacke sprungkick    = { "Sprunkick"    ,kampf  ,100, 95,10, 0 ,physisch };
const Attacke stachelspore  = { "Stachelspore" ,pflanze,  0, 75,30, 0 ,status };
const Attacke ueberroller   = { "Überroller"   ,kampf  , 80, 80,25, 0 ,physisch };
const Attacke todeskuss     = { "Todeskuss"    ,normal ,  0, 75,15, 0 ,status };
const Attacke toxin         = { "Toxin"        ,gift   ,  0, 90,10, 0 ,status };
const Attacke risikotackle  = { "Risikotackle" ,normal ,120,100,15, 0 ,physisch };
const Attacke verzweifler   = { "Verzweifler"  ,normal , 50,100, 1, 0 ,physisch };
//KO
const Attacke geofissur     = { "Geofissur"    ,boden  ,  0, 30, 5, 0 ,physisch };
const Attacke guillotine    = { "Guillotine"   ,normal ,  0, 30, 5, 0 ,physisch };
const Attacke hornbohrer    = { "Hornbohrer"   ,normal ,  0, 30, 5, 0 ,physisch };


// recursive
const Attacke doppelkick    = { "Doppelkick"   ,kampf  , 30,100,30, 0 ,physisch };
const Attacke dornkanone    = { "Dornkanone"   ,normal , 20,100,15, 0 ,physisch };
const Attacke duonadel      = { "Duonadel"     ,kaefer , 25,100,20, 0 ,physisch };
const Attacke duplexhieb    = { "Duplexhieb"   ,normal , 15, 85,10, 0 ,physisch };
const Attacke finale        = { "Finale"       ,normal ,200,100, 5, 0 ,physisch };
const Attacke fuchtler      = { "Fuchtler"     ,normal ,120,100,10, 0 ,physisch };
const Attacke furienschlag  = { "Furienschlag" ,normal , 15, 85,20, 0 ,physisch };
const Attacke knochenkeule  = { "Knochenkeule" ,boden  , 50, 90,10, 0 ,physisch };
const Attacke kometenhieb   = { "Kometenhieb"  ,normal , 18, 85,15, 0 ,physisch };
const Attacke kratzfurie    = { "Kratzfurie"   ,normal , 18, 80,15, 0 ,physisch };
const Attacke nadelrakete   = { "Nadelrakete"  ,kaefer , 25, 95,20, 0 ,physisch };
const Attacke stakkato      = { "Stakkato"     ,normal , 15, 85,20, 0 ,physisch };
const Attacke knochenmerang = { "Knochenmerang",boden  ,50 ,90 ,10,0 ,physisch };
// recursive am Ende des Zuges
const Attacke egelsamen     = { "Egelsamen"    ,pflanze,  0, 90,10, 0 ,status };
const Attacke klammer       = { "Klammer"      ,normal , 55,100,30, 0 ,physisch };
const Attacke klammergriff  = { "Klammergriff" ,normal , 15, 85,20, 0 ,physisch };
const Attacke feuerwirbel   = { "Feuerwirbel"  ,feuer  , 35, 85,15, 0 ,spezial };
const Attacke schnapper     = { "Schnapper"    ,wasser , 35,100,35, 0 ,physisch };
const Attacke wickel        = { "Wickel"       ,normal , 15, 90,20, 0 ,physisch };


// 2 - Phase
const Attacke fliegen       = { "Fliegen"      ,flug   , 90, 95,15, 0 ,physisch };
const Attacke geduld        = { "Geduld"       ,normal ,  0,100,10, 0 ,physisch };
const Attacke hyperstrahl   = { "Hyperstrahl"  ,normal ,150, 90, 5, 0 ,spezial };
const Attacke klingensturm  = { "Klingensturm" ,normal , 80, 75,10, 0 ,spezial };
const Attacke solarstrahl   = { "Solarstrahl"  ,pflanze,120,100,10, 0 ,spezial };
const Attacke schaufler     = { "Schaufler"    ,boden  , 80,100,10, 0 ,physisch };
const Attacke himmelsfeger  = { "Himmelsfeger" ,flug   ,140, 90, 5, 0 ,physisch };
const Attacke schaedelwumme = { "Schädelwumme" ,normal ,130,100,10, 0 ,physisch };

// zurückschrecken
const Attacke biss          = { "Biss"         ,unlicht, 60,100,25, 0 ,physisch };
const Attacke fegekick      = { "Fegekick"     ,kampf  , 60, 85,15, 0 ,physisch };
const Attacke kopfnuss      = { "Kopfnuss"     ,normal , 70,100,15, 0 ,physisch };


// Gegner flieht aus dem Kampf
const Attacke brueller      = { "Brüller"      ,normal ,  0,100,20, 0 ,status };
const Attacke teleport      = { "Teleport"     ,psycho ,  0,100,20, 0 ,status };
const Attacke wirbelwind    = { "Wirbelwind"   ,flug   ,  0,  0,20, 0,status };



// Dmg & statuseffektEnemy
const Attacke aurorastrahl  = { "Aurorastrahl" ,eis    , 65,100,25, 0 ,spezial };
const Attacke blizzard      = { "Blizzard"     ,eis    ,110, 70, 5, 0 ,spezial };
const Attacke bodyslam      = { "Bodyslam"     ,normal , 85,100,15, 0 ,physisch };
const Attacke donner        = { "Donner"       ,elektro,110, 70,10, 0 ,spezial };
const Attacke donnerblitz   = { "Donnerblitz"  ,elektro, 90,100,15, 0 ,spezial };
const Attacke donnerschlag  = { "Donnerschlag" ,elektro, 75,100,15, 0 ,physisch };
const Attacke donnerschock  = { "Donnerschock" ,elektro, 40,100,30, 0 ,spezial };
const Attacke eishieb       = { "Eishieb"      ,eis    , 75,100,15, 0 ,physisch };
const Attacke eisstrahl     = { "Eisstrahl"    ,eis    , 90,100,10, 0 ,spezial };
const Attacke feuerschlag   = { "Feuerschlag"  ,feuer  , 75,100,15, 0 ,physisch };
const Attacke feuersturm    = { "Feuersturm"   ,feuer  ,110, 85, 5, 0 ,spezial };
const Attacke flammenwurf   = { "Flaemmenwurf" ,feuer  , 90,100,15, 0 ,spezial };
const Attacke giftstachel   = { "Giftstachel"  ,gift   , 15,100,35, 0 ,physisch };
const Attacke glut          = { "Glut"         ,feuer  , 40,100,25, 0 ,spezial };
const Attacke irrschlag     = { "Irrschlag"    ,normal , 70,100,10, 0 ,physisch };
const Attacke konfusion     = { "Konfusion"    ,psycho , 50,100,25, 0 ,spezial };
const Attacke psychokinese  = { "Psychokinese" ,psycho , 90,100,10, 0 ,spezial };
const Attacke psykraft      = { "Psykraft"     ,psycho ,  0, 80,15, 0 ,status };
const Attacke psystrahl     = { "Psystrahl"    ,psycho , 65,100,20, 0 ,spezial };
const Attacke psywelle      = { "Psywelle"     ,psycho ,  0,100,15, 0 ,spezial };
const Attacke schlammbad    = { "Schlammbad"   ,gift   , 65,100,20, 0 ,spezial };
const Attacke schlecker     = { "Schlecker"    ,geist  , 30,100,30, 0 ,physisch };
const Attacke saeure        = { "Säure"        ,gift   , 40,100,30, 0 ,spezial };
const Attacke smog          = { "Smog"         ,gift   , 30, 70,20, 0 ,spezial };
const Attacke umklammerung  = { "Umklammerung" ,normal , 10,100,35, 0 ,physisch };
const Attacke triplette     = { "Triplette"    ,normal , 80,100,10, 0 ,spezial };



// Spezial
const Attacke delegator     = { "Delegator"    ,normal ,  0,100,10, 0 ,status };
const Attacke drachenwut    = { "Drachenwut"   ,drache ,  0,100,10, 0 ,spezial };
const Attacke fusskick      = { "Fusskick"     ,kampf  ,  0, 90,20, 0 ,physisch };
const Attacke geowurf       = { "Geowurf"      ,kampf  ,  0,100,20, 0 ,physisch };
const Attacke konter        = { "Konter"       ,kampf  ,  0,100,20,-5 ,physisch };
const Attacke metronom      = { "Metronom"     ,normal ,  0,  0,10, 0 ,status };
const Attacke mimikry       = { "Mimikry"      ,normal ,  0,100,10, 0 ,status };
const Attacke nachtnebel    = { "Nachtnebel"   ,geist  ,  0,100,15, 0 ,spezial };
const Attacke raserei       = { "Raserei"      ,normal , 20,100,20, 0 ,physisch };
const Attacke ruckzuckhieb  = { "Ruckzuckhieb" ,normal , 40,100,30, 1 ,physisch };
const Attacke spigeltrick   = { "Spiegeltrick" ,flug   ,  0,100,20, 0 ,status };
const Attacke sternschauer  = { "Stenschauer"  ,normal , 60,  0,20, 0 ,spezial };
const Attacke superzahn     = { "Superzahn"    ,normal ,  0, 90,10, 0 ,physisch };
const Attacke traumfresser  = { "Traumfresser" ,psycho ,100,100,15, 0 ,spezial };
const Attacke turmkick      = { "Turmkick"     ,kampf  ,130, 90,10, 0 ,physisch };
const Attacke ultraschall   = { "Ultraschall"  ,normal ,  0, 90,20, 0 ,spezial };
const Attacke umwandlung    = { "Umwandlung"   ,normal ,  0,100,30, 0 ,status };
const Attacke wandler       = { "Wandler"      ,normal ,  0,100,20, 0 ,status };
const Attacke zahltag       = { "Zahltag"      ,normal , 40,100,20, 0 ,physisch };
