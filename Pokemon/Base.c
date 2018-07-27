#include "Base.h"
#include "attacks.h"

const struct Learnable SmettboLearn[] = {
	{  1, ATTACKE_KONFUSION },
	{ 10, ATTACKE_KONFUSION },
	{ 13, ATTACKE_GIFTPUDER },
	{ 14, ATTACKE_STACHELSPORE },
	{ 15, ATTACKE_SCHLAFPUDER },
	{ 18, ATTACKE_SUPERSCHALL },
	{ 23, ATTACKE_WIRBELWIND },
	{ 28, ATTACKE_WINDSTOSS },
	{ 34, ATTACKE_PSYSTRAHL },
};
const struct Learnables SmettboLearns = { 2, SmettboLearn };

const struct Learnable SafconLearn[] = {
	{  1, ATTACKE_HAERTNER },
	{  7, ATTACKE_HAERTNER },
};
const struct Learnables SafconLearns = { 2, SafconLearn };

const struct Learnable RaupyLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_FADENSCHUSS },
};
const struct Learnables RaupyLearns = { 2, RaupyLearn };

const struct Learnable TurtokLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_BLUBBER },
	{  1, ATTACKE_AQUAKNARRE },
	{  8, ATTACKE_BLUBBER },
	{ 15, ATTACKE_AQUAKNARRE },
	{ 24, ATTACKE_BISS },
	{ 31, ATTACKE_PANZERSCHUTZ },
	{ 42, ATTACKE_SCHAEDELWUMME },
	{ 52, ATTACKE_HYDROPUMPE }
};
const struct Learnables TurtokLearns = { 10, TurtokLearn };

const struct Learnable SchillokLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_BLUBBER },
	{  8, ATTACKE_BLUBBER },
	{ 15, ATTACKE_AQUAKNARRE },
	{ 24, ATTACKE_BISS },
	{ 31, ATTACKE_PANZERSCHUTZ },
	{ 39, ATTACKE_SCHAEDELWUMME },
	{ 47, ATTACKE_HYDROPUMPE }
};
const struct Learnables SchillokLearns = { 9, SchillokLearn };

const struct Learnable SchiggyLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_RUTENSCHLAG },
	{  8, ATTACKE_BLUBBER },
	{ 15, ATTACKE_AQUAKNARRE },
	{ 22, ATTACKE_BISS },
	{ 28, ATTACKE_PANZERSCHUTZ },
	{ 35, ATTACKE_SCHAEDELWUMME },
	{ 42, ATTACKE_HYDROPUMPE }
};
const struct Learnables SchiggyLearns = { 8, SchiggyLearn };

const struct Learnable GlurakLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_GLUT },
	{  1, ATTACKE_SILBERBLICK },
	{  9, ATTACKE_GLUT },
	{ 15, ATTACKE_SILBERBLICK },
	{ 24, ATTACKE_RASEREI },
	{ 36, ATTACKE_SCHLITZER },
	{ 46, ATTACKE_FLAMMENWURF },
	{ 55, ATTACKE_FEUERWIRBEL }
};
const struct Learnables GlurakLearns = { 10, GlurakLearn };

const struct Learnable GlutexoLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_GLUT },
	{  9, ATTACKE_GLUT },
	{ 15, ATTACKE_SILBERBLICK },
	{ 24, ATTACKE_RASEREI },
	{ 33, ATTACKE_SCHLITZER },
	{ 42, ATTACKE_FLAMMENWURF },
	{ 56, ATTACKE_FEUERWIRBEL }
};
const struct Learnables GlutexoLearns = { 9, GlutexoLearn };

const struct Learnable GlumandaLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_HEULER },
	{  9, ATTACKE_GLUT },
	{ 15, ATTACKE_SILBERBLICK },
	{ 22, ATTACKE_RASEREI },
	{ 30, ATTACKE_SCHLITZER },
	{ 38, ATTACKE_FLAMMENWURF },
	{ 46, ATTACKE_FEUERWIRBEL }
};
const struct Learnables GlumandaLearns = { 8, GlumandaLearn };

const struct Learnable BisaflorLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_EGELSAMEN },
	{  1, ATTACKE_RANKENHIEB },
	{  7, ATTACKE_EGELSAMEN },
	{ 13, ATTACKE_RANKENHIEB },
	{ 22, ATTACKE_GIFTPUDER },
	{ 30, ATTACKE_RASIERBLATT },
	{ 43, ATTACKE_WACHSTUM },
	{ 55, ATTACKE_SCHLAFPUDER },
	{ 65, ATTACKE_SOLARSTRAHL }
};
const struct Learnables BisaflorLearns = { 11, BisaflorLearn };

const struct Learnable BisaknospLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_EGELSAMEN },
	{ 13, ATTACKE_RANKENHIEB },
	{ 22, ATTACKE_GIFTPUDER },
	{ 30, ATTACKE_RASIERBLATT },
	{ 38, ATTACKE_WACHSTUM },
	{ 46, ATTACKE_SCHLAFPUDER },
	{ 54, ATTACKE_SOLARSTRAHL }
};
const struct Learnables BisaknospLearns = { 9, BisaknospLearn };

const struct Learnable BisasamLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_HEULER },
	{  7, ATTACKE_EGELSAMEN },
	{ 13, ATTACKE_RANKENHIEB },
	{ 20, ATTACKE_GIFTPUDER },
	{ 27, ATTACKE_RASIERBLATT },
	{ 34, ATTACKE_WACHSTUM },
	{ 41, ATTACKE_SCHLAFPUDER },
	{ 48, ATTACKE_SOLARSTRAHL }
};
const struct Learnables BisasamLearns = { 9, BisasamLearn};

//												dex  name			typ1		typ2		cr   exp   hp  atk  def  sat  sdf  spd  EXP T   evo
extern const struct PokemonBase Mew			= { 151, "Mew",			PSYCHO,		KEINTYP,	 45,  64, 100, 100, 100, 100, 100, 100, EXP_T4, 0, NULL };

extern const struct PokemonBase Mewtu		= { 150, "Mewtu",		PSYCHO,		KEINTYP,	  3, 220, 106, 110,  90, 154,  90, 130, EXP_T5, 0, NULL };

extern const struct PokemonBase Dragoran	= { 149, "Dragoran",	DRACHE,		FLUG,		 45, 218,  91, 134,  95, 100, 100,  80, EXP_T5, 0, NULL };

const struct Evolution  DragonirEvo[]	= { 55, &Dragoran };
extern const struct PokemonBase Dragonir	= { 148, "Dragonir",	DRACHE,		KEINTYP,	 45, 144,  61,  84,  65,  70,  70,  70, EXP_T5, 1, DragonirEvo };

const struct Evolution  DratiniEvo[]	= { 30, &Dragonir };
extern const struct PokemonBase Dratini		= { 147, "Dratini",		DRACHE,		KEINTYP,	 45,  67,  41,  64,  45,  50,  50,  50, EXP_T5, 1, DratiniEvo };

extern const struct PokemonBase Lavados		= { 146, "Lavados",		FEUER,		FLUG,		  3, 217,  90, 100,  90, 125,  85,  90, EXP_T5, 0, NULL };

extern const struct PokemonBase Zapdos		= { 145, "Zapdos",		ELEKTRO,	FLUG,		  3, 216,  90,  90,  85, 125,  90, 100, EXP_T5, 0, NULL };

extern const struct PokemonBase Arktos		= { 144, "Arktos",		EIS,		FLUG,		  3, 215,  90,  85, 100,  95, 125,  85, EXP_T5, 0, NULL };

extern const struct PokemonBase Relaxo		= { 143, "Relaxo",		NORMAL,		KEINTYP,	 25, 154, 160, 110,  65,  65, 110,  30, EXP_T5, 0, NULL };

extern const struct PokemonBase Aerodactyl	= { 142, "Aerodactyl",	STEIN,		FLUG,		 45, 202,  80, 105,  65,  60,  75, 130, EXP_T5, 0, NULL };

extern const struct PokemonBase Kabutops	= { 141, "Kabutops",	STEIN,		WASSER,		 45, 199,  60, 115, 105,  65,  70,  80, EXP_T3, 0, NULL };

const struct Evolution  KabutoEvo[]		= { 40, &Kabutops };
extern const struct PokemonBase Kabuto		= { 140, "Kabuto",		STEIN,		WASSER,		 45,  99,  30,  80,  90,  55,  45,  55, EXP_T3, 1, KabutoEvo };

extern const struct PokemonBase Amoroso		= { 139, "Amoroso",		STEIN,		WASSER,		 45, 199,  70,  60, 125, 115,  70,  55, EXP_T3, 0, NULL };

const struct Evolution  AmonitasEvo[]	= { 40, &Amoroso };
extern const struct PokemonBase Amonitas	= { 138, "Amonitas",	STEIN,		WASSER,		 45,  99,  35,  40, 100,  90,  55,  35, EXP_T3, 1, AmonitasEvo };

extern const struct PokemonBase Porygon		= { 137, "Porygon",		NORMAL,		KEINTYP,	 45, 130,  65,  60,  70,  85,  75,  40, EXP_T3, 0, NULL };

extern const struct PokemonBase Flamara		= { 136, "Flamara",		FEUER,		KEINTYP,	 45, 198,  65, 130,  60,  95, 110,  65, EXP_T3, 0, NULL };

extern const struct PokemonBase Blitza		= { 135, "Blitza",		ELEKTRO,	KEINTYP,	 45, 197,  65,  65,  60, 110,  95, 130, EXP_T3, 0, NULL };

extern const struct PokemonBase Aquana		= { 134, "Aquana",		WASSER,		KEINTYP,	 45, 196, 130,  65,  60, 110,  95,  65, EXP_T3, 0, NULL };

const struct Evolution EvoliEvo[]		= { 
											{ STONE_FIRE, &Flamara },
											{ STONE_THUNDER, &Blitza },
											{ STONE_WATER, &Aquana } 
										};
extern const struct PokemonBase Evoli		= { 133, "Evoli",		NORMAL,		KEINTYP,	 45,  92,  55,  55,  50,  45,  65,  55, EXP_T3, 3, EvoliEvo };

extern const struct PokemonBase Ditto		= { 132, "Ditto",		NORMAL,		KEINTYP,	 35,  61,  48,  48,  48,  48,  48,  48, EXP_T3, 0, NULL };

extern const struct PokemonBase Lapras		= { 131, "Lapras",		WASSER,		EIS,		 45, 219, 130,  85,  80,  85,  95,  60, EXP_T5, 0, NULL };

extern const struct PokemonBase Garados		= { 130, "Garados",		WASSER,		FLUG,		 45, 214,  95, 125,  79,  60, 100,  81, EXP_T5, 0, NULL };

const struct Evolution  KarpadorEvo[]	= { 20, &Garados };
extern const struct PokemonBase Karpador	= { 129, "Karpador",	WASSER,		KEINTYP,	255,  20,  20,  10,  55,  15,  20,  80, EXP_T5, 1, KarpadorEvo };

extern const struct PokemonBase Tauros		= { 128, "Tauros",		NORMAL,		KEINTYP,	 45, 211,  75, 100,  95,  40,  70, 110, EXP_T5, 0, NULL };

extern const struct PokemonBase Pinsir		= { 127, "Pinsir",		KAEFER,		KEINTYP,	 45, 200,  65, 125, 100,  55,  70,  85, EXP_T5, 0, NULL };

extern const struct PokemonBase Magmar		= { 126, "Magmar",		FEUER,		KEINTYP,	 45, 167,  65,  95,  57, 100,  85,  93, EXP_T3, 0, NULL };

extern const struct PokemonBase Elektek		= { 125, "Elektek",		ELEKTRO,	KEINTYP,	 45, 156,  65,  83,  57,  95,  85, 105, EXP_T3, 0, NULL };

extern const struct PokemonBase Rossana		= { 124, "Rossana",		EIS,		PSYCHO,		 45, 137,  65,  50,  35, 115,  95,  95, EXP_T3, 0, NULL };

extern const struct PokemonBase Sichlor		= { 123, "Sichlor",		KAEFER,		FLUG,		 45, 187,  70, 110,  80,  55,  80, 105, EXP_T3, 0, NULL };

extern const struct PokemonBase Pantimos	= { 122, "Pantimos",	PSYCHO,		KEINTYP,	 45, 136,  40,  45,  65, 100, 120,  90, EXP_T3, 0, NULL };

extern const struct PokemonBase Starmie		= { 121, "Starmie",		WASSER,		PSYCHO,		 60, 207,  60,  75,  85, 100,  85, 115, EXP_T5, 0, NULL };

const struct Evolution  SternduEvo[]	= { STONE_WATER, &Starmie };
extern const struct PokemonBase Sterndu		= { 120, "Sterndu",		WASSER,		KEINTYP,	225, 106,  30,  45,  55,  70,  55,  85, EXP_T5, 1, SternduEvo };

extern const struct PokemonBase Golking		= { 119, "Golking",		WASSER,		KEINTYP,	 60, 170,  80,  92,  65,  65,  80,  68, EXP_T3, 0, NULL };

const struct Evolution  GoldiniEvo[]	= { 33, &Golking };
extern const struct PokemonBase Goldini		= { 118, "Goldini",		WASSER,		KEINTYP,	225, 111,  45,  67,  60,  35,  50,  63, EXP_T3, 1, GoldiniEvo };

extern const struct PokemonBase Seemon		= { 117, "Seemon",		WASSER,		KEINTYP,	 75, 155,  55,  65,  95,  95,  45,  85, EXP_T3, 0, NULL };

const struct Evolution  SeeperEvo[]		= { 32, &Seemon };
extern const struct PokemonBase Seeper		= { 116, "Seeper",		WASSER,		KEINTYP,	225,  83,  30,  40,  70,  70,  25,  60, EXP_T3, 1, SeeperEvo };

extern const struct PokemonBase Kangama		= { 115, "Kangama",		NORMAL,		KEINTYP,	 45, 175, 105,  95,  80,  40,  80,  90, EXP_T3, 0, NULL };

extern const struct PokemonBase Tangela		= { 114, "Tangela",		PFLANZE,	KEINTYP,	 45, 166,  65,  55, 115, 100,  40,  60, EXP_T3, 0, NULL };

extern const struct PokemonBase Chaneira	= { 113, "Chaneira",	NORMAL,		KEINTYP,	 30, 255, 250,   5,   5,  35, 105,  50, EXP_T2, 0, NULL };

extern const struct PokemonBase Rizeros		= { 112, "Rizeros",		BODEN,		STEIN,		 60, 204, 105, 130, 120,  45,  45,  40, EXP_T5, 0, NULL };

const struct Evolution  RihornEvo[]		= { 42, &Rizeros };
extern const struct PokemonBase Rihorn		= { 111, "Rihorn",		BODEN,		STEIN,		120, 135,  80,  85,  95,  30,  30,  25, EXP_T5, 1, RihornEvo };

extern const struct PokemonBase Smogmog		= { 110, "Smogmog",		GIFT,		KEINTYP,	 60, 173,  65,  90, 120,  85,  70,  60, EXP_T3, 0, NULL };

const struct Evolution  SmogonEvo[]		= { 35, &Smogmog };
extern const struct PokemonBase Smogon		= { 109, "Smogon",		GIFT,		KEINTYP,	190, 114,  40,  65,  95,  60,  45,  35, EXP_T3, 1, SmogonEvo };

extern const struct PokemonBase Schlurp		= { 108, "Schlurp",		NORMAL,		KEINTYP,	 45, 127,  90,  55,  75,  60,  75,  30, EXP_T3, 0, NULL };

extern const struct PokemonBase Nockchan	= { 107, "Nockchan",	KAMPF,		KEINTYP,	 45, 140,  50, 105,  79,  35, 110,  76, EXP_T3, 0, NULL };

extern const struct PokemonBase Kicklee		= { 106, "Kicklee",		KAMPF,		KEINTYP,	 45, 139,  50, 120,  53,  35, 110,  87, EXP_T3, 0, NULL };

extern const struct PokemonBase Knogga		= { 105, "Knogga",		BODEN,		KEINTYP,	 75, 124,  60,  80, 110,  50,  80,  45, EXP_T3, 0, NULL };

const struct Evolution  TragossoEvo[]	= { 28, &Knogga };
extern const struct PokemonBase Tragosso	= { 104, "Tragosso",	BODEN,		KEINTYP,	190,  87,  50,  50,  95,  40,  50,  35, EXP_T3, 1, TragossoEvo };

extern const struct PokemonBase Kokowei		= { 103, "Kokowei",		PFLANZE,	PSYCHO,		 45, 212,  95,  95,  85, 125,  75,  55, EXP_T5, 0, NULL };

const struct Evolution  OweiEvo[]		= { STONE_LEAF, &Kokowei };
extern const struct PokemonBase Owei		= { 102, "Owei",		PFLANZE,	PSYCHO,		 90,  98,  60,  40,  80,  60,  45,  40, EXP_T5, 1, OweiEvo };

extern const struct PokemonBase Lektrobal	= { 101, "Lektrobal",	ELEKTRO,	KEINTYP,	 70, 150,  60,  50,  70,  80,  80, 150, EXP_T3, 0, NULL };

const struct Evolution  VoltobalEvo[]	= { 30, &Lektrobal };
extern const struct PokemonBase Voltobal	= { 100, "Voltobal",	ELEKTRO,	KEINTYP,	 190, 103,  40,  30,  50,  55,  55, 100, EXP_T3, 1, VoltobalEvo };

extern const struct PokemonBase Kingler		= {  99, "Kingler",		WASSER,		KEINTYP,	 60, 206,  55, 130, 115,  50,  50,  75, EXP_T3, 0, NULL };

const struct Evolution  KrabbyEvo[]		= { 28, &Kingler };
extern const struct PokemonBase Krabby		= {  98, "Krabby",		WASSER,		KEINTYP,	225, 115,  30, 105,  90,  25,  25,  50, EXP_T3, 1, KrabbyEvo };

extern const struct PokemonBase Hypno		= {  97, "Hypno",		PSYCHO,		KEINTYP,	 75, 165,  85,  73,  70,  73, 115,  67, EXP_T3, 0, NULL };

const struct Evolution  TraumatoEvo[]	= { 26, &Hypno };
extern const struct PokemonBase Traumato	= {  96, "Traumato",	PSYCHO,		KEINTYP,	190, 102,  60,  48,  45,  43,  90,  42, EXP_T3, 1, TraumatoEvo };

extern const struct PokemonBase Onix		= {  95, "Onix",		STEIN,		BODEN,		 45, 108,  35,  45, 160,  30,  45,  70, EXP_T3, 0, NULL };

extern const struct PokemonBase Gengar		= {  94, "Gengar",		GEIST,		GIFT,		 45, 190,  60,  65,  60, 130,  75, 110, EXP_T4, 0, NULL };

const struct Evolution  AlpolloEvo[]	= { EVO_TRADE, &Gengar };
extern const struct PokemonBase Alpollo		= {  93, "Alpollo",		GEIST,		GIFT,		 90, 126,  45,  50,  45, 115,  55,  95, EXP_T4, 1, AlpolloEvo };

const struct Evolution  NebulakEvo[]	= { 25, &Alpollo };
extern const struct PokemonBase Nebulak		= {  92, "Nebulak",		GEIST,		GIFT,		190,  95,  30,  35,  30, 100,  35,  80, EXP_T4, 1, NebulakEvo };

extern const struct PokemonBase Austos		= {  91, "Austos",		WASSER,		EIS,		 60, 203,  50,  95, 180,  85,  45,  70, EXP_T5, 0, NULL };

const struct Evolution  MuschasEvo[]	= { STONE_WATER, &Austos };
extern const struct PokemonBase Muschas		= {  90, "Muschas",		WASSER,		KEINTYP,	190,  97,  30,  65, 100,  45,  25,  40, EXP_T5, 1, MuschasEvo };

extern const struct PokemonBase Sleimok		= {  89, "Sleimok",		GIFT,		KEINTYP,	 75, 157, 105, 105,  75,  65, 100,  50, EXP_T3, 0, NULL };

const struct Evolution  SleimaEvo[]		= { 38, &Sleimok };
extern const struct PokemonBase Sleima		= {  88, "Sleima",		GIFT,		KEINTYP,	190,  90,  80,  80,  50,  40,  50,  25, EXP_T3, 1, SleimaEvo };

extern const struct PokemonBase Jugong		= {  87, "Jugong",		WASSER,		EIS,		 75, 176,  90,  70,  80,  70,  95,  70, EXP_T3, 0, NULL };

const struct Evolution  JurobEvo[]		= { 34, &Jugong };
extern const struct PokemonBase Jurob		= {  86, "Jurob",		WASSER,		KEINTYP,	190, 100,  65,  45,  55,  45,  70,  45, EXP_T3, 1, JurobEvo };

extern const struct PokemonBase Dodri		= {  85, "Dodri",		NORMAL,		FLUG,		 45, 158,  60, 110,  70,  60,  60, 110, EXP_T3, 0, NULL };

const struct Evolution  DoduEvo[]		= { 31, &Dodri };
extern const struct PokemonBase Dodu		= {  84, "Dodu",		NORMAL,		FLUG,		190,  96,  35,  85,  45,  35,  35,  75, EXP_T3, 1, DoduEvo };

extern const struct PokemonBase Porenta		= {  83, "Porenta",		NORMAL,		FLUG,		 45,  94,  52,  90,  55,  58,  62,  60, EXP_T3, 0, NULL };

extern const struct PokemonBase Magneton	= {  82, "Magneton",	ELEKTRO,	STAHL,		 60, 161,  50,  60,  95, 120,  70,  70, EXP_T3, 0, NULL };

const struct Evolution  MagnetiloEvo[]	= { 30, &Magneton };
extern const struct PokemonBase Magnetilo	= {  81, "Magnetilo",	ELEKTRO,	STAHL,		190,  89,  25,  35,  70,  95,  55,  45, EXP_T3, 1, MagnetiloEvo };

extern const struct PokemonBase Lahmus		= {  80, "Lahmus",		WASSER,		PSYCHO,		 75, 164,  95,  75, 110, 100,  80,  30, EXP_T3, 0, NULL };

const struct Evolution FlegmonEvo[]		= { 37, &Lahmus };
extern const struct PokemonBase Flegmon		= {  79, "Flegmon",		WASSER,		PSYCHO,		190,  99,  90,  65,  65,  40,  40,  15, EXP_T3, 1, FlegmonEvo };

extern const struct PokemonBase Gallopa		= {  78, "Gallopa",		FEUER,		KEINTYP,	 60, 192,  65, 100,  70,  80,  80, 105, EXP_T3, 0, NULL };

const struct Evolution PonitaEvo[]		= { 40, &Gallopa };
extern const struct PokemonBase Ponita		= {  77, "Ponita",		FEUER,		KEINTYP,	190, 152,  50,  85,  55,  65,  65,  90, EXP_T3, 1, PonitaEvo };

extern const struct PokemonBase Geowaz		= {  76, "Geowaz",		STEIN,		BODEN,		 45, 177,  80, 120, 130,  55,  65,  45, EXP_T4, 0, NULL };

const struct Evolution GeorokEvo[]		= { EVO_TRADE, &Geowaz };
extern const struct PokemonBase Georok		= {  75, "Georok",		STEIN,		BODEN,		120, 134,  55,  95, 115,  45,  45,  35, EXP_T4, 1, GeorokEvo };

const struct Evolution KleinsteinEvo[]	= { 25, &Georok };
extern const struct PokemonBase Kleinstein	= {  74, "Kleinstein",	STEIN,		BODEN,		255,  73,  40,  80, 100,  30,  30,  20, EXP_T4, 1, KleinsteinEvo };

extern const struct PokemonBase Tentoxa		= {  73, "Tentoxa",		WASSER,		GIFT,		 60, 205,  80,  70,  65,  80, 120, 100, EXP_T5, 0, NULL };

const struct Evolution TentachaEvo[]	= { 30, &Tentoxa };
extern const struct PokemonBase Tentacha	= {  72, "Tentacha",	WASSER,		GIFT,		190, 105,  40,  40,  35,  50, 100,  70, EXP_T5, 1, TentachaEvo };

extern const struct PokemonBase Sarzenia	= {  71, "Sarzenia",	PFLANZE,	GIFT,		 45, 191,  80, 105,  65, 100,  70,  70, EXP_T4, 0, NULL };

const struct Evolution UltrigariaEvo[]	= { STONE_LEAF, &Sarzenia };
extern const struct PokemonBase Ultrigaria	= {  70, "Ultrigaria",	PFLANZE,	GIFT,		120, 151,  65,  90,  50,  85,  45,  55, EXP_T4, 1, UltrigariaEvo };

const struct Evolution KnofensaEvo[]	= { 21, &Ultrigaria };
extern const struct PokemonBase Knofensa	= {  69, "Knofensa",	PFLANZE,	GIFT,		255,  84,  50,  75,  35,  70,  30,  40, EXP_T4, 1, KnofensaEvo };

extern const struct PokemonBase Machomei	= {  68, "Machomei",	KAMPF,		KEINTYP,	 45, 193,  90, 130,  80,  65,  85,  55, EXP_T4, 0, NULL };

const struct Evolution MaschockEvo[]	= { EVO_TRADE, &Machomei };
extern const struct PokemonBase Maschock	= {  67, "Maschock",	KAMPF,		KEINTYP,	 90, 146,  80, 100,  70,  50,  60,  45, EXP_T4, 1, MaschockEvo };

const struct Evolution MacholloEvo[]	= { 28, &Maschock };
extern const struct PokemonBase Machollo	= {  66, "Machollo",	KAMPF,		KEINTYP,	180,  75,  70,  80,  50,  35,  35,  35, EXP_T4, 1, MacholloEvo };

extern const struct PokemonBase Simsala		= {  65, "Simsala",		PSYCHO,		KEINTYP,	 50, 186,  55,  50,  45, 135,  95, 120, EXP_T4, 0, NULL };

const struct Evolution KadabraEvo[]		= { EVO_TRADE, &Simsala };
extern const struct PokemonBase Kadabra		= {  64, "Kadabra",		PSYCHO,		KEINTYP,	100, 145,  40,  35,  30, 120,  70, 105, EXP_T4, 1, KadabraEvo };

const struct Evolution AbraEvo[]		= { 16, &Kadabra };
extern const struct PokemonBase Abra		= {  63, "Abra",		PSYCHO,		KEINTYP,	200,  75,  25,  20,  15, 105,  55,  90, EXP_T4, 1, AbraEvo };

extern const struct PokemonBase Quappo		= {  62, "Quappo",		WASSER,		KAMPF,		 45, 185,  90,  95,  95,  70,  90,  70, EXP_T4, 0, NULL };

const struct Evolution QuaputziEvo[]	= { STONE_WATER, &Quappo };
extern const struct PokemonBase Quaputzi	= {  61, "Quaputzi",	WASSER,		KEINTYP,	120, 131,  65,  65,  65,  50,  50,  90, EXP_T4, 1, QuaputziEvo };

const struct Evolution QuapselEvo[]		= { 25, &Quaputzi };
extern const struct PokemonBase Quapsel		= {  60, "Quapsel",		WASSER,		KEINTYP,	255,  77,  40,  50,  40,  40,  40,  90, EXP_T4, 1, QuapselEvo };

extern const struct PokemonBase Arkani		= {  59, "Arkani",		FEUER,		KEINTYP,	 75, 213,  90, 110,  80, 100,  80,  95, EXP_T5, 0, NULL };

const struct Evolution FukanoEvo[]		= { STONE_FIRE, &Arkani };
extern const struct PokemonBase Fukano		= {  58, "Fukano",		FEUER,		KEINTYP,	190,  91,  55,  70,  45,  70,  50,  60, EXP_T5, 1, FukanoEvo };

extern const struct PokemonBase Rasaff		= {  57, "Rasaff",		KAMPF,		KEINTYP,	 75, 149,  65, 105,  60,  60,  70,  95, EXP_T3, 0, NULL };

const struct Evolution MenkiEvo[]		= { 28, &Rasaff };
extern const struct PokemonBase Menki		= {  56, "Menki",		KAMPF,		KEINTYP,	190,  74,  40,  80,  35,  35,  45,  70, EXP_T3, 1, MenkiEvo };

extern const struct PokemonBase Entoron		= {  55, "Entoron",		WASSER,		KEINTYP,	 75, 174,  80,  82,  75,  95,  80,  85, EXP_T3, 0, NULL };

const struct Evolution EntonEvo[]		= { 33, &Entoron };
extern const struct PokemonBase Enton		= {  54, "Enton",		WASSER,		KEINTYP,	190,  80,  50,  52,  48,  65,  50,  55, EXP_T3, 1, EntonEvo };

extern const struct PokemonBase Snobilikat	= {  53, "Snobilikat",	NORMAL,		KEINTYP,	 90, 148,  65,  70,  60,  65,  65, 115, EXP_T3, 0, NULL };

const struct Evolution MauziEvo[]		= { 28, &Snobilikat };
extern const struct PokemonBase Mauzi		= {  52, "Mauzi",		NORMAL,		KEINTYP,	255,  69,  40,  45,  35,  40,  40,  90, EXP_T3, 1, MauziEvo };

extern const struct PokemonBase Digdri		= {  51, "Digdri",		BODEN,		KEINTYP,	 50, 153,  35, 100,  50,  50,  70, 120, EXP_T3, 0, NULL };

const struct Evolution DigdaEvo[]		= { 26, &Digdri };
extern const struct PokemonBase Digda		= {  50, "Digda",		BODEN,		KEINTYP,	255,  81,  10,  55,  25,  35,  45,  95, EXP_T3, 1, DigdaEvo };

extern const struct PokemonBase Omot		= {  49, "Omot",		KAEFER,		GIFT,		 75, 138,  70,  65,  60,  90,  75,  90, EXP_T3, 0, NULL };

const struct Evolution BluzukEvo[]		= { 31, &Omot };
extern const struct PokemonBase Bluzuk		= {  48, "Bluzuk",		KAEFER,		GIFT,		190,  75,  60,  55,  50,  40,  55,  45, EXP_T3, 1, BluzukEvo };

extern const struct PokemonBase Parasek		= {  47, "Parasek",		KAEFER,		PFLANZE,	 75, 128,  60,  95,  80,  60,  80,  30, EXP_T3, 0, NULL };

const struct Evolution ParasEvo[]		= { 24, &Parasek };
extern const struct PokemonBase Paras		= {  46, "Paras",		KAEFER,		PFLANZE,	190,  70,  35,  70,  55,  45,  55,  25, EXP_T3, 1, ParasEvo };

extern const struct PokemonBase Giflor		= {  45, "Giflor",		PFLANZE,	GIFT,		 45, 184,  75,  80,  85, 110,  90,  50, EXP_T4, 0, NULL };

const struct Evolution DuflorEvo[]		= { STONE_LEAF, &Giflor };
extern const struct PokemonBase Duflor		= {  44, "Duflor",		PFLANZE,	GIFT,		120, 132,  60,  65,  70,  85,  75,  40, EXP_T4, 1, DuflorEvo };

const struct Evolution MyraplaEvo[]		= { 21, &Duflor };
extern const struct PokemonBase Myrapla		= {  43, "Myrapla",		PFLANZE,	GIFT,		255,  78,  45,  50,  55,  75,  65,  30, EXP_T4, 1, MyraplaEvo };

extern const struct PokemonBase Golbat		= {  42, "Golbat",		GIFT,		FLUG,		 90, 171,  71,  80,  70,  65,  75,  90, EXP_T3, 0, NULL };

const struct Evolution ZubatEvo[]		= { 22, &Golbat };
extern const struct PokemonBase Zubat		= {  41, "Zubat",		GIFT,		FLUG,		255,  54,  40,  45,  35,  30,  40,  55, EXP_T3, 1, ZubatEvo };

extern const struct PokemonBase Knuddeluff	= {  40, "Knuddeluff",	NORMAL,		KEINTYP,	 50, 109, 140,  70,  45,  85,  50,  45, EXP_T2, 0, NULL };

const struct Evolution PummeluffEvo[]	= { STONE_MOON, &Knuddeluff };
extern const struct PokemonBase Pummeluff	= {  39, "Pummeluff",	NORMAL,		KEINTYP,	170,  76, 115,  45,  20,  45,  25,  20, EXP_T2, 1, PummeluffEvo };

extern const struct PokemonBase Vulnona		= {  38, "Vulnona",		FEUER,		KEINTYP,	 75, 178,  73,  76,  75,  81, 100, 100, EXP_T3, 0, NULL };

const struct Evolution VulpixEvo[]		= { STONE_FIRE, &Vulnona };
extern const struct PokemonBase Vulpix		= {  37, "Vulpix",		FEUER,		KEINTYP,	190,  63,  38,  41,  40,  50,  65,  65, EXP_T3, 1, VulpixEvo };

extern const struct PokemonBase Pixi		= {  36, "Pixi",		NORMAL,		KEINTYP,	 25, 129,  95,  70,  73,  95,  90,  60, EXP_T2, 0, NULL };

const struct Evolution PiepiEvo[]		= { STONE_MOON, &Pixi };
extern const struct PokemonBase Piepi		= {  35, "Piepi",		NORMAL,		KEINTYP,	150,  68,  70,  45,  48,  60,  65,  35, EXP_T2, 1, PiepiEvo };

extern const struct PokemonBase Nidoking	= {  34, "Nidoking",	GIFT,		BODEN,		 45, 195,  81, 102,  77,  85,  75,  85, EXP_T4, 0, NULL };

const struct Evolution NidorinoEvo[]	= { STONE_MOON, &Nidoking };
extern const struct PokemonBase Nidorino	= {  33, "Nidorino",	GIFT,		KEINTYP,	120, 118,  61,  72,  57,  55,  55,  65, EXP_T4, 1, NidorinoEvo };

const struct Evolution NidoranMEvo[]	= { 16, &Nidorino };
extern const struct PokemonBase NidoranM	= {  32, "NidoranM",	GIFT,		KEINTYP,	235,  60,  46,  57,  40,  40,  40,  50, EXP_T4, 1, NidoranMEvo };

extern const struct PokemonBase Nidoqueen	= {  31, "Nidoqueen",	GIFT,		BODEN,		 45, 194,  90,  92,  87,  75,  85,  76, EXP_T4, 0, NULL };

const struct Evolution NidorinaEvo[]	= { STONE_MOON, &Nidoqueen };
extern const struct PokemonBase Nidorina	= {  30, "Nidorina",	GIFT,		KEINTYP,	120, 117,  70,  62,  67,  55,  55,  56, EXP_T4, 1, NidorinaEvo };

const struct Evolution NidoranWEvo[]	= { 16, &Nidorina };
extern const struct PokemonBase NidoranW	= {  29, "NidoranW",	GIFT,		KEINTYP,	235,  59,  55,  47,  52,  40,  40,  41, EXP_T4, 1, NidoranWEvo };

extern const struct PokemonBase Sandamer	= {  28, "Sandamer",	BODEN,		KEINTYP,	 90, 163,  75, 100, 110,  45,  55,  65, EXP_T3, 0, NULL };

const struct Evolution SandanEvo[]		= { 22, &Sandamer };
extern const struct PokemonBase Sandan		= {  27, "Sandan",		BODEN,		KEINTYP,	255,  93,  50,  75,  85,  20,  30,  40, EXP_T3, 1, SandanEvo };

extern const struct PokemonBase Raichu		= {  26, "Raichu",		ELEKTRO,	KEINTYP,	 75, 122,  60,  90,  55,  90,  80, 110, EXP_T3, 0, NULL };

const struct Evolution PikachuEvo[]		= { STONE_THUNDER, &Raichu };
extern const struct PokemonBase Pikachu		= {  25, "Pikachu",		ELEKTRO,	KEINTYP,	190,  82,  35,  55,  40,  50,  50,  90, EXP_T3, 1, PikachuEvo };

extern const struct PokemonBase Arbok		= {  24, "Arbok",		GIFT,		KEINTYP,	 90, 147,  60,  95,  69,  65,  79,  80, EXP_T3, 0, NULL };

const struct Evolution RettanEvo[]		= { 22, &Arbok };
extern const struct PokemonBase Rettan		= {  23, "Rettan",		GIFT,		KEINTYP,	255,  62,  35,  60,  44,  40,  45,  55, EXP_T3, 1, RettanEvo };

extern const struct PokemonBase Ibitak		= {  22, "Ibitak",		NORMAL,		FLUG,		 90, 162,  65,  90,  65,  61,  61, 100, EXP_T3, 0, NULL };

const struct Evolution HabitakEvo[]		= { 20, &Ibitak };
extern const struct PokemonBase Habitak		= {  21, "Habitak",		NORMAL,		FLUG,		255,  58,  40,  60,  30,  31,  31,  70, EXP_T3, 1, HabitakEvo };

extern const struct PokemonBase Rattikarl	= {  20, "Rattikarl",	NORMAL,		KEINTYP,	127, 116,  55,  81,  60,  50,  70,  97, EXP_T3, 0, NULL };

const struct Evolution RattfratzEvo[]	= { 20, &Rattikarl };
extern const struct PokemonBase Rattfratz	= {  19, "Rattfratz",	NORMAL,		KEINTYP,	255,  57,  30,  56,  35,  25,  35,  72, EXP_T3, 1, RattfratzEvo };

extern const struct PokemonBase Tauboss		= {  18, "Tauboss",		NORMAL,		FLUG,		 45, 172,  83,  80,  75,  70,  70, 101, EXP_T4, 0, NULL };

const struct Evolution TaubogaEvo[]		= { 36, &Tauboss };
extern const struct PokemonBase Tauboga		= {  17, "Tauboga",		NORMAL,		FLUG,		120, 113,  63,  60,  55,  50,  50,  71, EXP_T4, 1, TaubogaEvo };

const struct Evolution TaubsiEvo[]		= { 18, &Tauboga };
extern const struct PokemonBase Taubsi		= {  16, "Taubsi",		NORMAL,		FLUG,		255,  55,  40,  45,  40,  35,  35,  53, EXP_T4, 1, TaubsiEvo };

extern const struct PokemonBase Bibor		= {  15, "Bibor",		KAEFER,		GIFT,		 45, 159,  65,  90,  40,  45,  80,  75, EXP_T3, 0, NULL };

const struct Evolution KokunaEvo[]		= { 10, &Bibor };
extern const struct PokemonBase Kokuna		= {  14, "Kokuna",		KAEFER,		GIFT,		120,  71,  45,  25,  50,  25,  25,  35, EXP_T3, 1, KokunaEvo };

const struct Evolution HornliuEvo[]		= { 7, &Kokuna };
extern const struct PokemonBase Hornliu		= {  13, "Hornliu",		KAEFER,		GIFT,		255,  52,  40,  35,  30,  20,  20,  50, EXP_T3, 1, HornliuEvo };

extern const struct PokemonBase Smettbo		= {  12, "Smettbo",		KAEFER,		FLUG,		 45, 160,  60,  45,  50,  90,  80,  70, EXP_T3, 0, NULL,			&SmettboLearns };

const struct Evolution SafconEvo[]		= { 10, &Smettbo };
extern const struct PokemonBase Safcon		= {  11, "Safcon",		KAEFER,		KEINTYP,	120,  72,  50,  20,  55,  25,  25,  30, EXP_T3, 1, SafconEvo,		&SafconLearns };

const struct Evolution RaupyEvo[]		= { 7, &Safcon };
extern const struct PokemonBase Raupy		= {  10, "Raupy",		KAEFER,		KEINTYP,	255,  53,  45,  30,  35,  20,  20,  45, EXP_T3, 1, RaupyEvo,		&RaupyLearns };

extern const struct PokemonBase Turtok		= {   9, "Turtok",		WASSER,		KEINTYP,	 45, 210,  79,  83, 100,  85, 105,  78, EXP_T4, 0, NULL,			&TurtokLearns };

const struct Evolution SchillokEvo[]	= { 32, &Turtok };
extern const struct PokemonBase Schillok	= {   8, "Schillok",	WASSER,		KEINTYP,	 45, 143,  59,  63,  80,  65,  80,  58, EXP_T4, 1, SchillokEvo,		&SchillokLearns };

const struct Evolution SchiggyEvo[]		= { 16, &Schillok };
extern const struct PokemonBase Schiggy		= {   7, "Schiggy",		WASSER,		KEINTYP,	 45,  66,  44,  48,  65,  50,  64,  43, EXP_T4, 1, SchiggyEvo,		&SchiggyLearns };

extern const struct PokemonBase Glurak		= {   6, "Glurak",		FEUER,		FLUG,		 45, 209,  78,  84,  78, 109,  85, 100, EXP_T4, 0, NULL,			&GlurakLearns };

const struct Evolution GlutexoEvo[]		= { 32, &Glurak };
extern const struct PokemonBase Glutexo		= {   5, "Glutexo",		FEUER,		KEINTYP,	 45, 142,  58,  64,  58,  80,  65,  80, EXP_T4, 1, GlutexoEvo,		&GlutexoLearns };

const struct Evolution GlumandaEvo[]	= { 16, &Glutexo };
extern const struct PokemonBase Glumanda	= {   4, "Glumanda",	FEUER,		KEINTYP,	 45,  70,  39,  52,  43,  60,  50,  65, EXP_T4, 1, GlumandaEvo,		&GlumandaLearns };

extern const struct PokemonBase Bisaflor	= {   3, "Bisaflor",	PFLANZE,	GIFT,		 45, 208,  80,  82,  83, 100, 100,  80, EXP_T4, 0, NULL,			&BisaflorLearns };

const struct Evolution BisaknospEvo[]	= { 32, &Bisaflor };
extern const struct PokemonBase Bisaknosp	= {   2, "Bisaknosp",	PFLANZE,	GIFT,		 45, 141,  60,  62,  63,  80,  80,  60, EXP_T4, 1, BisaknospEvo,	&BisaknospLearns };

const struct Evolution BisasamEvo[]		= { 16, &Bisaknosp };
extern const struct PokemonBase Bisasam		= {   1, "Bisasam",		PFLANZE,	GIFT,		 45,  64,  45,  49,  49,  65,  65,  45, EXP_T4, 1, BisasamEvo,		&BisasamLearns };


extern const struct PokemonBase *PokemonBaseNatDex[152] = {
	NULL,
	&Bisasam,		//001
	&Bisaknosp,		//002
	&Bisaflor,		//003
	&Glumanda,		//004
	&Glutexo,		//005
	&Glurak,		//006
	&Schiggy,		//007
	&Schillok,		//008
	&Turtok,		//009
	&Raupy,			//010
	&Safcon,		//011
	&Smettbo,		//012
	&Hornliu,		//013
	&Kokuna,		//014
	&Bibor,			//015
	&Taubsi,		//016
	&Tauboga,		//017
	&Tauboss,		//018
	&Rattfratz,		//019
	&Rattikarl,		//020
	&Habitak,		//021
	&Ibitak,		//022
	&Rettan,		//023
	&Arbok,			//024
	&Pikachu,		//025
	&Raichu,		//026
	&Sandan,		//027
	&Sandamer,		//028
	&NidoranW,		//029
	&Nidorina,		//030
	&Nidoqueen,		//031
	&NidoranM,		//032
	&Nidorino,		//033
	&Nidoking,		//034
	&Piepi,			//035
	&Pixi,			//036
	&Vulpix,		//037
	&Vulnona,		//038
	&Pummeluff,		//039
	&Knuddeluff,	//040
	&Zubat,			//041
	&Golbat,		//042
	&Myrapla,		//043
	&Duflor,		//044
	&Giflor,		//045
	&Paras,			//046
	&Parasek,		//047
	&Bluzuk,		//048
	&Omot,			//049
	&Digda,			//050
	&Digdri,		//051
	&Mauzi,			//052
	&Snobilikat,	//053
	&Enton,			//054
	&Entoron,		//055
	&Menki,			//056
	&Rasaff,		//057
	&Fukano,		//058
	&Arkani,		//059
	&Quapsel,		//060
	&Quaputzi,		//061
	&Quappo,		//062
	&Abra,			//063
	&Kadabra,		//064
	&Simsala,		//065
	&Machollo,		//066
	&Maschock,		//067
	&Machomei,		//068
	&Knofensa,		//069
	&Ultrigaria,	//070
	&Sarzenia,		//071
	&Tentacha,		//072
	&Tentoxa,		//073
	&Kleinstein,	//074
	&Georok,		//075
	&Geowaz,		//076
	&Ponita,		//077
	&Gallopa,		//078
	&Flegmon,		//079
	&Lahmus,		//080
	&Magnetilo,		//081
	&Magneton,		//082
	&Porenta,		//083
	&Dodu,			//084
	&Dodri,			//085
	&Jurob,			//086
	&Jugong,		//087
	&Sleima,		//088
	&Sleimok,		//089
	&Muschas,		//090
	&Austos,		//091
	&Nebulak,		//092
	&Alpollo,		//093
	&Gengar,		//094
	&Onix,			//095
	&Traumato,		//096
	&Hypno,			//097
	&Krabby,		//098
	&Kingler,		//099
	&Voltobal,		//100
	&Lektrobal,		//101
	&Owei,			//102
	&Kokowei,		//103
	&Tragosso,		//104
	&Knogga,		//105
	&Kicklee,		//106
	&Nockchan,		//107
	&Schlurp,		//108
	&Smogon,		//109
	&Smogmog,		//110
	&Rihorn,		//111
	&Rizeros,		//112
	&Chaneira,		//113
	&Tangela,		//114
	&Kangama,		//115
	&Seeper,		//116
	&Seemon,		//117
	&Goldini,		//118
	&Golking,		//119
	&Sterndu,		//120
	&Starmie,		//121
	&Pantimos,		//122
	&Sichlor,		//123
	&Rossana,		//124
	&Elektek,		//125
	&Magmar,		//126
	&Pinsir,		//127
	&Tauros,		//128
	&Karpador,		//129
	&Garados,		//130
	&Lapras,		//131
	&Ditto,			//132
	&Evoli,			//133
	&Aquana,		//134
	&Blitza,		//135
	&Flamara,		//136
	&Porygon,		//137
	&Amonitas,		//138
	&Amoroso,		//139
	&Kabuto,		//140
	&Kabutops,		//141
	&Aerodactyl,	//142
	&Relaxo,		//143
	&Arktos,		//144
	&Zapdos,		//145
	&Lavados,		//146
	&Dratini,		//147
	&Dragonir,		//148
	&Dragoran,		//149
	&Mewtu,			//150
	&Mew			//151
};
