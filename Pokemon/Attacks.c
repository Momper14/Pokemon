#include "Attacks.h"

// Die beste AttackeBasis aller Zeiten
const AttackeBasis Platscher     = { "Platscher"    ,NORMAL ,  0,100,40, 0,PHYSISCH };
// Normaler Angriff
const AttackeBasis Aquaknarre    = { "Aquaknarre"   ,WASSER , 40,100,25, 0,SPEZIAL  };
const AttackeBasis Blaettertanz  = { "Blättertanz"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
const AttackeBasis Blubber       = { "Blubber"      ,WASSER , 40,100,30, 0,SPEZIAL  };
const AttackeBasis Blubbstrahl   = { "Blubbstrahl"  ,WASSER , 65,100,20, 0,SPEZIAL  };
const AttackeBasis Bohrschnabel  = { "Bohrschnabel" ,FLUG   , 80,100,20, 0,PHYSISCH };
const AttackeBasis Eierbombe     = { "Eierbombe"    ,NORMAL ,100, 75,10, 0,PHYSISCH };
const AttackeBasis Erdbeben      = { "Erdbeben"     ,BODEN  ,100,100,10, 0,PHYSISCH };
const AttackeBasis Fluegelschlag = { "Flügelschlag" ,FLUG   , 60,100,35, 0,PHYSISCH };
const AttackeBasis HornAttackeBasis   = { "HornAttackeBasis"  ,NORMAL , 65,100,25, 0,PHYSISCH };
const AttackeBasis Hydropumpe    = { "Hydropumpe"   ,WASSER ,110, 80, 5, 0,SPEZIAL  };
const AttackeBasis Hyperzahn     = { "Hyperzahn"    ,NORMAL , 80, 90,15, 0,PHYSISCH };
const AttackeBasis Hypnose       = { "Hypnose"      ,PSYCHO ,  0, 60,20, 0,STATUS   };
const AttackeBasis Karateschlag  = { "Karateschlag" ,KAMPF  , 50,100,25, 0,PHYSISCH };
const AttackeBasis Kaskade       = { "Kaskade"      ,WASSER , 80,100,15, 0,PHYSISCH };
const AttackeBasis Kratzer       = { "Kratzer"      ,NORMAL , 40,100,35, 0,PHYSISCH };
const AttackeBasis Megahieb      = { "Megahieb"     ,NORMAL , 80, 85,20, 0,PHYSISCH };
const AttackeBasis Megakick      = { "Megakick"     ,NORMAL ,120, 75, 5, 0,PHYSISCH };
const AttackeBasis Pfund         = { "Pfund"        ,NORMAL , 40,100,35, 0,PHYSISCH };
const AttackeBasis Rankenhieb    = { "Rankenhieb"   ,PFLANZE, 45,100,25, 0,PHYSISCH };
const AttackeBasis Rasierblatt   = { "Rasierblatt"  ,PFLANZE, 55, 95,25, 0,PHYSISCH };
const AttackeBasis Schlitzer     = { "Schlitzer"    ,NORMAL , 70,100,20, 0,PHYSISCH };
const AttackeBasis Schnabel      = { "Schnabel"     ,FLUG   , 35,100,35, 0,PHYSISCH };
const AttackeBasis Slam          = { "Slam"         ,NORMAL , 80, 75,20, 0,PHYSISCH };




const AttackeBasis Stampfer      = { "Stampfer"     ,NORMAL , 65,100,20, 0,PHYSISCH };
const AttackeBasis Staerke       = { "Staerke"      ,NORMAL , 80,100,15, 0,PHYSISCH };
const AttackeBasis Steinhagel    = { "Steinhagel"   ,STEIN  , 75, 90,10, 0,PHYSISCH };
const AttackeBasis Steinwurf     = { "Steinwurf"    ,STEIN  , 50, 90,15, 0,PHYSISCH };
const AttackeBasis Surfer        = { "Surfer"       ,WASSER , 90,100,15, 0,SPEZIAL  };
const AttackeBasis Tackle        = { "Tackle"       ,NORMAL , 40,100,35, 0,PHYSISCH };
const AttackeBasis Windstoss     = { "Windstoss"    ,FLUG   , 40,100,35, 0,SPEZIAL  };
const AttackeBasis Zerschneider  = { "Zerschneider" ,NORMAL , 50, 95,30, 0,PHYSISCH };

// Buff
const AttackeBasis Agilitaet     = { "Agilität"     ,PSYCHO ,  0,100,30, 0,STATUS   };
const AttackeBasis Amnesie       = { "Amnesie"      ,PSYCHO ,  0,100,20, 0,STATUS   };
const AttackeBasis Barriere      = { "Barriere"     ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Doppelteam    = { "Doppelteam"   ,NORMAL ,  0,100,15, 0,STATUS   };
const AttackeBasis Einigler      = { "Einigler"     ,NORMAL ,  0,100,40, 0,STATUS   };
const AttackeBasis Energiefokus  = { "Energiefokus" ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Genesung      = { "Genesung"     ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Haertner      = { "Härtner"      ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Krabbhammer   = { "Krabbhammer"  ,WASSER ,100, 90,10, 0,PHYSISCH };
const AttackeBasis Komprimator   = { "Kompirmator"  ,NORMAL ,  0,100,10, 0,STATUS   };
const AttackeBasis Lichtschild   = { "Lichtschild"  ,PSYCHO ,  0,100,30, 0,STATUS   };
const AttackeBasis Meditation    = { "Meditation"   ,PSYCHO ,  0,100,40, 0,STATUS   };
const AttackeBasis Panzerschutz  = { "Panzerschutz" ,WASSER ,  0,100,40, 0,STATUS   };
const AttackeBasis Reflektor     = { "Reflektor"    ,PSYCHO ,  0,100,20, 0,STATUS   };
const AttackeBasis Schaerfer     = { "Schärfer"     ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Schwerttanz   = { "Schwerttanz"  ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Saeurepanzer  = { "Säurepanzer"  ,GIFT   ,  0,100,20, 0,STATUS   };
const AttackeBasis Wachstum      = { "Wachstum"     ,PFLANZE,  0,100,20, 0,STATUS   };
const AttackeBasis Weichei       = { "Weichei"      ,NORMAL ,  0,100,10, 0,STATUS   };
const AttackeBasis Weissnebel    = { "Weissnebel"   ,EIS    ,  0,100,30, 0,STATUS   };

//Debuff
const AttackeBasis Aussetzer     = { "Aussetzer"    ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Blitz         = { "Blitz"        ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Fadenschuss   = { "Fadenschuss"  ,KAEFER ,  0, 95,40, 0,STATUS   };
const AttackeBasis Heuler        = { "Heuler"       ,NORMAL ,  0,100,40, 0,STATUS   };
const AttackeBasis Konfustrahl   = { "Konfustrahl"  ,GEIST  ,  0,100,10, 0,STATUS   };
const AttackeBasis Kreideschrei  = { "Kreideschrei" ,NORMAL ,  0, 85,40, 0,STATUS   };
const AttackeBasis Rauchwolke    = { "Rauchwolke"   ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Rutenschlag   = { "Rutenschlag"  ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Sandwirbel    = { "Sandwirbel"   ,BODEN  ,  0,100,15, 0,STATUS   };
const AttackeBasis Silberblick   = { "Silberblick"  ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Superschall   = { "Superschall"  ,NORMAL ,  0, 55,20, 0,STATUS   };


// Statuseffekt
const AttackeBasis Absorber      = { "Absorber"     ,PFLANZE, 20,100,20, 0,SPEZIAL  };
const AttackeBasis Blutsauger    = { "Blutsauger"   ,KAEFER , 80,100,15, 0,PHYSISCH };
const AttackeBasis Bodycheck     = { "Bodycheck"    ,NORMAL , 90, 85,20, 0,PHYSISCH };
const AttackeBasis Dunkelnebel   = { "Dunkelnebel"  ,EIS    ,  0,100,30, 0,STATUS   };
const AttackeBasis Erholung      = { "Erholung"     ,PSYCHO ,  0,100,10, 0,STATUS   };
const AttackeBasis Explosion     = { "Explosion"    ,NORMAL ,250,100, 5, 0,PHYSISCH };
const AttackeBasis Donnerwelle   = { "Donnerwelle"  ,ELEKTRO,  0, 90,20, 0,STATUS   };
const AttackeBasis Gesang        = { "Gesang"       ,NORMAL ,  0, 55,15, 0,STATUS   };
const AttackeBasis Giftblick     = { "Giftblick"    ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Giftpuder     = { "Giftpuder"    ,GIFT   ,  0, 75,35, 0,STATUS   };
const AttackeBasis Giftwolke     = { "Giftwolkte"   ,GIFT   ,  0, 90,40, 0,STATUS   };
const AttackeBasis Megasauger    = { "Megasauger"   ,PFLANZE, 40,100,10, 0,SPEZIAL  };
const AttackeBasis Pilzspore     = { "Pilzspore"    ,PFLANZE,  0,100,15, 0,STATUS   };
const AttackeBasis Schlafpuder   = { "Schlafpuder"  ,PFLANZE,  0, 75,15, 0,STATUS   };
const AttackeBasis Sprungkick    = { "Sprunkick"    ,KAMPF  ,100, 95,10, 0,PHYSISCH };
const AttackeBasis Stachelspore  = { "Stachelspore" ,PFLANZE,  0, 75,30, 0,STATUS   };
const AttackeBasis Ueberroller   = { "Überroller"   ,KAMPF  , 80, 80,25, 0,PHYSISCH };
const AttackeBasis Todeskuss     = { "Todeskuss"    ,NORMAL ,  0, 75,15, 0,STATUS   };
const AttackeBasis Toxin         = { "Toxin"        ,GIFT   ,  0, 90,10, 0,STATUS   };
const AttackeBasis Risikotackle  = { "Risikotackle" ,NORMAL ,120,100,15, 0,PHYSISCH };
const AttackeBasis Verzweifler   = { "Verzweifler"  ,NORMAL , 50,100, 1, 0,PHYSISCH };
//KO
const AttackeBasis Geofissur     = { "Geofissur"    ,BODEN  ,  0, 30, 5, 0,PHYSISCH };
const AttackeBasis Guillotine    = { "Guillotine"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };
const AttackeBasis Hornbohrer    = { "Hornbohrer"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };


// recursive
const AttackeBasis Doppelkick    = { "Doppelkick"   ,KAMPF  , 30,100,30, 0,PHYSISCH };
const AttackeBasis Dornkanone    = { "Dornkanone"   ,NORMAL , 20,100,15, 0,PHYSISCH };
const AttackeBasis Duonadel      = { "Duonadel"     ,KAEFER , 25,100,20, 0,PHYSISCH };
const AttackeBasis Duplexhieb    = { "Duplexhieb"   ,NORMAL , 15, 85,10, 0,PHYSISCH };
const AttackeBasis Finale        = { "Finale"       ,NORMAL ,200,100, 5, 0,PHYSISCH };
const AttackeBasis Fuchtler      = { "Fuchtler"     ,NORMAL ,120,100,10, 0,PHYSISCH };
const AttackeBasis Furienschlag  = { "Furienschlag" ,NORMAL , 15, 85,20, 0,PHYSISCH };
const AttackeBasis Knochenkeule  = { "Knochenkeule" ,BODEN  , 50, 90,10, 0,PHYSISCH };
const AttackeBasis Kometenhieb   = { "Kometenhieb"  ,NORMAL , 18, 85,15, 0,PHYSISCH };
const AttackeBasis Kratzfurie    = { "Kratzfurie"   ,NORMAL , 18, 80,15, 0,PHYSISCH };
const AttackeBasis Nadelrakete   = { "Nadelrakete"  ,KAEFER , 25, 95,20, 0,PHYSISCH };
const AttackeBasis Stakkato      = { "Stakkato"     ,NORMAL , 15, 85,20, 0,PHYSISCH };
const AttackeBasis Knochmerang   = { "Knochmerang"  ,BODEN  ,50 ,90 ,10,0 ,PHYSISCH };
// recursive am Ende des Zuges
const AttackeBasis Egelsamen     = { "Egelsamen"    ,PFLANZE,  0, 90,10, 0,STATUS   };
const AttackeBasis Klammer       = { "Klammer"      ,NORMAL , 55,100,30, 0,PHYSISCH };
const AttackeBasis Klammergriff  = { "Klammergriff" ,NORMAL , 15, 85,20, 0,PHYSISCH };
const AttackeBasis Feuerwirbel   = { "Feuerwirbel"  ,FEUER  , 35, 85,15, 0,SPEZIAL  };
const AttackeBasis Schnapper     = { "Schnapper"    ,WASSER , 35,100,35, 0,PHYSISCH };
const AttackeBasis Wickel        = { "Wickel"       ,NORMAL , 15, 90,20, 0,PHYSISCH };


// 2 - Phase
const AttackeBasis Fliegen       = { "Fliegen"      ,FLUG   , 90, 95,15, 0,PHYSISCH };
const AttackeBasis Geduld        = { "Geduld"       ,NORMAL ,  0,100,10, 0,PHYSISCH };
const AttackeBasis Hyperstrahl   = { "Hyperstrahl"  ,NORMAL ,150, 90, 5, 0,SPEZIAL  };
const AttackeBasis Klingensturm  = { "Klingensturm" ,NORMAL , 80, 75,10, 0,SPEZIAL  };
const AttackeBasis Solarstrahl   = { "Solarstrahl"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
const AttackeBasis Schaufler     = { "Schaufler"    ,BODEN  , 80,100,10, 0,PHYSISCH };
const AttackeBasis Himmelsfeger  = { "Himmelsfeger" ,FLUG   ,140, 90, 5, 0,PHYSISCH };
const AttackeBasis Schaedelwumme = { "Schädelwumme" ,NORMAL ,130,100,10, 0,PHYSISCH };

// zurückschrecken
const AttackeBasis Biss          = { "Biss"         ,UNLICHT, 60,100,25, 0,PHYSISCH };
const AttackeBasis Fegekick      = { "Fegekick"     ,KAMPF  , 60, 85,15, 0,PHYSISCH };
const AttackeBasis Kopfnuss      = { "Kopfnuss"     ,NORMAL , 70,100,15, 0,PHYSISCH };


// Gegner flieht aus dem Kampf
const AttackeBasis Brueller      = { "Brüller"      ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Teleport      = { "Teleport"     ,PSYCHO ,  0,100,20, 0,STATUS   };
const AttackeBasis Wirbelwind    = { "Wirbelwind"   ,FLUG   ,  0,  0,20, 0,STATUS   };



// Dmg & StatuseffektEnemy
const AttackeBasis Aurorastrahl  = { "Aurorastrahl" ,EIS    , 65,100,25, 0,SPEZIAL  };
const AttackeBasis Blizzard      = { "Blizzard"     ,EIS    ,110, 70, 5, 0,SPEZIAL  };
const AttackeBasis Bodyslam      = { "Bodyslam"     ,NORMAL , 85,100,15, 0,PHYSISCH };
const AttackeBasis Donner        = { "Donner"       ,ELEKTRO,110, 70,10, 0,SPEZIAL  };
const AttackeBasis Donnerblitz   = { "Donnerblitz"  ,ELEKTRO, 90,100,15, 0,SPEZIAL  };
const AttackeBasis Donnerschlag  = { "Donnerschlag" ,ELEKTRO, 75,100,15, 0,PHYSISCH };
const AttackeBasis Donnerschock  = { "Donnerschock" ,ELEKTRO, 40,100,30, 0,SPEZIAL  };
const AttackeBasis Eishieb       = { "Eishieb"      ,EIS    , 75,100,15, 0,PHYSISCH };
const AttackeBasis Eisstrahl     = { "Eisstrahl"    ,EIS    , 90,100,10, 0,SPEZIAL  };
const AttackeBasis Feuerschlag   = { "Feuerschlag"  ,FEUER  , 75,100,15, 0,PHYSISCH };
const AttackeBasis Feuersturm    = { "Feuersturm"   ,FEUER  ,110, 85, 5, 0,SPEZIAL  };
const AttackeBasis Flammenwurf   = { "Flaemmenwurf" ,FEUER  , 90,100,15, 0,SPEZIAL  };
const AttackeBasis Giftstachel   = { "Giftstachel"  ,GIFT   , 15,100,35, 0,PHYSISCH };
const AttackeBasis Glut          = { "Glut"         ,FEUER  , 40,100,25, 0,SPEZIAL  };
const AttackeBasis Irrschlag     = { "Irrschlag"    ,NORMAL , 70,100,10, 0,PHYSISCH };
const AttackeBasis Konfusion     = { "Konfusion"    ,PSYCHO , 50,100,25, 0,SPEZIAL  };
const AttackeBasis Psychokinese  = { "Psychokinese" ,PSYCHO , 90,100,10, 0,SPEZIAL  };
const AttackeBasis Psykraft      = { "Psykraft"     ,PSYCHO ,  0, 80,15, 0,STATUS   };
const AttackeBasis Psystrahl     = { "Psystrahl"    ,PSYCHO , 65,100,20, 0,SPEZIAL  };
const AttackeBasis Psywelle      = { "Psywelle"     ,PSYCHO ,  0,100,15, 0,SPEZIAL  };
const AttackeBasis Schlammbad    = { "Schlammbad"   ,GIFT   , 65,100,20, 0,SPEZIAL  };
const AttackeBasis Schlecker     = { "Schlecker"    ,GEIST  , 30,100,30, 0,PHYSISCH };
const AttackeBasis Saeure        = { "Säure"        ,GIFT   , 40,100,30, 0,SPEZIAL  };
const AttackeBasis Smog          = { "Smog"         ,GIFT   , 30, 70,20, 0,SPEZIAL  };
const AttackeBasis Umklammerung  = { "Umklammerung" ,NORMAL , 10,100,35, 0,PHYSISCH };
const AttackeBasis Triplette     = { "Triplette"    ,NORMAL , 80,100,10, 0,SPEZIAL  };



// Spezial
const AttackeBasis Delegator     = { "Delegator"    ,NORMAL ,  0,100,10, 0,STATUS   };
const AttackeBasis Drachenwut    = { "Drachenwut"   ,DRACHE ,  0,100,10, 0,SPEZIAL  };
const AttackeBasis Fusskick      = { "Fusskick"     ,KAMPF  ,  0, 90,20, 0,PHYSISCH };
const AttackeBasis Geowurf       = { "Geowurf"      ,KAMPF  ,  0,100,20, 0,PHYSISCH };
const AttackeBasis Konter        = { "Konter"       ,KAMPF  ,  0,100,20,-5,PHYSISCH };
const AttackeBasis Metronom      = { "Metronom"     ,NORMAL ,  0,  0,10, 0,STATUS   };
const AttackeBasis Mimikry       = { "Mimikry"      ,NORMAL ,  0,100,10, 0,STATUS   };
const AttackeBasis Nachtnebel    = { "Nachtnebel"   ,GEIST  ,  0,100,15, 0,SPEZIAL  };
const AttackeBasis Raserei       = { "Raserei"      ,NORMAL , 20,100,20, 0,PHYSISCH };
const AttackeBasis Ruckzuckhieb  = { "Ruckzuckhieb" ,NORMAL , 40,100,30, 1,PHYSISCH };
const AttackeBasis Spiegeltrick  = { "Spiegeltrick" ,FLUG   ,  0,100,20, 0,STATUS   };
const AttackeBasis Sternschauer  = { "Stenschauer"  ,NORMAL , 60,  0,20, 0,SPEZIAL  };
const AttackeBasis Superzahn     = { "Superzahn"    ,NORMAL ,  0, 90,10, 0,PHYSISCH };
const AttackeBasis Traumfresser  = { "Traumfresser" ,PSYCHO ,100,100,15, 0,SPEZIAL  };
const AttackeBasis Turmkick      = { "Turmkick"     ,KAMPF  ,130, 90,10, 0,PHYSISCH };
const AttackeBasis Ultraschall   = { "Ultraschall"  ,NORMAL ,  0, 90,20, 0,SPEZIAL  };
const AttackeBasis Umwandlung    = { "Umwandlung"   ,NORMAL ,  0,100,30, 0,STATUS   };
const AttackeBasis Wandler       = { "Wandler"      ,NORMAL ,  0,100,20, 0,STATUS   };
const AttackeBasis Zahltag       = { "Zahltag"      ,NORMAL , 40,100,20, 0,PHYSISCH };

extern const AttackeBasis *AttackDex[166] = {
	NULL,			//0
	&Pfund,			
	&Karateschlag,
	&Duplexhieb,
	&Kometenhieb,
	&Megahieb,
	&Zahltag,
	&Feuerschlag,
	&Eishieb,
	&Donnerschlag,
	&Kratzer,
	&Klammer,
	&Guillotine,
	&Klingensturm,
	&Schwerttanz,
	&Zerschneider,
	&Windstoss,
	&Fluegelschlag,
	&Wirbelwind,
	&Fliegen,
	&Klammergriff,
	&Slam,
	&Rankenhieb,
	&Stampfer,
	&Doppelkick,
	&Megakick,
	&Sprungkick,
	&Fegekick,
	&Sandwirbel,
	&Kopfnuss,
	&HornAttackeBasis,
	&Furienschlag,
	&Hornbohrer,
	&Tackle,
	&Bodyslam,
	&Wickel,
	&Bodycheck,
	&Fuchtler,
	&Risikotackle,
	&Rutenschlag,
	&Giftstachel,
	&Duonadel,
	&Nadelrakete,
	&Silberblick,
	&Biss,
	&Heuler,
	&Brueller,
	&Gesang,
	&Superschall,
	&Ultraschall,
	&Aussetzer,
	&Saeure,
	&Glut,
	&Flammenwurf,
	&Weissnebel,
	&Aquaknarre,
	&Hydropumpe,
	&Surfer,
	&Eisstrahl,
	&Blizzard,
	&Psystrahl,
	&Blubbstrahl,
	&Aurorastrahl,
	&Hyperstrahl,
	&Schnabel,
	&Bohrschnabel,
	&Ueberroller,
	&Fusskick,
	&Konter,
	&Geowurf,
	&Staerke,
	&Absorber,
	&Megasauger,
	&Egelsamen,
	&Wachstum,
	&Rasierblatt,
	&Solarstrahl,
	&Giftpuder,
	&Stachelspore,
	&Schlafpuder,
	&Blaettertanz,
	&Fadenschuss,
	&Drachenwut,
	&Feuerwirbel,
	&Donnerschock,
	&Donnerblitz,
	&Donnerwelle,
	&Donner,
	&Steinwurf,
	&Erdbeben,
	&Geofissur,
	&Schaufler,
	&Toxin,
	&Konfusion,
	&Psychokinese,
	&Hypnose,
	&Meditation,
	&Agilitaet,
	&Ruckzuckhieb,
	&Raserei,
	&Teleport,
	&Nachtnebel,
	&Mimikry,
	&Kreideschrei,
	&Doppelteam,
	&Genesung,
	&Haertner,
	&Komprimator,
	&Rauchwolke,
	&Konfustrahl,
	&Panzerschutz,
	&Einigler,
	&Barriere,
	&Lichtschild,
	&Dunkelnebel,
	&Reflektor,
	&Energiefokus,
	&Geduld,
	&Metronom,
	&Spiegeltrick,
	&Finale,
	&Eierbombe,
	&Schlecker,
	&Smog,
	&Schlammbad,
	&Knochenkeule,
	&Feuersturm,
	&Kaskade,
	&Schnapper,
	&Sternschauer,
	&Schaedelwumme,
	&Dornkanone,
	&Umklammerung,
	&Amnesie,
	&Psykraft,
	&Weichei,
	&Turmkick,
	&Giftblick,
	&Traumfresser,
	&Giftwolke,
	&Stakkato,
	&Blutsauger,
	&Todeskuss,
	&Himmelsfeger,
	&Wandler,
	&Blubber,
	&Irrschlag,
	&Pilzspore,
	&Blitz,
	&Psywelle,
	&Platscher,
	&Saeurepanzer,
	&Krabbhammer,
	&Explosion,
	&Kratzfurie,
	&Knochmerang,
	&Erholung,
	&Steinhagel,
	&Hyperzahn,
	&Schaerfer,
	&Umwandlung,
	&Triplette,
	&Superzahn,
	&Schlitzer,
	&Delegator,
	&Verzweifler
};

