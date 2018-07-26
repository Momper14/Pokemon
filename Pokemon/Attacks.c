#include "attacks.h"

// Die beste Attacke aller Zeiten
extern const Attacke platscher     = { "Platscher"    ,NORMAL ,  0,100,40, 0,PHYSISCH };
// Normaler Angriff
extern const Attacke aquaknarre    = { "Aquaknarre"   ,WASSER , 40,100,25, 0,SPEZIAL  };
extern const Attacke blaettertanz  = { "Blättertanz"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
extern const Attacke blubber       = { "Blubber"      ,WASSER , 40,100,30, 0,SPEZIAL  };
extern const Attacke blubbstrahl   = { "Blubbstrahl"  ,WASSER , 65,100,20, 0,SPEZIAL  };
extern const Attacke bohrschnabel  = { "Bohrschnabel" ,FLUG   , 80,100,20, 0,PHYSISCH };
extern const Attacke eierbombe     = { "Eierbombe"    ,NORMAL ,100, 75,10, 0,PHYSISCH };
extern const Attacke erdbeben      = { "Erdbeben"     ,BODEN  ,100,100,10, 0,PHYSISCH };
extern const Attacke fluegelschlag = { "Flügelschlag" ,FLUG   , 60,100,35, 0,PHYSISCH };
extern const Attacke hornattacke   = { "Hornattacke"  ,NORMAL , 65,100,25, 0,PHYSISCH };
extern const Attacke hydropumpe    = { "Hydropumpe"   ,WASSER ,110, 80, 5, 0,SPEZIAL  };
extern const Attacke hyperzahn     = { "Hyperzahn"    ,NORMAL , 80, 90,15, 0,PHYSISCH };
extern const Attacke hypnose       = { "Hypnose"      ,PSYCHO ,  0, 60,20, 0,STATUS   };
extern const Attacke karateschlag  = { "Karateschlag" ,KAMPF  , 50,100,25, 0,PHYSISCH };
extern const Attacke kaskade       = { "Kaskade"      ,WASSER , 80,100,15, 0,PHYSISCH };
extern const Attacke kratzer       = { "Kratzer"      ,NORMAL , 40,100,35, 0,PHYSISCH };
extern const Attacke megahieb      = { "Megahieb"     ,NORMAL , 80, 85,20, 0,PHYSISCH };
extern const Attacke megakick      = { "Megakick"     ,NORMAL ,120, 75, 5, 0,PHYSISCH };
extern const Attacke pfund         = { "Pfund"        ,NORMAL , 40,100,35, 0,PHYSISCH };
extern const Attacke rankenhieb    = { "Rankenhieb"   ,PFLANZE, 45,100,25, 0,PHYSISCH };
extern const Attacke rasierblatt   = { "Rasierblatt"  ,PFLANZE, 55, 95,25, 0,PHYSISCH };
extern const Attacke schlitzer     = { "Schlitzer"    ,NORMAL , 70,100,20, 0,PHYSISCH };
extern const Attacke schnabel      = { "Schnabel"     ,FLUG   , 35,100,35, 0,PHYSISCH };
extern const Attacke slam          = { "Slam"         ,NORMAL , 80, 75,20, 0,PHYSISCH };
extern const Attacke stampfer      = { "Stampfer"     ,NORMAL , 65,100,20, 0,PHYSISCH };
extern const Attacke staerke       = { "Staerke"      ,NORMAL , 80,100,15, 0,PHYSISCH };
extern const Attacke steinhagel    = { "Steinhagel"   ,STEIN  , 75, 90,10, 0,PHYSISCH };
extern const Attacke steinwurf     = { "Steinwurf"    ,STEIN  , 50, 90,15, 0,PHYSISCH };
extern const Attacke surfer        = { "Surfer"       ,WASSER , 90,100,15, 0,SPEZIAL  };
extern const Attacke tackle        = { "Tackle"       ,NORMAL , 40,100,35, 0,PHYSISCH };
extern const Attacke windstoss     = { "Windstoss"    ,FLUG   , 40,100,35, 0,SPEZIAL  };
extern const Attacke zerschneider  = { "Zerschneider" ,NORMAL , 50, 95,30, 0,PHYSISCH };

// Buff
extern const Attacke agilitaet     = { "Agilität"     ,PSYCHO ,  0,100,30, 0,STATUS   };
extern const Attacke amnesie       = { "Amnesie"      ,PSYCHO ,  0,100,20, 0,STATUS   };
extern const Attacke barriere      = { "Barriere"     ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke doppelteam    = { "Doppelteam"   ,NORMAL ,  0,100,15, 0,STATUS   };
extern const Attacke einigler      = { "Einigler"     ,NORMAL ,  0,100,40, 0,STATUS   };
extern const Attacke energiefokus  = { "Energiefokus" ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke genesung      = { "Genesung"     ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke haertner      = { "Härtner"      ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke krabbhammer   = { "Krabbhammer"  ,WASSER ,100, 90,10, 0,PHYSISCH };
extern const Attacke komprimator   = { "Kompirmator"  ,NORMAL ,  0,100,10, 0,STATUS   };
extern const Attacke lichtschild   = { "Lichtschild"  ,PSYCHO ,  0,100,30, 0,STATUS   };
extern const Attacke meditaion     = { "Meditation"   ,PSYCHO ,  0,100,40, 0,STATUS   };
extern const Attacke panzerschutz  = { "Panzerschutz" ,WASSER ,  0,100,40, 0,STATUS   };
extern const Attacke reflektor     = { "Reflektor"    ,PSYCHO ,  0,100,20, 0,STATUS   };
extern const Attacke schaerfer     = { "Schärfer"     ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke schwerttanz   = { "Schwerttanz"  ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke saeurepanzer  = { "Säurepanzer"  ,GIFT   ,  0,100,20, 0,STATUS   };
extern const Attacke wachstum      = { "Wachstum"     ,PFLANZE,  0,100,20, 0,STATUS   };
extern const Attacke weichei       = { "Weichei"      ,NORMAL ,  0,100,10, 0,STATUS   };
extern const Attacke weissnebel    = { "Weissnebel"   ,EIS    ,  0,100,30, 0,STATUS   };

//Debuff
extern const Attacke aussetzer     = { "Aussetzer"    ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke blitz         = { "Blitz"        ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke fadenschuss   = { "Fadenschuss"  ,KAEFER ,  0, 95,40, 0,STATUS   };
extern const Attacke heuler        = { "Heuler"       ,NORMAL ,  0,100,40, 0,STATUS   };
extern const Attacke konfustrahl   = { "Konfustrahl"  ,GEIST  ,  0,100,10, 0,STATUS   };
extern const Attacke kreideschrei  = { "Kreideschrei" ,NORMAL ,  0, 85,40, 0,STATUS   };
extern const Attacke rauchwolke    = { "Rauchwolke"   ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke rutenschlag   = { "Rutenschlag"  ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke sandwirbel    = { "Sandwirbel"   ,BODEN  ,  0,100,15, 0,STATUS   };
extern const Attacke silberblick   = { "Silberblick"  ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke superschall   = { "Superschall"  ,NORMAL ,  0, 55,20, 0,STATUS   };


// Statuseffekt
extern const Attacke absorber      = { "Absorber"     ,PFLANZE, 20,100,20, 0,SPEZIAL  };
extern const Attacke blutsauger    = { "Blutsauger"   ,KAEFER , 80,100,15, 0,PHYSISCH };
extern const Attacke bodycheck     = { "Bodycheck"    ,NORMAL , 90, 85,20, 0,PHYSISCH };
extern const Attacke dunkelnebel   = { "Dunkelnebel"  ,EIS    ,  0,100,30, 0,STATUS   };
extern const Attacke erholung      = { "Erholung"     ,PSYCHO ,  0,100,10, 0,STATUS   };
extern const Attacke explosion     = { "Explosion"    ,NORMAL ,250,100, 5, 0,PHYSISCH };
extern const Attacke donnerwelle   = { "Donnerwelle"  ,ELEKTRO,  0, 90,20, 0,STATUS   };
extern const Attacke gesang        = { "Gesang"       ,NORMAL ,  0, 55,15, 0,STATUS   };
extern const Attacke giftblick     = { "Giftblick"    ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke giftpuder     = { "Giftpuder"    ,GIFT   ,  0, 75,35, 0,STATUS   };
extern const Attacke giftwolke     = { "Giftwolkte"   ,GIFT   ,  0, 90,40, 0,STATUS   };
extern const Attacke megasauger    = { "Megasauger"   ,PFLANZE, 40,100,10, 0,SPEZIAL  };
extern const Attacke pilzspore     = { "Pilzspore"    ,PFLANZE,  0,100,15, 0,STATUS   };
extern const Attacke schlafpuder   = { "Schlafpuder"  ,PFLANZE,  0, 75,15, 0,STATUS   };
extern const Attacke sprungkick    = { "Sprunkick"    ,KAMPF  ,100, 95,10, 0,PHYSISCH };
extern const Attacke stachelspore  = { "Stachelspore" ,PFLANZE,  0, 75,30, 0,STATUS   };
extern const Attacke ueberroller   = { "Überroller"   ,KAMPF  , 80, 80,25, 0,PHYSISCH };
extern const Attacke todeskuss     = { "Todeskuss"    ,NORMAL ,  0, 75,15, 0,STATUS   };
extern const Attacke toxin         = { "Toxin"        ,GIFT   ,  0, 90,10, 0,STATUS   };
extern const Attacke risikotackle  = { "Risikotackle" ,NORMAL ,120,100,15, 0,PHYSISCH };
extern const Attacke verzweifler   = { "Verzweifler"  ,NORMAL , 50,100, 1, 0,PHYSISCH };
//KO
extern const Attacke geofissur     = { "Geofissur"    ,BODEN  ,  0, 30, 5, 0,PHYSISCH };
extern const Attacke guillotine    = { "Guillotine"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };
extern const Attacke hornbohrer    = { "Hornbohrer"   ,NORMAL ,  0, 30, 5, 0,PHYSISCH };


// recursive
extern const Attacke doppelkick    = { "Doppelkick"   ,KAMPF  , 30,100,30, 0,PHYSISCH };
extern const Attacke dornkanone    = { "Dornkanone"   ,NORMAL , 20,100,15, 0,PHYSISCH };
extern const Attacke duonadel      = { "Duonadel"     ,KAEFER , 25,100,20, 0,PHYSISCH };
extern const Attacke duplexhieb    = { "Duplexhieb"   ,NORMAL , 15, 85,10, 0,PHYSISCH };
extern const Attacke finale        = { "Finale"       ,NORMAL ,200,100, 5, 0,PHYSISCH };
extern const Attacke fuchtler      = { "Fuchtler"     ,NORMAL ,120,100,10, 0,PHYSISCH };
extern const Attacke furienschlag  = { "Furienschlag" ,NORMAL , 15, 85,20, 0,PHYSISCH };
extern const Attacke knochenkeule  = { "Knochenkeule" ,BODEN  , 50, 90,10, 0,PHYSISCH };
extern const Attacke kometenhieb   = { "Kometenhieb"  ,NORMAL , 18, 85,15, 0,PHYSISCH };
extern const Attacke kratzfurie    = { "Kratzfurie"   ,NORMAL , 18, 80,15, 0,PHYSISCH };
extern const Attacke nadelrakete   = { "Nadelrakete"  ,KAEFER , 25, 95,20, 0,PHYSISCH };
extern const Attacke stakkato      = { "Stakkato"     ,NORMAL , 15, 85,20, 0,PHYSISCH };
extern const Attacke knochenmerang = { "Knochenmerang",BODEN  ,50 ,90 ,10,0 ,PHYSISCH };
// recursive am Ende des Zuges
extern const Attacke egelsamen     = { "Egelsamen"    ,PFLANZE,  0, 90,10, 0,STATUS   };
extern const Attacke klammer       = { "Klammer"      ,NORMAL , 55,100,30, 0,PHYSISCH };
extern const Attacke klammergriff  = { "Klammergriff" ,NORMAL , 15, 85,20, 0,PHYSISCH };
extern const Attacke feuerwirbel   = { "Feuerwirbel"  ,FEUER  , 35, 85,15, 0,SPEZIAL  };
extern const Attacke schnapper     = { "Schnapper"    ,WASSER , 35,100,35, 0,PHYSISCH };
extern const Attacke wickel        = { "Wickel"       ,NORMAL , 15, 90,20, 0,PHYSISCH };


// 2 - Phase
extern const Attacke fliegen       = { "Fliegen"      ,FLUG   , 90, 95,15, 0,PHYSISCH };
extern const Attacke geduld        = { "Geduld"       ,NORMAL ,  0,100,10, 0,PHYSISCH };
extern const Attacke hyperstrahl   = { "Hyperstrahl"  ,NORMAL ,150, 90, 5, 0,SPEZIAL  };
extern const Attacke klingensturm  = { "Klingensturm" ,NORMAL , 80, 75,10, 0,SPEZIAL  };
extern const Attacke solarstrahl   = { "Solarstrahl"  ,PFLANZE,120,100,10, 0,SPEZIAL  };
extern const Attacke schaufler     = { "Schaufler"    ,BODEN  , 80,100,10, 0,PHYSISCH };
extern const Attacke himmelsfeger  = { "Himmelsfeger" ,FLUG   ,140, 90, 5, 0,PHYSISCH };
extern const Attacke schaedelwumme = { "Schädelwumme" ,NORMAL ,130,100,10, 0,PHYSISCH };

// zurückschrecken
extern const Attacke biss          = { "Biss"         ,UNLICHT, 60,100,25, 0,PHYSISCH };
extern const Attacke fegekick      = { "Fegekick"     ,KAMPF  , 60, 85,15, 0,PHYSISCH };
extern const Attacke kopfnuss      = { "Kopfnuss"     ,NORMAL , 70,100,15, 0,PHYSISCH };


// Gegner flieht aus dem Kampf
extern const Attacke brueller      = { "Brüller"      ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke teleport      = { "Teleport"     ,PSYCHO ,  0,100,20, 0,STATUS   };
extern const Attacke wirbelwind    = { "Wirbelwind"   ,FLUG   ,  0,  0,20, 0,STATUS   };



// Dmg & StatuseffektEnemy
extern const Attacke aurorastrahl  = { "Aurorastrahl" ,EIS    , 65,100,25, 0,SPEZIAL  };
extern const Attacke blizzard      = { "Blizzard"     ,EIS    ,110, 70, 5, 0,SPEZIAL  };
extern const Attacke bodyslam      = { "Bodyslam"     ,NORMAL , 85,100,15, 0,PHYSISCH };
extern const Attacke donner        = { "Donner"       ,ELEKTRO,110, 70,10, 0,SPEZIAL  };
extern const Attacke donnerblitz   = { "Donnerblitz"  ,ELEKTRO, 90,100,15, 0,SPEZIAL  };
extern const Attacke donnerschlag  = { "Donnerschlag" ,ELEKTRO, 75,100,15, 0,PHYSISCH };
extern const Attacke donnerschock  = { "Donnerschock" ,ELEKTRO, 40,100,30, 0,SPEZIAL  };
extern const Attacke eishieb       = { "Eishieb"      ,EIS    , 75,100,15, 0,PHYSISCH };
extern const Attacke eisstrahl     = { "Eisstrahl"    ,EIS    , 90,100,10, 0,SPEZIAL  };
extern const Attacke feuerschlag   = { "Feuerschlag"  ,FEUER  , 75,100,15, 0,PHYSISCH };
extern const Attacke feuersturm    = { "Feuersturm"   ,FEUER  ,110, 85, 5, 0,SPEZIAL  };
extern const Attacke flammenwurf   = { "Flaemmenwurf" ,FEUER  , 90,100,15, 0,SPEZIAL  };
extern const Attacke giftstachel   = { "Giftstachel"  ,GIFT   , 15,100,35, 0,PHYSISCH };
extern const Attacke glut          = { "Glut"         ,FEUER  , 40,100,25, 0,SPEZIAL  };
extern const Attacke irrschlag     = { "Irrschlag"    ,NORMAL , 70,100,10, 0,PHYSISCH };
extern const Attacke konfusion     = { "Konfusion"    ,PSYCHO , 50,100,25, 0,SPEZIAL  };
extern const Attacke psychokinese  = { "Psychokinese" ,PSYCHO , 90,100,10, 0,SPEZIAL  };
extern const Attacke psykraft      = { "Psykraft"     ,PSYCHO ,  0, 80,15, 0,STATUS   };
extern const Attacke psystrahl     = { "Psystrahl"    ,PSYCHO , 65,100,20, 0,SPEZIAL  };
extern const Attacke psywelle      = { "Psywelle"     ,PSYCHO ,  0,100,15, 0,SPEZIAL  };
extern const Attacke schlammbad    = { "Schlammbad"   ,GIFT   , 65,100,20, 0,SPEZIAL  };
extern const Attacke schlecker     = { "Schlecker"    ,GEIST  , 30,100,30, 0,PHYSISCH };
extern const Attacke saeure        = { "Säure"        ,GIFT   , 40,100,30, 0,SPEZIAL  };
extern const Attacke smog          = { "Smog"         ,GIFT   , 30, 70,20, 0,SPEZIAL  };
extern const Attacke umklammerung  = { "Umklammerung" ,NORMAL , 10,100,35, 0,PHYSISCH };
extern const Attacke triplette     = { "Triplette"    ,NORMAL , 80,100,10, 0,SPEZIAL  };



// Spezial
extern const Attacke delegator     = { "Delegator"    ,NORMAL ,  0,100,10, 0,STATUS   };
extern const Attacke drachenwut    = { "Drachenwut"   ,DRACHE ,  0,100,10, 0,SPEZIAL  };
extern const Attacke fusskick      = { "Fusskick"     ,KAMPF  ,  0, 90,20, 0,PHYSISCH };
extern const Attacke geowurf       = { "Geowurf"      ,KAMPF  ,  0,100,20, 0,PHYSISCH };
extern const Attacke konter        = { "Konter"       ,KAMPF  ,  0,100,20,-5,PHYSISCH };
extern const Attacke metronom      = { "Metronom"     ,NORMAL ,  0,  0,10, 0,STATUS   };
extern const Attacke mimikry       = { "Mimikry"      ,NORMAL ,  0,100,10, 0,STATUS   };
extern const Attacke nachtnebel    = { "Nachtnebel"   ,GEIST  ,  0,100,15, 0,SPEZIAL  };
extern const Attacke raserei       = { "Raserei"      ,NORMAL , 20,100,20, 0,PHYSISCH };
extern const Attacke ruckzuckhieb  = { "Ruckzuckhieb" ,NORMAL , 40,100,30, 1,PHYSISCH };
extern const Attacke spigeltrick   = { "Spiegeltrick" ,FLUG   ,  0,100,20, 0,STATUS   };
extern const Attacke sternschauer  = { "Stenschauer"  ,NORMAL , 60,  0,20, 0,SPEZIAL  };
extern const Attacke superzahn     = { "Superzahn"    ,NORMAL ,  0, 90,10, 0,PHYSISCH };
extern const Attacke traumfresser  = { "Traumfresser" ,PSYCHO ,100,100,15, 0,SPEZIAL  };
extern const Attacke turmkick      = { "Turmkick"     ,KAMPF  ,130, 90,10, 0,PHYSISCH };
extern const Attacke ultraschall   = { "Ultraschall"  ,NORMAL ,  0, 90,20, 0,SPEZIAL  };
extern const Attacke umwandlung    = { "Umwandlung"   ,NORMAL ,  0,100,30, 0,STATUS   };
extern const Attacke wandler       = { "Wandler"      ,NORMAL ,  0,100,20, 0,STATUS   };
extern const Attacke zahltag       = { "Zahltag"      ,NORMAL , 40,100,20, 0,PHYSISCH };