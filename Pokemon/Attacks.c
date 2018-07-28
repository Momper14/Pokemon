#include "attacks.h"

// Die beste Attacke aller Zeiten
const Attacke Platscher     = { "Platscher"    ,NORMAL ,  0,100,40, 0,PHYSISCH };
// Normaler Angriff
const Attacke Aquaknarre    = { "Aquaknarre"   ,WASSER , 40,100,25, 0,SPEZIAL  };
const Attacke Blaettertanz  = { "Blättertanz"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
const Attacke Blubber       = { "Blubber"      ,WASSER , 40,100,30, 0,SPEZIAL  };
const Attacke Blubbstrahl   = { "Blubbstrahl"  ,WASSER , 65,100,20, 0,SPEZIAL  };
const Attacke Bohrschnabel  = { "Bohrschnabel" ,FLUG   , 80,100,20, 0,PHYSISCH };
const Attacke Eierbombe     = { "Eierbombe"    ,NORMAL ,100, 75,10, 0,PHYSISCH };
const Attacke Erdbeben      = { "Erdbeben"     ,BODEN  ,100,100,10, 0,PHYSISCH };
const Attacke Fluegelschlag = { "Flügelschlag" ,FLUG   , 60,100,35, 0,PHYSISCH };
const Attacke Hornattacke   = { "Hornattacke"  ,NORMAL , 65,100,25, 0,PHYSISCH };
const Attacke Hydropumpe    = { "Hydropumpe"   ,WASSER ,110, 80, 5, 0,SPEZIAL  };
const Attacke Hyperzahn     = { "Hyperzahn"    ,NORMAL , 80, 90,15, 0,PHYSISCH };
const Attacke Hypnose       = { "Hypnose"      ,PSYCHO ,  0, 60,20, 0,STATUS   };
const Attacke Karateschlag  = { "Karateschlag" ,KAMPF  , 50,100,25, 0,PHYSISCH };
const Attacke Kaskade       = { "Kaskade"      ,WASSER , 80,100,15, 0,PHYSISCH };
const Attacke Kratzer       = { "Kratzer"      ,NORMAL , 40,100,35, 0,PHYSISCH };
const Attacke Megahieb      = { "Megahieb"     ,NORMAL , 80, 85,20, 0,PHYSISCH };
const Attacke Megakick      = { "Megakick"     ,NORMAL ,120, 75, 5, 0,PHYSISCH };
const Attacke Pfund         = { "Pfund"        ,NORMAL , 40,100,35, 0,PHYSISCH };
const Attacke Rankenhieb    = { "Rankenhieb"   ,PFLANZE, 45,100,25, 0,PHYSISCH };
const Attacke Rasierblatt   = { "Rasierblatt"  ,PFLANZE, 55, 95,25, 0,PHYSISCH };
const Attacke Schlitzer     = { "Schlitzer"    ,NORMAL , 70,100,20, 0,PHYSISCH };
const Attacke Schnabel      = { "Schnabel"     ,FLUG   , 35,100,35, 0,PHYSISCH };
const Attacke Slam          = { "Slam"         ,NORMAL , 80, 75,20, 0,PHYSISCH };
const Attacke Stampfer      = { "Stampfer"     ,NORMAL , 65,100,20, 0,PHYSISCH };
const Attacke Staerke       = { "Staerke"      ,NORMAL , 80,100,15, 0,PHYSISCH };
const Attacke Steinhagel    = { "Steinhagel"   ,STEIN  , 75, 90,10, 0,PHYSISCH };
const Attacke Steinwurf     = { "Steinwurf"    ,STEIN  , 50, 90,15, 0,PHYSISCH };
const Attacke Surfer        = { "Surfer"       ,WASSER , 90,100,15, 0,SPEZIAL  };
const Attacke Tackle        = { "Tackle"       ,NORMAL , 40,100,35, 0,PHYSISCH };
const Attacke Windstoss     = { "Windstoss"    ,FLUG   , 40,100,35, 0,SPEZIAL  };
const Attacke Zerschneider  = { "Zerschneider" ,NORMAL , 50, 95,30, 0,PHYSISCH };

// Buff
const Attacke Agilitaet     = { "Agilität"     ,PSYCHO ,  0,100,30, 0,STATUS   };
const Attacke Amnesie       = { "Amnesie"      ,PSYCHO ,  0,100,20, 0,STATUS   };
const Attacke Barriere      = { "Barriere"     ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Doppelteam    = { "Doppelteam"   ,NORMAL ,  0,100,15, 0,STATUS   };
const Attacke Einigler      = { "Einigler"     ,NORMAL ,  0,100,40, 0,STATUS   };
const Attacke Energiefokus  = { "Energiefokus" ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Genesung      = { "Genesung"     ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Haertner      = { "Härtner"      ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Krabbhammer   = { "Krabbhammer"  ,WASSER ,100, 90,10, 0,PHYSISCH };
const Attacke Komprimator   = { "Kompirmator"  ,NORMAL ,  0,100,10, 0,STATUS   };
const Attacke Lichtschild   = { "Lichtschild"  ,PSYCHO ,  0,100,30, 0,STATUS   };
const Attacke Meditation    = { "Meditation"   ,PSYCHO ,  0,100,40, 0,STATUS   };
const Attacke Panzerschutz  = { "Panzerschutz" ,WASSER ,  0,100,40, 0,STATUS   };
const Attacke Reflektor     = { "Reflektor"    ,PSYCHO ,  0,100,20, 0,STATUS   };
const Attacke Schaerfer     = { "Schärfer"     ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Schwerttanz   = { "Schwerttanz"  ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Saeurepanzer  = { "Säurepanzer"  ,GIFT   ,  0,100,20, 0,STATUS   };
const Attacke Wachstum      = { "Wachstum"     ,PFLANZE,  0,100,20, 0,STATUS   };
const Attacke Weichei       = { "Weichei"      ,NORMAL ,  0,100,10, 0,STATUS   };
const Attacke Weissnebel    = { "Weissnebel"   ,EIS    ,  0,100,30, 0,STATUS   };

//Debuff
const Attacke Aussetzer     = { "Aussetzer"    ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Blitz         = { "Blitz"        ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Fadenschuss   = { "Fadenschuss"  ,KAEFER ,  0, 95,40, 0,STATUS   };
const Attacke Heuler        = { "Heuler"       ,NORMAL ,  0,100,40, 0,STATUS   };
const Attacke Konfustrahl   = { "Konfustrahl"  ,GEIST  ,  0,100,10, 0,STATUS   };
const Attacke Kreideschrei  = { "Kreideschrei" ,NORMAL ,  0, 85,40, 0,STATUS   };
const Attacke Rauchwolke    = { "Rauchwolke"   ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Rutenschlag   = { "Rutenschlag"  ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Sandwirbel    = { "Sandwirbel"   ,BODEN  ,  0,100,15, 0,STATUS   };
const Attacke Silberblick   = { "Silberblick"  ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Superschall   = { "Superschall"  ,NORMAL ,  0, 55,20, 0,STATUS   };


// Statuseffekt
const Attacke Absorber      = { "Absorber"     ,PFLANZE, 20,100,20, 0,SPEZIAL  };
const Attacke Blutsauger    = { "Blutsauger"   ,KAEFER , 80,100,15, 0,PHYSISCH };
const Attacke Bodycheck     = { "Bodycheck"    ,NORMAL , 90, 85,20, 0,PHYSISCH };
const Attacke Dunkelnebel   = { "Dunkelnebel"  ,EIS    ,  0,100,30, 0,STATUS   };
const Attacke Erholung      = { "Erholung"     ,PSYCHO ,  0,100,10, 0,STATUS   };
const Attacke Explosion     = { "Explosion"    ,NORMAL ,250,100, 5, 0,PHYSISCH };
const Attacke Donnerwelle   = { "Donnerwelle"  ,ELEKTRO,  0, 90,20, 0,STATUS   };
const Attacke Gesang        = { "Gesang"       ,NORMAL ,  0, 55,15, 0,STATUS   };
const Attacke Giftblick     = { "Giftblick"    ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Giftpuder     = { "Giftpuder"    ,GIFT   ,  0, 75,35, 0,STATUS   };
const Attacke Giftwolke     = { "Giftwolkte"   ,GIFT   ,  0, 90,40, 0,STATUS   };
const Attacke Megasauger    = { "Megasauger"   ,PFLANZE, 40,100,10, 0,SPEZIAL  };
const Attacke Pilzspore     = { "Pilzspore"    ,PFLANZE,  0,100,15, 0,STATUS   };
const Attacke Schlafpuder   = { "Schlafpuder"  ,PFLANZE,  0, 75,15, 0,STATUS   };
const Attacke Sprungkick    = { "Sprunkick"    ,KAMPF  ,100, 95,10, 0,PHYSISCH };
const Attacke Stachelspore  = { "Stachelspore" ,PFLANZE,  0, 75,30, 0,STATUS   };
const Attacke Ueberroller   = { "Überroller"   ,KAMPF  , 80, 80,25, 0,PHYSISCH };
const Attacke Todeskuss     = { "Todeskuss"    ,NORMAL ,  0, 75,15, 0,STATUS   };
const Attacke Toxin         = { "Toxin"        ,GIFT   ,  0, 90,10, 0,STATUS   };
const Attacke Risikotackle  = { "Risikotackle" ,NORMAL ,120,100,15, 0,PHYSISCH };
const Attacke Verzweifler   = { "Verzweifler"  ,NORMAL , 50,100, 1, 0,PHYSISCH };
//KO
const Attacke Geofissur     = { "Geofissur"    ,BODEN  ,  0, 30, 5, 0,PHYSISCH };
const Attacke Guillotine    = { "Guillotine"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };
const Attacke Hornbohrer    = { "Hornbohrer"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };


// recursive
const Attacke Doppelkick    = { "Doppelkick"   ,KAMPF  , 30,100,30, 0,PHYSISCH };
const Attacke Dornkanone    = { "Dornkanone"   ,NORMAL , 20,100,15, 0,PHYSISCH };
const Attacke Duonadel      = { "Duonadel"     ,KAEFER , 25,100,20, 0,PHYSISCH };
const Attacke Duplexhieb    = { "Duplexhieb"   ,NORMAL , 15, 85,10, 0,PHYSISCH };
const Attacke Finale        = { "Finale"       ,NORMAL ,200,100, 5, 0,PHYSISCH };
const Attacke Fuchtler      = { "Fuchtler"     ,NORMAL ,120,100,10, 0,PHYSISCH };
const Attacke Furienschlag  = { "Furienschlag" ,NORMAL , 15, 85,20, 0,PHYSISCH };
const Attacke Knochenkeule  = { "Knochenkeule" ,BODEN  , 50, 90,10, 0,PHYSISCH };
const Attacke Kometenhieb   = { "Kometenhieb"  ,NORMAL , 18, 85,15, 0,PHYSISCH };
const Attacke Kratzfurie    = { "Kratzfurie"   ,NORMAL , 18, 80,15, 0,PHYSISCH };
const Attacke Nadelrakete   = { "Nadelrakete"  ,KAEFER , 25, 95,20, 0,PHYSISCH };
const Attacke Stakkato      = { "Stakkato"     ,NORMAL , 15, 85,20, 0,PHYSISCH };
const Attacke Knochmerang   = { "Knochmerang"  ,BODEN  ,50 ,90 ,10,0 ,PHYSISCH };
// recursive am Ende des Zuges
const Attacke Egelsamen     = { "Egelsamen"    ,PFLANZE,  0, 90,10, 0,STATUS   };
const Attacke Klammer       = { "Klammer"      ,NORMAL , 55,100,30, 0,PHYSISCH };
const Attacke Klammergriff  = { "Klammergriff" ,NORMAL , 15, 85,20, 0,PHYSISCH };
const Attacke Feuerwirbel   = { "Feuerwirbel"  ,FEUER  , 35, 85,15, 0,SPEZIAL  };
const Attacke Schnapper     = { "Schnapper"    ,WASSER , 35,100,35, 0,PHYSISCH };
const Attacke Wickel        = { "Wickel"       ,NORMAL , 15, 90,20, 0,PHYSISCH };


// 2 - Phase
const Attacke Fliegen       = { "Fliegen"      ,FLUG   , 90, 95,15, 0,PHYSISCH };
const Attacke Geduld        = { "Geduld"       ,NORMAL ,  0,100,10, 0,PHYSISCH };
const Attacke Hyperstrahl   = { "Hyperstrahl"  ,NORMAL ,150, 90, 5, 0,SPEZIAL  };
const Attacke Klingensturm  = { "Klingensturm" ,NORMAL , 80, 75,10, 0,SPEZIAL  };
const Attacke Solarstrahl   = { "Solarstrahl"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
const Attacke Schaufler     = { "Schaufler"    ,BODEN  , 80,100,10, 0,PHYSISCH };
const Attacke Himmelsfeger  = { "Himmelsfeger" ,FLUG   ,140, 90, 5, 0,PHYSISCH };
const Attacke Schaedelwumme = { "Schädelwumme" ,NORMAL ,130,100,10, 0,PHYSISCH };

// zurückschrecken
const Attacke Biss          = { "Biss"         ,UNLICHT, 60,100,25, 0,PHYSISCH };
const Attacke Fegekick      = { "Fegekick"     ,KAMPF  , 60, 85,15, 0,PHYSISCH };
const Attacke Kopfnuss      = { "Kopfnuss"     ,NORMAL , 70,100,15, 0,PHYSISCH };


// Gegner flieht aus dem Kampf
const Attacke Brueller      = { "Brüller"      ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Teleport      = { "Teleport"     ,PSYCHO ,  0,100,20, 0,STATUS   };
const Attacke Wirbelwind    = { "Wirbelwind"   ,FLUG   ,  0,  0,20, 0,STATUS   };



// Dmg & StatuseffektEnemy
const Attacke Aurorastrahl  = { "Aurorastrahl" ,EIS    , 65,100,25, 0,SPEZIAL  };
const Attacke Blizzard      = { "Blizzard"     ,EIS    ,110, 70, 5, 0,SPEZIAL  };
const Attacke Bodyslam      = { "Bodyslam"     ,NORMAL , 85,100,15, 0,PHYSISCH };
const Attacke Donner        = { "Donner"       ,ELEKTRO,110, 70,10, 0,SPEZIAL  };
const Attacke Donnerblitz   = { "Donnerblitz"  ,ELEKTRO, 90,100,15, 0,SPEZIAL  };
const Attacke Donnerschlag  = { "Donnerschlag" ,ELEKTRO, 75,100,15, 0,PHYSISCH };
const Attacke Donnerschock  = { "Donnerschock" ,ELEKTRO, 40,100,30, 0,SPEZIAL  };
const Attacke Eishieb       = { "Eishieb"      ,EIS    , 75,100,15, 0,PHYSISCH };
const Attacke Eisstrahl     = { "Eisstrahl"    ,EIS    , 90,100,10, 0,SPEZIAL  };
const Attacke Feuerschlag   = { "Feuerschlag"  ,FEUER  , 75,100,15, 0,PHYSISCH };
const Attacke Feuersturm    = { "Feuersturm"   ,FEUER  ,110, 85, 5, 0,SPEZIAL  };
const Attacke Flammenwurf   = { "Flaemmenwurf" ,FEUER  , 90,100,15, 0,SPEZIAL  };
const Attacke Giftstachel   = { "Giftstachel"  ,GIFT   , 15,100,35, 0,PHYSISCH };
const Attacke Glut          = { "Glut"         ,FEUER  , 40,100,25, 0,SPEZIAL  };
const Attacke Irrschlag     = { "Irrschlag"    ,NORMAL , 70,100,10, 0,PHYSISCH };
const Attacke Konfusion     = { "Konfusion"    ,PSYCHO , 50,100,25, 0,SPEZIAL  };
const Attacke Psychokinese  = { "Psychokinese" ,PSYCHO , 90,100,10, 0,SPEZIAL  };
const Attacke Psykraft      = { "Psykraft"     ,PSYCHO ,  0, 80,15, 0,STATUS   };
const Attacke Psystrahl     = { "Psystrahl"    ,PSYCHO , 65,100,20, 0,SPEZIAL  };
const Attacke Psywelle      = { "Psywelle"     ,PSYCHO ,  0,100,15, 0,SPEZIAL  };
const Attacke Schlammbad    = { "Schlammbad"   ,GIFT   , 65,100,20, 0,SPEZIAL  };
const Attacke Schlecker     = { "Schlecker"    ,GEIST  , 30,100,30, 0,PHYSISCH };
const Attacke Saeure        = { "Säure"        ,GIFT   , 40,100,30, 0,SPEZIAL  };
const Attacke Smog          = { "Smog"         ,GIFT   , 30, 70,20, 0,SPEZIAL  };
const Attacke Umklammerung  = { "Umklammerung" ,NORMAL , 10,100,35, 0,PHYSISCH };
const Attacke Triplette     = { "Triplette"    ,NORMAL , 80,100,10, 0,SPEZIAL  };



// Spezial
const Attacke Delegator     = { "Delegator"    ,NORMAL ,  0,100,10, 0,STATUS   };
const Attacke Drachenwut    = { "Drachenwut"   ,DRACHE ,  0,100,10, 0,SPEZIAL  };
const Attacke Fusskick      = { "Fusskick"     ,KAMPF  ,  0, 90,20, 0,PHYSISCH };
const Attacke Geowurf       = { "Geowurf"      ,KAMPF  ,  0,100,20, 0,PHYSISCH };
const Attacke Konter        = { "Konter"       ,KAMPF  ,  0,100,20,-5,PHYSISCH };
const Attacke Metronom      = { "Metronom"     ,NORMAL ,  0,  0,10, 0,STATUS   };
const Attacke Mimikry       = { "Mimikry"      ,NORMAL ,  0,100,10, 0,STATUS   };
const Attacke Nachtnebel    = { "Nachtnebel"   ,GEIST  ,  0,100,15, 0,SPEZIAL  };
const Attacke Raserei       = { "Raserei"      ,NORMAL , 20,100,20, 0,PHYSISCH };
const Attacke Ruckzuckhieb  = { "Ruckzuckhieb" ,NORMAL , 40,100,30, 1,PHYSISCH };
const Attacke Spiegeltrick  = { "Spiegeltrick" ,FLUG   ,  0,100,20, 0,STATUS   };
const Attacke Sternschauer  = { "Stenschauer"  ,NORMAL , 60,  0,20, 0,SPEZIAL  };
const Attacke Superzahn     = { "Superzahn"    ,NORMAL ,  0, 90,10, 0,PHYSISCH };
const Attacke Traumfresser  = { "Traumfresser" ,PSYCHO ,100,100,15, 0,SPEZIAL  };
const Attacke Turmkick      = { "Turmkick"     ,KAMPF  ,130, 90,10, 0,PHYSISCH };
const Attacke Ultraschall   = { "Ultraschall"  ,NORMAL ,  0, 90,20, 0,SPEZIAL  };
const Attacke Umwandlung    = { "Umwandlung"   ,NORMAL ,  0,100,30, 0,STATUS   };
const Attacke Wandler       = { "Wandler"      ,NORMAL ,  0,100,20, 0,STATUS   };
const Attacke Zahltag       = { "Zahltag"      ,NORMAL , 40,100,20, 0,PHYSISCH };

extern const Attacke *AttackDex[166] = {
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
	&Hornattacke,
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

