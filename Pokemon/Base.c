#include "Base.h"
#include "Attacks.h"

const struct Learnable MewLearn[] = {
	{ 1, ATTACKE_PFUND},
	{10, ATTACKE_WANDLER},
	{20, ATTACKE_MEGAHIEB},
	{30, ATTACKE_METRONOM},
	{40, ATTACKE_PSYCHOKINESE}
};
const struct Learnables MewLearns = {5 , MewLearn};

const struct Learnable MewtuLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_KONFUSION },
	{  1, ATTACKE_STERNSCHAUER },
	{  1, ATTACKE_PSYCHOKINESE },
	{ 63, ATTACKE_BARRIERE },
	{ 66, ATTACKE_PSYCHOKINESE },
	{ 70, ATTACKE_GENESUNG },
	{ 75, ATTACKE_WEISSNEBEL },
	{ 81, ATTACKE_AMNESIE }
};
const struct Learnables MewtuLearns = {9,MewtuLearn};

const struct Learnable DragoranLearn[] = {
	{1, ATTACKE_AGILITAET},
	{1, ATTACKE_DONNERWELLE},
	{1, ATTACKE_SILBERBLICK},
	{1, ATTACKE_WICKEL},
	{10,ATTACKE_DONNERWELLE},
	{20,ATTACKE_AGILITAET},
	{35,ATTACKE_SLAM},
	{45,ATTACKE_DRACHENWUT},
	{60,ATTACKE_HYPERSTRAHL}
};
const struct Learnables DragoranLearns = { 9,DragoranLearn };

const struct Learnable DragonirLearn[] = {
	{1 , ATTACKE_DONNERWELLE},
	{1 , ATTACKE_SILBERBLICK},
	{1 , ATTACKE_WICKEL },
	{10, ATTACKE_DONNERWELLE},
	{20, ATTACKE_AGILITAET},
	{35, ATTACKE_SLAM},
	{45, ATTACKE_DRACHENWUT},
	{55, ATTACKE_HYPERSTRAHL}
};
const struct Learnables DragonirLearns = { 8,DragonirLearn };

const struct Learnable DratiniLearn[] = {
	{ 1,  ATTACKE_WICKEL },
	{ 1,  ATTACKE_SILBERBLICK},
	{ 10,  ATTACKE_DONNERWELLE},
	{ 20,  ATTACKE_AGILITAET},
	{ 30,  ATTACKE_SLAM},
	{ 40,  ATTACKE_DRACHENWUT},
	{ 50,  ATTACKE_HYPERSTRAHL}
};
const struct Learnables DratiniLearns = { 7,DratiniLearn };

const struct Learnable LavadosLearn[] = {
	{1,ATTACKE_SCHNABEL},
	{1,ATTACKE_FEUERWIRBEL},
	{51, ATTACKE_SILBERBLICK},
	{55, ATTACKE_AGILITAET},
	{60,ATTACKE_HIMMELSFEGER}
};
const struct Learnables LavadosLearns = {5,LavadosLearn };

const struct Learnable ZapdosLearn[] = {
	{ 1,  ATTACKE_BOHRSCHNABEL },
	{ 1,  ATTACKE_DONNERSCHOCK },
	{ 51, ATTACKE_DONNER },
	{ 55, ATTACKE_AGILITAET },
	{ 60, ATTACKE_LICHTSCHILD }
};
const struct Learnables ZapdosLearns = { 5,ZapdosLearn };

const struct Learnable ArktosLearn[] = {
	{ 1,  ATTACKE_EISSTRAHL },
	{ 1,  ATTACKE_SCHNABEL },
	{ 51, ATTACKE_BLIZZARD },
	{ 55, ATTACKE_AGILITAET },
	{ 60, ATTACKE_WEISSNEBEL }
};
const struct Learnables ArktosLearns = { 5,ArktosLearn };

const struct Learnable RelaxoLearn[] = {
	{ 1 , ATTACKE_KOPFNUSS },
	{ 1 , ATTACKE_AMNESIE },
	{ 1 , ATTACKE_ERHOLUNG },
	{ 35, ATTACKE_BODYSLAM },
	{ 41, ATTACKE_HAERTNER },
	{ 48, ATTACKE_RISIKOTACKLE},
	{ 56, ATTACKE_HYPERSTRAHL}
};
const struct Learnables RelaxoLearns = { 7,RelaxoLearn };

const struct Learnable AerodactylLearn[] = {
	{1, ATTACKE_AGILITAET},
	{1,ATTACKE_FLUEGELSCHLAG},
	{33,ATTACKE_SUPERSCHALL},
	{38,ATTACKE_BISS},
	{45, ATTACKE_BODYCHECK},
	{54,ATTACKE_HYPERSTRAHL}
};
const struct Learnables AerodactylLearns = {6,AerodactylLearn };

const struct Learnable KabutopsLearn[] = {
	{1,ATTACKE_KRATZER},
	{1,ATTACKE_ABSORBER},
	{1,ATTACKE_HAERTNER},
	{34,ATTACKE_ABSORBER},
	{39,ATTACKE_SCHLITZER},
	{46,ATTACKE_SILBERBLICK},
	{53,ATTACKE_HYDROPUMPE}
};
const struct Learnables KabutopsLearns = { 7,KabutopsLearn };

const struct Learnable KabutoLearn[] = {
	{ 1,ATTACKE_KRATZER },
	{ 1,ATTACKE_HAERTNER },
	{ 34,ATTACKE_ABSORBER },
	{ 39,ATTACKE_SCHLITZER },
	{ 44,ATTACKE_SILBERBLICK },
	{ 49,ATTACKE_HYDROPUMPE }
};
const struct Learnables KabutoLearns = { 6,KabutoLearn };

const struct Learnable AmorosoLearn[] = {
	{ 1,ATTACKE_AQUAKNARRE },
	{ 1,ATTACKE_HORNATTACKE },
	{ 1,ATTACKE_PANZERSCHUTZ },
	{ 34,ATTACKE_HORNATTACKE},
	{ 39,ATTACKE_SILBERBLICK },
	{ 44,ATTACKE_DORNKANONE },
	{ 49,ATTACKE_HYDROPUMPE }
};
const struct Learnables AmorosoLearns = { 7,AmorosoLearn };

const struct Learnable AmonitasLearn[] = {
	{ 1,ATTACKE_AQUAKNARRE },
	{ 1,ATTACKE_PANZERSCHUTZ },
	{ 34,ATTACKE_HORNATTACKE },
	{ 39,ATTACKE_SILBERBLICK },
	{ 44,ATTACKE_DORNKANONE },
	{ 49,ATTACKE_HYDROPUMPE }
};
const struct Learnables AmonitasLearns = { 6,AmonitasLearn };

const struct Learnable PorygonLearn[] = {
	{ 1 ,ATTACKE_TACKLE },
	{ 1 ,ATTACKE_SCHAERFER },
	{ 1 ,ATTACKE_UMWANDLUNG },
	{ 23,ATTACKE_PSYSTRAHL },
	{ 28,ATTACKE_GENESUNG },
	{ 35,ATTACKE_AGILITAET },
	{ 42,ATTACKE_TRIPLETTE}
};
const struct Learnables PorygonLearns = { 7,PorygonLearn };

const struct Learnable FlamaraLearn[] = {
	{ 1 ,ATTACKE_GLUT },
	{ 1 ,ATTACKE_RUCKZUCKHIEB },
	{ 1 ,ATTACKE_SANDWIRBEL },
	{ 1,ATTACKE_TACKLE },
	{ 27,ATTACKE_RUCKZUCKHIEB },
	{ 31,ATTACKE_GLUT },
	{ 37,ATTACKE_RUTENSCHLAG },
	{ 40,ATTACKE_BISS },
	{ 42,ATTACKE_SILBERBLICK },
	{ 44,ATTACKE_FEUERWIRBEL },
	{ 48,ATTACKE_RASEREI },
	{ 54,ATTACKE_FLAMMENWURF }
};
const struct Learnables FlamaraLearns = { 12,FlamaraLearn };

const struct Learnable BlitzaLearn[] = {
	{ 1 ,ATTACKE_DONNERSCHOCK },
	{ 1 ,ATTACKE_RUCKZUCKHIEB },
	{ 1 ,ATTACKE_SANDWIRBEL },
	{ 1 ,ATTACKE_TACKLE },
	{ 27,ATTACKE_RUCKZUCKHIEB },
	{ 31,ATTACKE_DONNERSCHOCK },
	{ 37,ATTACKE_RUTENSCHLAG },
	{ 40,ATTACKE_DONNERWELLE },
	{ 42,ATTACKE_DOPPELKICK },
	{ 44,ATTACKE_AGILITAET },
	{ 48,ATTACKE_NADELRAKETE },
	{ 54,ATTACKE_DONNER }
};
const struct Learnables BlitzaLearns = { 12,BlitzaLearn };

const struct Learnable AquanaLearn[] = {
	{ 1 ,ATTACKE_AQUAKNARRE },
	{ 1 ,ATTACKE_RUCKZUCKHIEB },
	{ 1 ,ATTACKE_SANDWIRBEL },
	{ 1 ,ATTACKE_TACKLE },
	{ 27,ATTACKE_RUCKZUCKHIEB },
	{ 31,ATTACKE_AQUAKNARRE },
	{ 37,ATTACKE_RUTENSCHLAG },
	{ 40,ATTACKE_BISS },
	{ 42,ATTACKE_SAUREPANZER },
	{ 44,ATTACKE_DUNKELNEBEL },
	{ 48,ATTACKE_WEISSNEBEL },
	{ 54,ATTACKE_HYDROPUMPE }
};
const struct Learnables AquanaLearns = { 12,AquanaLearn };

const struct Learnable EvoliLearn[] = {
	{ 1 ,ATTACKE_SANDWIRBEL },
	{ 1 ,ATTACKE_TACKLE },
	{ 27,ATTACKE_RUCKZUCKHIEB },
	{ 31,ATTACKE_RUTENSCHLAG },
	{ 37,ATTACKE_BISS },
	{ 45,ATTACKE_BODYCHECK }	
};
const struct Learnables EvoliLearns = { 6,EvoliLearn };

const struct Learnable DittoLearn[] = {
	{ 1 ,ATTACKE_WANDLER }
};
const struct Learnables DittoLearns = { 1,DittoLearn };

const struct Learnable LaprasLearn[] = {
	{ 1 ,ATTACKE_AQUAKNARRE },
	{ 1 ,ATTACKE_HEULER },
	{ 16,ATTACKE_GESANG },
	{ 20,ATTACKE_WEISSNEBEL },
	{ 25,ATTACKE_BODYSLAM },
	{ 31,ATTACKE_KONFUSTRAHL },
	{ 38,ATTACKE_EISSTRAHL},
	{ 46,ATTACKE_HYDROPUMPE}
};
const struct Learnables LaprasLearns = { 8,LaprasLearn };

const struct Learnable GaradosLearn[] = {
	{ 1 ,ATTACKE_BISS },
	{ 1 ,ATTACKE_DRACHENWUT },
	{ 1,ATTACKE_SILBERBLICK },
	{ 1,ATTACKE_HYDROPUMPE },
	{ 1,ATTACKE_TACKLE }, //Nur in der Gelben Edition
	{ 20,ATTACKE_BISS },
	{ 25,ATTACKE_DRACHENWUT },
	{ 32,ATTACKE_SILBERBLICK },
	{ 41,ATTACKE_HYDROPUMPE},
	{ 52,ATTACKE_HYPERSTRAHL}
};
const struct Learnables GaradosLearns = { 10,GaradosLearn };

const struct Learnable KarpadorLearn[] = {
	{ 1 ,ATTACKE_PLATSCHER },
	{ 1 ,ATTACKE_TACKLE }
};
const struct Learnables KarpadorLearns = { 2,KarpadorLearn };

const struct Learnable TaurosLearn[] = {
	{  1,ATTACKE_TACKLE },
	{ 21,ATTACKE_STAMPFER },
	{ 28,ATTACKE_RUTENSCHLAG },
	{ 35,ATTACKE_SILBERBLICK },
	{ 44,ATTACKE_RASEREI },
	{ 51,ATTACKE_BODYCHECK }
};
const struct Learnables TaurosLearns = { 6,TaurosLearn };

const struct Learnable PinsirLearn[] = {
	{ 1,ATTACKE_KLAMMER },
	{ 21,ATTACKE_KLAMMERGRIFF },
	{ 25,ATTACKE_GEOWURF },
	{ 30,ATTACKE_GUILLOTINE },
	{ 36,ATTACKE_ENERGIEFOKUS },
	{ 43,ATTACKE_HAERTNER },
	{ 49,ATTACKE_SCHLITZER},
	{ 54,ATTACKE_SCHWERTTANZ}
};
const struct Learnables PinsirLearns = { 8,PinsirLearn };

const struct Learnable MagmarLearn[] = {
	{  1,ATTACKE_GLUT },
	{ 36,ATTACKE_SILBERBLICK },
	{ 39,ATTACKE_KONFUSTRAHL },
	{ 43,ATTACKE_FEUERSCHLAG },
	{ 48,ATTACKE_RAUCHWOLKE },
	{ 52,ATTACKE_SMOG },
	{ 55,ATTACKE_FLAMMENWURF }
};
const struct Learnables MagmarLearns = { 7,MagmarLearn };

const struct Learnable ElektekLearn[] = {
	{ 1 ,ATTACKE_SILBERBLICK },
	{ 1 ,ATTACKE_RUCKZUCKHIEB },
	{ 34,ATTACKE_DONNERSCHOCK },
	{ 37,ATTACKE_KREIDESCHREI },
	{ 42,ATTACKE_DONNERSCHLAG },
	{ 49,ATTACKE_LICHTSCHILD },
	{ 54,ATTACKE_DONNER }
};
const struct Learnables ElektekLearns = { 7,ElektekLearn };

const struct Learnable RossanaLearn[] = {
	{ 1 ,ATTACKE_PFUND },
	{ 1 ,ATTACKE_TODESKUSS },
	{ 34,ATTACKE_SCHLECKER },
	{ 37,ATTACKE_DUPLEXHIEB },
	{ 42,ATTACKE_EISHIEB },
	{ 49,ATTACKE_FUCHTLER },
	{ 54,ATTACKE_BLIZZARD }
};
const struct Learnables RossanaLearns = { 7,RossanaLearn };

const struct Learnable SichlorLearn[] = {
	{ 1 ,ATTACKE_RUCKZUCKHIEB },
	{ 17,ATTACKE_SILBERBLICK },
	{ 20,ATTACKE_ENERGIEFOKUS },
	{ 24,ATTACKE_DOPPELTEAM },
	{ 29,ATTACKE_SCHLITZER },
	{ 35,ATTACKE_SCHWERTTANZ },
	{ 42,ATTACKE_AGILITAET },
	{ 50,ATTACKE_FLUEGELSCHLAG}
};
const struct Learnables SichlorLearns = { 8,SichlorLearn };

const struct Learnable PantimosLearn[] = {
	{ 1 ,ATTACKE_BARRIERE },
	{ 1 ,ATTACKE_KONFUSION },
	{ 15,ATTACKE_KONFUSION },
	{ 23,ATTACKE_LICHTSCHILD },
	{ 31,ATTACKE_DUPLEXHIEB },
	{ 39,ATTACKE_MEDITATION },
	{ 47,ATTACKE_DELEGATOR }
};
const struct Learnables PantimosLearns = { 7,PantimosLearn };

const struct Learnable StarmieLearn[] = {
	{ 1 ,ATTACKE_AQUAKNARRE },
	{ 1 ,ATTACKE_HAERTNER },
	{ 1,ATTACKE_TACKLE }
};
const struct Learnables StarmieLearns = { 3,StarmieLearn };

const struct Learnable SternduLearn[] = {
	{ 1 ,ATTACKE_TACKLE },
	{ 17 ,ATTACKE_AQUAKNARRE },
	{ 22 ,ATTACKE_HAERTNER },
	{ 27,ATTACKE_GENESUNG },
	{ 32,ATTACKE_STERNSCHAUER },
	{ 37,ATTACKE_KOMPRIMATOR },
	{ 42,ATTACKE_LICHTSCHILD },
	{ 47,ATTACKE_HYDROPUMPE }
};
const struct Learnables SternduLearns = { 8,SternduLearn };

const struct Learnable GolkingLearn[] = {
	{ 1 ,ATTACKE_RUTENSCHLAG },
	{ 1 ,ATTACKE_SCHNABEL },
	{ 1 ,ATTACKE_SUPERSCHALL },
	{ 19,ATTACKE_SUPERSCHALL },
	{ 24,ATTACKE_HORNATTACKE },
	{ 30,ATTACKE_FURIENSCHLAG },
	{ 39,ATTACKE_KASKADE },
	{ 48,ATTACKE_HORNBOHRER },
	{ 54,ATTACKE_AGILITAET}
};
const struct Learnables GolkingLearns = { 9,GolkingLearn };

const struct Learnable GoldiniLearn[] = {
	{ 1 ,ATTACKE_RUTENSCHLAG },
	{ 1 ,ATTACKE_SCHNABEL },
	{ 19,ATTACKE_SUPERSCHALL },
	{ 24,ATTACKE_HORNATTACKE },
	{ 30,ATTACKE_FURIENSCHLAG },
	{ 37,ATTACKE_KASKADE },
	{ 45,ATTACKE_HORNBOHRER },
	{ 54,ATTACKE_AGILITAET }
};
const struct Learnables GoldiniLearns = { 8,GoldiniLearn };

const struct Learnable SeemonLearn[] = {
	{ 1 ,ATTACKE_BLUBBER },
	{ 1 ,ATTACKE_RAUCHWOLKE },
	{ 19,ATTACKE_RAUCHWOLKE },
	{ 24,ATTACKE_SILBERBLICK },
	{ 30,ATTACKE_AQUAKNARRE },
	{ 41,ATTACKE_AGILITAET },
	{ 52,ATTACKE_HYDROPUMPE }
};
const struct Learnables SeemonLearns = { 7,SeemonLearn };

const struct Learnable SeeperLearn[] = {
	{ 1 ,ATTACKE_BLUBBER },
	{ 1 ,ATTACKE_RAUCHWOLKE },
	{ 24,ATTACKE_SILBERBLICK },
	{ 30,ATTACKE_AQUAKNARRE },
	{ 37,ATTACKE_AGILITAET },
	{ 45,ATTACKE_HYDROPUMPE }
};
const struct Learnables SeeperLearns = { 6,SeeperLearn };

const struct Learnable KangamaLearn[] = {
	{ 1 ,ATTACKE_KOMETENHIEB },
	{ 1 ,ATTACKE_RASEREI },
	{ 26,ATTACKE_BISS },
	{ 31,ATTACKE_RUTENSCHLAG },
	{ 36,ATTACKE_MEGAHIEB },
	{ 41,ATTACKE_SILBERBLICK },
	{ 46,ATTACKE_IRRSCHLAG}
};
const struct Learnables KangamaLearns = { 7,KangamaLearn };

const struct Learnable TangelaLearn[] = {
	{ 1 ,ATTACKE_KLAMMERGRIFF },
	{ 1 ,ATTACKE_UMKLAMMERUNG },
	{ 27,ATTACKE_ABSORBER},
	{ 29,ATTACKE_RANKENHIEB },
	{ 32,ATTACKE_GIFTPUDER },
	{ 36,ATTACKE_STACHELSPORE },
	{ 39,ATTACKE_SCHLAFPUDER },
	{ 45,ATTACKE_SLAM },
	{ 49,ATTACKE_WACHSTUM}
};
const struct Learnables TangelaLearns = { 9,TangelaLearn };

const struct Learnable ChaneiraLearn[] = {
	{ 1 ,ATTACKE_PFUND },
	{ 1 ,ATTACKE_RUTENSCHLAG },
	{ 12,ATTACKE_DUPLEXHIEB },
	{ 24,ATTACKE_GESANG },
	{ 30,ATTACKE_HEULER },
	{ 38,ATTACKE_KOMPRIMATOR },
	{ 44,ATTACKE_EINIGLER },
	{ 48,ATTACKE_LICHTSCHILD },
	{ 54,ATTACKE_RISIKOTACKLE }
};
const struct Learnables ChaneiraLearns = { 9,ChaneiraLearn };

const struct Learnable RizerosLearn[] = {
	{ 1 ,ATTACKE_FURIENSCHLAG },
	{ 1 ,ATTACKE_HORNATTACKE },
	{ 1 ,ATTACKE_RUTENSCHLAG },
	{ 1 ,ATTACKE_STAMPFER },
	{ 30,ATTACKE_STAMPFER},
	{ 35,ATTACKE_RUTENSCHLAG },
	{ 40,ATTACKE_FURIENSCHLAG },
	{ 48,ATTACKE_HORNBOHRER },
	{ 55,ATTACKE_SILBERBLICK },
	{ 64,ATTACKE_BODYCHECK }
};
const struct Learnables RizerosLearns = { 10,RizerosLearn };

const struct Learnable RihornLearn[] = {
	{ 1 ,ATTACKE_HORNATTACKE },
	{ 30,ATTACKE_STAMPFER },
	{ 35,ATTACKE_RUTENSCHLAG },
	{ 40,ATTACKE_FURIENSCHLAG },
	{ 48,ATTACKE_HORNBOHRER },
	{ 50,ATTACKE_SILBERBLICK },
	{ 55,ATTACKE_BODYCHECK }
};
const struct Learnables RihornLearns = { 7,RihornLearn };

const struct Learnable SmogmogLearn[] = {
	{ 1 ,ATTACKE_SCHLAMMBAD },
	{ 1 ,ATTACKE_SMOG },
	{ 1 ,ATTACKE_TACKLE },
	{ 32,ATTACKE_SCHLAMMBAD },
	{ 39,ATTACKE_RAUCHWOLKE },
	{ 43,ATTACKE_FINALE },
	{ 49,ATTACKE_DUNKELNEBEL },
	{ 53,ATTACKE_EXPLOSION}
};
const struct Learnables SmogmogLearns = { 8,SmogmogLearn };

const struct Learnable SmogonLearn[] = {
	
	{ 1 ,ATTACKE_TACKLE },
	{ 1 ,ATTACKE_SMOG },
	{ 32,ATTACKE_SCHLAMMBAD },
	{ 37,ATTACKE_RAUCHWOLKE },
	{ 40,ATTACKE_FINALE },
	{ 45,ATTACKE_DUNKELNEBEL },
	{ 48,ATTACKE_EXPLOSION }
};
const struct Learnables SmogonLearns = { 7,SmogonLearn };

const struct Learnable SchlurpLearn[] = {

	{ 1 ,ATTACKE_WICKEL },
	{ 1 ,ATTACKE_SUPERSCHALL },
	{ 7 ,ATTACKE_STAMPFER },
	{ 15,ATTACKE_AUSSETZER },
	{ 23,ATTACKE_EINIGLER },
	{ 31,ATTACKE_SLAM },
	{ 39,ATTACKE_KREIDESCHREI }
};
const struct Learnables SchlurpLearns = { 7,SchlurpLearn };

const struct Learnable NockchanLearn[] = {

	{ 1 ,ATTACKE_KOMETENHIEB },
	{ 1 ,ATTACKE_AGILITAET },
	{ 33,ATTACKE_FEUERSCHLAG },
	{ 38,ATTACKE_EISHIEB },
	{ 43,ATTACKE_DONNERSCHLAG },
	{ 48,ATTACKE_MEGAHIEB },
	{ 53,ATTACKE_KONTER }
};
const struct Learnables NockchanLearns = { 7,NockchanLearn };

const struct Learnable KickleeLearn[] = {

	{ 1 ,ATTACKE_DOPPELKICK },
	{ 1 ,ATTACKE_MEDITATION },
	{ 33,ATTACKE_FEGEKICK },
	{ 38,ATTACKE_SPRUNGKICK },
	{ 43,ATTACKE_ENERGIEFOKUS },
	{ 48,ATTACKE_TURMKICK },
	{ 53,ATTACKE_MEGAKICK }
};
const struct Learnables KickleeLearns = { 7,KickleeLearn };

const struct Learnable KnoggaLearn[] = {

	{ 1 ,ATTACKE_ENERGIEFOKUS },
	{ 1 ,ATTACKE_HEULER },
	{ 10,ATTACKE_KNOCHENKEULE },
	{ 13,ATTACKE_RUTENSCHLAG },
	{ 18,ATTACKE_KOPFNUSS },
	{ 25,ATTACKE_SILBERBLICK },
	{ 33,ATTACKE_ENERGIEFOKUS },
	{ 42,ATTACKE_FUCHTLER},
	{ 48,ATTACKE_KNOCHMERANG},
	{ 55,ATTACKE_RASEREI}
};
const struct Learnables KnoggaLearns = { 10,KnoggaLearn };

const struct Learnable TragossoLearn[] = {

	{ 1 ,ATTACKE_HEULER },
	{ 10,ATTACKE_KNOCHENKEULE },
	{ 13,ATTACKE_RUTENSCHLAG },
	{ 18,ATTACKE_KOPFNUSS },
	{ 25,ATTACKE_SILBERBLICK },
	{ 31,ATTACKE_ENERGIEFOKUS },
	{ 38,ATTACKE_FUCHTLER },
	{ 43,ATTACKE_KNOCHMERANG },
	{ 46,ATTACKE_RASEREI }
};
const struct Learnables TragossoLearns = { 9,TragossoLearn };

const struct Learnable KokoweiLearn[] = {

	{ 1 ,ATTACKE_HYPNOSE },
	{ 1 ,ATTACKE_STAKKATO },
	{ 28,ATTACKE_STAMPFER }
};
const struct Learnables KokoweiLearns = { 3,KokoweiLearn };

const struct Learnable OweiLearn[] = {

	{ 1 ,ATTACKE_HYPNOSE },
	{ 1 ,ATTACKE_STAKKATO },
	{ 25,ATTACKE_REFLEKTOR },
	{ 28,ATTACKE_EGELSAMEN },
	{ 32,ATTACKE_STACHELSPORE },
	{ 37,ATTACKE_GIFTPUDER },
	{ 42,ATTACKE_SOLARSTRAHL },
	{ 48,ATTACKE_SCHLAFPUDER }
};
const struct Learnables OweiLearns = { 8,OweiLearn };

const struct Learnable LektrobalLearn[] = {

	{ 1 ,ATTACKE_KREIDESCHREI },
	{ 1 ,ATTACKE_TACKLE },
	{ 1 ,ATTACKE_ULTRASCHALL },
	{ 17,ATTACKE_ULTRASCHALL },
	{ 22,ATTACKE_FINALE },
	{ 29,ATTACKE_LICHTSCHILD },
	{ 40,ATTACKE_STERNSCHAUER },
	{ 50,ATTACKE_EXPLOSION }
};
const struct Learnables LektrobalLearns = { 8,LektrobalLearn };

const struct Learnable VoltobalLearn[] = {

	{ 1 ,ATTACKE_KREIDESCHREI },
	{ 1 ,ATTACKE_TACKLE },
	{ 17,ATTACKE_ULTRASCHALL },
	{ 22,ATTACKE_FINALE },
	{ 29,ATTACKE_LICHTSCHILD },
	{ 36,ATTACKE_STERNSCHAUER },
	{ 43,ATTACKE_EXPLOSION }
};
const struct Learnables VoltobalLearns = { 7,VoltobalLearn };

const struct Learnable KinglerLearn[] = {

	{ 1 ,ATTACKE_BLUBBER },
	{ 1 ,ATTACKE_KLAMMER },
	{ 1,ATTACKE_SILBERBLICK },
	{ 20,ATTACKE_KLAMMER },
	{ 25,ATTACKE_GUILLOTINE },
	{ 34,ATTACKE_STAMPFER },
	{ 42,ATTACKE_KRABBHAMMER },
	{ 49,ATTACKE_HAERTNER}
};
const struct Learnables KinglerLearns = { 8,KinglerLearn };


const struct Learnable KrabbyLearn[] = {

	{ 1 ,ATTACKE_SILBERBLICK },
	{ 1 ,ATTACKE_BLUBBER },
	{ 20,ATTACKE_KLAMMER },
	{ 25,ATTACKE_GUILLOTINE },
	{ 30,ATTACKE_STAMPFER },
	{ 35,ATTACKE_KRABBHAMMER },
	{ 40,ATTACKE_HAERTNER }
};
const struct Learnables KrabbyLearns = { 7,KrabbyLearn };

const struct Learnable HypnoLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_KONFUSION },
	{  1, ATTACKE_HYPNOSE },
	{  1, ATTACKE_PFUND },
	{ 12, ATTACKE_AUSSETZER },
	{ 17, ATTACKE_KONFUSION },
	{ 24, ATTACKE_KOPFNUSS },
	{ 33, ATTACKE_GIFTWOLKE },
	{ 37, ATTACKE_PSYCHOKINESE },
	{ 43, ATTACKE_MEDITATION }
};
const struct Learnables HypnoLearns = { 10, HypnoLearn };

const struct Learnable TraumatoLearn[] = {
	{  1, ATTACKE_PFUND },
	{  1, ATTACKE_HYPNOSE },
	{ 12, ATTACKE_AUSSETZER },
	{ 17, ATTACKE_KONFUSION },
	{ 24, ATTACKE_KOPFNUSS },
	{ 29, ATTACKE_GIFTWOLKE },
	{ 32, ATTACKE_PSYCHOKINESE },
	{ 37, ATTACKE_MEDITATION }
};
const struct Learnables TraumatoLearns = { 8, TraumatoLearn };

const struct Learnable OnixLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_KREIDESCHREI },
	{ 15, ATTACKE_KLAMMERGRIFF },
	{ 19, ATTACKE_STEINWURF },
	{ 25, ATTACKE_RASEREI },
	{ 33, ATTACKE_SLAM },
	{ 43, ATTACKE_HAERTNER }
};
const struct Learnables OnixLearns = { 7, OnixLearn };

const struct Learnable GengarLearn[] = {
	{  1, ATTACKE_KONFUSTRAHL },
	{  1, ATTACKE_NACHTNEBEL },
	{  1, ATTACKE_SCHLECKER },
	{ 29, ATTACKE_HYPNOSE },
	{ 38, ATTACKE_TRAUMFRESSER }
};
const struct Learnables GengarLearns = { 5, GengarLearn };

const struct Learnable AlpolloLearn[] = {
	{  1, ATTACKE_NACHTNEBEL },
	{  1, ATTACKE_KONFUSTRAHL },
	{  1, ATTACKE_SCHLECKER },
	{ 29, ATTACKE_HYPNOSE },
	{ 38, ATTACKE_TRAUMFRESSER }
};
const struct Learnables AlpolloLearns = { 5, AlpolloLearn };

const struct Learnable NebulakLearn[] = {
	{  1, ATTACKE_NACHTNEBEL },
	{  1, ATTACKE_KONFUSTRAHL },
	{  1, ATTACKE_SCHLECKER },
	{ 27, ATTACKE_HYPNOSE },
	{ 35, ATTACKE_TRAUMFRESSER }
};
const struct Learnables NebulakLearns = { 5, NebulakLearn };

const struct Learnable AustosLearn[] = {
	{  1, ATTACKE_AURORASTRAHL },
	{  1, ATTACKE_PANZERSCHUTZ },
	{  1, ATTACKE_SCHNAPPER },
	{  1, ATTACKE_SUPERSCHALL },
	{ 50, ATTACKE_DORNKANONE }
};
const struct Learnables AustosLearns = { 5, AustosLearn };

const struct Learnable MuschasLearn[] = {
	{  1, ATTACKE_PANZERSCHUTZ },
	{  1, ATTACKE_TACKLE },
	{ 18, ATTACKE_SUPERSCHALL },
	{ 23, ATTACKE_SCHNAPPER },
	{ 30, ATTACKE_AURORASTRAHL },
	{ 39, ATTACKE_SILBERBLICK },
	{ 50, ATTACKE_EISSTRAHL }
};
const struct Learnables MuschasLearns = { 7, MuschasLearn };

const struct Learnable SleimokLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_GIFTWOLKE },
	{  1, ATTACKE_PFUND },
	{ 30, ATTACKE_GIFTWOLKE },
	{ 33, ATTACKE_KOMPRIMATOR },
	{ 37, ATTACKE_SCHLAMMBAD },
	{ 45, ATTACKE_HAERTNER },
	{ 53, ATTACKE_KREIDESCHREI },
	{ 60, ATTACKE_SAUREPANZER }
};
const struct Learnables SleimokLearns = { 9, SleimokLearn };

const struct Learnable SleimaLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_PFUND },
	{ 30, ATTACKE_GIFTWOLKE },
	{ 33, ATTACKE_KOMPRIMATOR },
	{ 37, ATTACKE_SCHLAMMBAD },
	{ 42, ATTACKE_HAERTNER },
	{ 48, ATTACKE_KREIDESCHREI },
	{ 55, ATTACKE_SAUREPANZER }
};
const struct Learnables SleimaLearns = { 8, SleimaLearn };

const struct Learnable JugongLearn[] = {
	{  1, ATTACKE_AURORASTRAHL },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_KOPFNUSS },
	{ 30, ATTACKE_HEULER },
	{ 35, ATTACKE_AURORASTRAHL },
	{ 44, ATTACKE_ERHOLUNG },
	{ 50, ATTACKE_BODYCHECK },
	{ 56, ATTACKE_EISSTRAHL }
};
const struct Learnables JugongLearns = { 8, JugongLearn };

const struct Learnable JurobLearn[] = {
	{  1, ATTACKE_KOPFNUSS },
	{ 30, ATTACKE_HEULER },
	{ 35, ATTACKE_AURORASTRAHL },
	{ 40, ATTACKE_ERHOLUNG },
	{ 45, ATTACKE_BODYCHECK },
	{ 50, ATTACKE_EISSTRAHL }
};
const struct Learnables JurobLearns = { 6, JurobLearn };

const struct Learnable DodriLearn[] = {
	{  1, ATTACKE_FURIENSCHLAG },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_SCHNABEL },
	{ 20, ATTACKE_HEULER },
	{ 24, ATTACKE_FURIENSCHLAG },
	{ 30, ATTACKE_BOHRSCHNABEL },
	{ 39, ATTACKE_RASEREI },
	{ 45, ATTACKE_TRIPLETTE },
	{ 51, ATTACKE_AGILITAET }
};
const struct Learnables DodriLearns = { 9, DodriLearn };

const struct Learnable DoduLearn[] = {
	{  1, ATTACKE_SCHNABEL },
	{ 20, ATTACKE_HEULER },
	{ 24, ATTACKE_FURIENSCHLAG },
	{ 30, ATTACKE_BOHRSCHNABEL },
	{ 36, ATTACKE_RASEREI },
	{ 40, ATTACKE_TRIPLETTE },
	{ 44, ATTACKE_AGILITAET }
};
const struct Learnables DoduLearns = { 7, DoduLearn };

const struct Learnable PorentaLearn[] = {
	{  1, ATTACKE_SANDWIRBEL },
	{  1, ATTACKE_SCHNABEL },
	{  7, ATTACKE_SILBERBLICK },
	{ 15, ATTACKE_FURIENSCHLAG },
	{ 23, ATTACKE_SCHWERTTANZ },
	{ 31, ATTACKE_AGILITAET },
	{ 39, ATTACKE_SCHLITZER }
};
const struct Learnables PorentaLearns = { 7, PorentaLearn };

const struct Learnable MagnetonLearn[] = {
	{  1, ATTACKE_DONNERSCHOCK },
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_ULTRASCHALL },
	{ 21, ATTACKE_ULTRASCHALL },
	{ 25, ATTACKE_DONNERSCHOCK },
	{ 29, ATTACKE_SUPERSCHALL },
	{ 38, ATTACKE_DONNERWELLE },
	{ 46, ATTACKE_STERNSCHAUER },
	{ 54, ATTACKE_KREIDESCHREI }
};
const struct Learnables MagnetonLearns = { 9, MagnetonLearn };

const struct Learnable MagnetiloLearn[] = {
	{  1, ATTACKE_TACKLE },
	{ 21, ATTACKE_ULTRASCHALL },
	{ 25, ATTACKE_DONNERSCHOCK },
	{ 29, ATTACKE_SUPERSCHALL },
	{ 35, ATTACKE_DONNERWELLE },
	{ 41, ATTACKE_STERNSCHAUER },
	{ 47, ATTACKE_KREIDESCHREI }
};
const struct Learnables MagnetiloLearns = { 7, MagnetiloLearn };

const struct Learnable LahmusLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_KONFUSION },
	{  1, ATTACKE_KOPFNUSS },
	{ 18, ATTACKE_AUSSETZER },
	{ 22, ATTACKE_KOPFNUSS },
	{ 27, ATTACKE_HEULER },
	{ 33, ATTACKE_AQUAKNARRE },
	{ 37, ATTACKE_PANZERSCHUTZ },
	{ 44, ATTACKE_AMNESIE },
	{ 55, ATTACKE_PSYCHOKINESE }
};
const struct Learnables LahmusLearns = { 10, LahmusLearn };

const struct Learnable FlegmonLearn[] = {
	{  1, ATTACKE_KONFUSION },
	{ 18, ATTACKE_AUSSETZER },
	{ 22, ATTACKE_KOPFNUSS },
	{ 27, ATTACKE_HEULER },
	{ 33, ATTACKE_AQUAKNARRE },
	{ 40, ATTACKE_AMNESIE },
	{ 48, ATTACKE_PSYCHOKINESE }
};
const struct Learnables FlegmonLearns = { 7, FlegmonLearn };

const struct Learnable GallopaLearn[] = {
	{  1, ATTACKE_GLUT },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_STAMPFER },
	{ 30, ATTACKE_RUTENSCHLAG },
	{ 32, ATTACKE_STAMPFER },
	{ 35, ATTACKE_HEULER },
	{ 39, ATTACKE_FEUERWIRBEL },
	{ 47, ATTACKE_BODYCHECK },
	{ 55, ATTACKE_AGILITAET }
};
const struct Learnables GallopaLearns = { 10, GallopaLearn };

const struct Learnable PonitaLearn[] = {
	{  1, ATTACKE_GLUT },
	{ 30, ATTACKE_RUTENSCHLAG },
	{ 32, ATTACKE_STAMPFER },
	{ 35, ATTACKE_HEULER },
	{ 39, ATTACKE_FEUERWIRBEL },
	{ 43, ATTACKE_BODYCHECK },
	{ 48, ATTACKE_AGILITAET }
};
const struct Learnables PonitaLearns = { 7, PonitaLearn };

const struct Learnable GeowazLearn[] = {
	{  1, ATTACKE_EINIGLER },
	{  1, ATTACKE_TACKLE },
	{ 11, ATTACKE_EINIGLER },
	{ 16, ATTACKE_STEINWURF },
	{ 21, ATTACKE_FINALE },
	{ 29, ATTACKE_HAERTNER },
	{ 36, ATTACKE_ERDBEBEN },
	{ 43, ATTACKE_EXPLOSION }
};
const struct Learnables GeowazLearns = { 8, GeowazLearn };

const struct Learnable GeorokLearn[] = {
	{  1, ATTACKE_EINIGLER },
	{  1, ATTACKE_TACKLE },
	{ 11, ATTACKE_EINIGLER },
	{ 16, ATTACKE_STEINWURF },
	{ 21, ATTACKE_FINALE },
	{ 29, ATTACKE_HAERTNER },
	{ 36, ATTACKE_ERDBEBEN },
	{ 43, ATTACKE_EXPLOSION }
};
const struct Learnables GeorokLearns = { 8, GeorokLearn };

const struct Learnable KleinsteinLearn[] = {
	{  1, ATTACKE_TACKLE },
	{ 11, ATTACKE_EINIGLER },
	{ 16, ATTACKE_STEINWURF },
	{ 21, ATTACKE_FINALE },
	{ 26, ATTACKE_HAERTNER },
	{ 31, ATTACKE_ERDBEBEN },
	{ 36, ATTACKE_EXPLOSION }
};
const struct Learnables KleinsteinLearns = { 7, KleinsteinLearn };

const struct Learnable TentoxaLearn[] = {
	{  1, ATTACKE_SAEURE },
	{  1, ATTACKE_SUPERSCHALL },
	{  1, ATTACKE_WICKEL },
	{  7, ATTACKE_SUPERSCHALL },
	{ 13, ATTACKE_WICKEL },
	{ 18, ATTACKE_GIFTSTACHEL },
	{ 22, ATTACKE_AQUAKNARRE },
	{ 27, ATTACKE_UMKLAMMERUNG },
	{ 35, ATTACKE_BARRIERE },
	{ 43, ATTACKE_KREIDESCHREI },
	{ 50, ATTACKE_HYDROPUMPE }
};
const struct Learnables TentoxaLearns = { 11, TentoxaLearn };

const struct Learnable TentachaLearn[] = {
	{  1, ATTACKE_SAEURE },
	{  7, ATTACKE_SUPERSCHALL },
	{ 13, ATTACKE_WICKEL },
	{ 18, ATTACKE_GIFTSTACHEL },
	{ 22, ATTACKE_AQUAKNARRE },
	{ 27, ATTACKE_UMKLAMMERUNG },
	{ 33, ATTACKE_BARRIERE },
	{ 40, ATTACKE_KREIDESCHREI },
	{ 48, ATTACKE_HYDROPUMPE }
};
const struct Learnables TentachaLearns = { 9, TentachaLearn };

const struct Learnable SarzeniaLearn[] = {
	{  1, ATTACKE_RASIERBLATT },
	{  1, ATTACKE_SAEURE },
	{  1, ATTACKE_SCHLAFPUDER },
	{  1, ATTACKE_STACHELSPORE },
	{ 13, ATTACKE_WICKEL },
	{ 15, ATTACKE_GIFTPUDER },
	{ 18, ATTACKE_SCHLAFPUDER }
};
const struct Learnables SarzeniaLearns = { 7, SarzeniaLearn };

const struct Learnable UltrigariaLearn[] = {
	{  1, ATTACKE_RANKENHIEB },
	{  1, ATTACKE_WACHSTUM },
	{  1, ATTACKE_WICKEL },
	{ 13, ATTACKE_WICKEL },
	{ 15, ATTACKE_GIFTPUDER },
	{ 18, ATTACKE_SCHLAFPUDER },
	{ 23, ATTACKE_STACHELSPORE },
	{ 29, ATTACKE_SAEURE },
	{ 38, ATTACKE_RASIERBLATT },
	{ 49, ATTACKE_SLAM }
};
const struct Learnables UltrigariaLearns = { 10, UltrigariaLearn };

const struct Learnable KnofensaLearn[] = {
	{  1, ATTACKE_RANKENHIEB },
	{  1, ATTACKE_WACHSTUM },
	{ 13, ATTACKE_WICKEL },
	{ 15, ATTACKE_GIFTPUDER },
	{ 18, ATTACKE_SCHLAFPUDER },
	{ 21, ATTACKE_STACHELSPORE },
	{ 26, ATTACKE_SAEURE },
	{ 33, ATTACKE_RASIERBLATT },
	{ 42, ATTACKE_SLAM }
};
const struct Learnables KnofensaLearns = { 9, KnofensaLearn };

const struct Learnable MachomeiLearn[] = {
	{  1, ATTACKE_FUSSKICK },
	{  1, ATTACKE_KARATESCHLAG },
	{  1, ATTACKE_SILBERBLICK },
	{ 20, ATTACKE_FUSSKICK },
	{ 25, ATTACKE_SILBERBLICK },
	{ 36, ATTACKE_ENERGIEFOKUS },
	{ 44, ATTACKE_GEOWURF },
	{ 52, ATTACKE_UEBERROLLER }
};
const struct Learnables MachomeiLearns = { 8, MachomeiLearn };

const struct Learnable MaschockLearn[] = {
	{  1, ATTACKE_FUSSKICK },
	{  1, ATTACKE_KARATESCHLAG },
	{  1, ATTACKE_SILBERBLICK },
	{ 20, ATTACKE_FUSSKICK },
	{ 25, ATTACKE_SILBERBLICK },
	{ 36, ATTACKE_ENERGIEFOKUS },
	{ 44, ATTACKE_GEOWURF },
	{ 52, ATTACKE_UEBERROLLER }
};
const struct Learnables MaschockLearns = { 8, MaschockLearn };

const struct Learnable MacholloLearn[] = {
	{  1, ATTACKE_KARATESCHLAG },
	{ 20, ATTACKE_FUSSKICK },
	{ 25, ATTACKE_SILBERBLICK },
	{ 32, ATTACKE_ENERGIEFOKUS },
	{ 39, ATTACKE_GEOWURF },
	{ 46, ATTACKE_UEBERROLLER }
};
const struct Learnables MacholloLearns = { 6, MacholloLearn };

const struct Learnable SimsalaLearn[] = {
	{  1, ATTACKE_PSYKRAFT },
	{  1, ATTACKE_TELEPORT },
	{ 16, ATTACKE_KONFUSION },
	{ 20, ATTACKE_AUSSETZER },
	{ 27, ATTACKE_PSYSTRAHL },
	{ 31, ATTACKE_GENESUNG },
	{ 38, ATTACKE_PSYCHOKINESE },
	{ 42, ATTACKE_REFLEKTOR }
};
const struct Learnables SimsalaLearns = { 8, SimsalaLearn };

const struct Learnable KadabraLearn[] = {
	{  1, ATTACKE_PSYKRAFT },
	{  1, ATTACKE_TELEPORT },
	{ 16, ATTACKE_KONFUSION },
	{ 20, ATTACKE_AUSSETZER },
	{ 27, ATTACKE_PSYSTRAHL },
	{ 31, ATTACKE_GENESUNG },
	{ 38, ATTACKE_PSYCHOKINESE },
	{ 42, ATTACKE_REFLEKTOR }
};
const struct Learnables KadabraLearns = { 8, KadabraLearn };

const struct Learnable AbraLearn[] = {
	{ 1, ATTACKE_TELEPORT }
};
const struct Learnables AbraLearns = { 1, AbraLearn };

const struct Learnable QuappoLearn[] = {
	{  1, ATTACKE_AQUAKNARRE },
	{  1, ATTACKE_BODYSLAM },
	{  1, ATTACKE_DUPLEXHIEB },
	{  1, ATTACKE_HYPNOSE },
	{ 16, ATTACKE_HYPNOSE },
	{ 19, ATTACKE_AQUAKNARRE },
};
const struct Learnables QuappoLearns = { 6, QuappoLearn };

const struct Learnable QuaputziLearn[] = {
	{  1, ATTACKE_AQUAKNARRE },
	{  1, ATTACKE_BLUBBER },
	{  1, ATTACKE_HYPNOSE },
	{ 16, ATTACKE_HYPNOSE },
	{ 19, ATTACKE_AQUAKNARRE },
	{ 26, ATTACKE_DUPLEXHIEB },
	{ 33, ATTACKE_BODYSLAM },
	{ 41, ATTACKE_AMNESIE },
	{ 49, ATTACKE_HYDROPUMPE }
};
const struct Learnables QuaputziLearns = { 9, QuaputziLearn };

const struct Learnable QuapselLearn[] = {
	{  1, ATTACKE_BLUBBER },
	{ 16, ATTACKE_HYPNOSE },
	{ 19, ATTACKE_AQUAKNARRE },
	{ 25, ATTACKE_DUPLEXHIEB },
	{ 31, ATTACKE_BODYSLAM },
	{ 38, ATTACKE_AMNESIE },
	{ 45, ATTACKE_HYDROPUMPE }
};
const struct Learnables QuapselLearns = { 7, QuapselLearn };

const struct Learnable ArkaniLearn[] = {
	{ 1, ATTACKE_BODYCHECK },
	{ 1, ATTACKE_BRUELLER },
	{ 1, ATTACKE_GLUT },
	{ 1, ATTACKE_SILBERBLICK }
};
const struct Learnables ArkaniLearns = { 4, ArkaniLearn };

const struct Learnable FukanoLearn[] = {
	{ 1, ATTACKE_BISS },
	{ 1, ATTACKE_BRUELLER },
	{ 1, ATTACKE_GLUT },
	{ 1, ATTACKE_SILBERBLICK },
	{ 9, ATTACKE_BODYCHECK },
	{ 15, ATTACKE_AGILITAET },
	{ 21, ATTACKE_FLAMMENWURF }
};
const struct Learnables FukanoLearns = { 7, FukanoLearn };

const struct Learnable RasaffLearn[] = {
	{  1, ATTACKE_FUSSKICK },
	{  1, ATTACKE_KARATESCHLAG },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_SILBERBLICK },
	{  9, ATTACKE_FUSSKICK },
	{ 15, ATTACKE_KARATESCHLAG },
	{ 21, ATTACKE_KRATZFURIE },
	{ 27, ATTACKE_ENERGIEFOKUS },
	{ 28, ATTACKE_RASEREI },
	{ 37, ATTACKE_GEOWURF },
	{ 45, ATTACKE_KREIDESCHREI },
	{ 46, ATTACKE_FUCHTLER }
};
const struct Learnables RasaffLearns = { 12, RasaffLearn };

const struct Learnable MenkiLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_SILBERBLICK },
	{  9, ATTACKE_FUSSKICK },
	{ 15, ATTACKE_KARATESCHLAG },
	{ 21, ATTACKE_KRATZFURIE },
	{ 27, ATTACKE_ENERGIEFOKUS },
	{ 33, ATTACKE_GEOWURF },
	{ 39, ATTACKE_FUCHTLER },
	{ 45, ATTACKE_KREIDESCHREI }
};
const struct Learnables MenkiLearns = { 9, MenkiLearn };

const struct Learnable EntoronLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_RUTENSCHLAG },
	{ 28, ATTACKE_RUTENSCHLAG },
	{ 31, ATTACKE_AUSSETZER },
	{ 39, ATTACKE_KONFUSION },
	{ 48, ATTACKE_KRATZFURIE },
	{ 59, ATTACKE_HYDROPUMPE }
};
const struct Learnables EntoronLearns = { 8, EntoronLearn };

const struct Learnable EntonLearn[] = {
	{  1, ATTACKE_KRATZER },
	{ 28, ATTACKE_RUTENSCHLAG },
	{ 31, ATTACKE_AUSSETZER },
	{ 36, ATTACKE_KONFUSION },
	{ 43, ATTACKE_KRATZFURIE },
	{ 52, ATTACKE_HYDROPUMPE }
};
const struct Learnables EntonLearns = { 6, EntonLearn };

const struct Learnable SnobilikatLearn[] = {
	{  1, ATTACKE_BISS },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_KREIDESCHREI },
	{ 12, ATTACKE_BISS },
	{ 17, ATTACKE_ZAHLTAG },
	{ 24, ATTACKE_KREIDESCHREI },
	{ 37, ATTACKE_KRATZFURIE },
	{ 51, ATTACKE_SCHLITZER }
};
const struct Learnables SnobilikatLearns = { 9, SnobilikatLearn };

const struct Learnable MauziLearn[] = {
	{ 1, ATTACKE_KRATZER },
	{ 1, ATTACKE_HEULER },
	{ 1, ATTACKE_BISS },
	{ 15, ATTACKE_ZAHLTAG },
	{ 19, ATTACKE_KREIDESCHREI },
	{ 24, ATTACKE_KRATZFURIE },
	{ 35, ATTACKE_SCHLITZER }
};
const struct Learnables MauziLearns = { 7, MauziLearn };

const struct Learnable DigdriLearn[] = {
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_SCHAUFLER },
	{ 15, ATTACKE_HEULER },
	{ 19, ATTACKE_SCHAUFLER },
	{ 24, ATTACKE_SANDWIRBEL },
	{ 35, ATTACKE_SCHLITZER },
	{ 47, ATTACKE_ERDBEBEN }
};
const struct Learnables DigdriLearns = { 8, DigdriLearn };

const struct Learnable DigdaLearn[] = {
	{  1, ATTACKE_KRATZER },
	{ 15, ATTACKE_HEULER },
	{ 19, ATTACKE_SCHAUFLER },
	{ 24, ATTACKE_SANDWIRBEL },
	{ 31, ATTACKE_SCHLITZER },
	{ 40, ATTACKE_ERDBEBEN }
};
const struct Learnables DigdaLearns = { 6, DigdaLearn };

const struct Learnable OmotLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_KONFUSION },
	{  1, ATTACKE_SUPERSCHALL },
	{  1, ATTACKE_TACKLE },
	{ 22, ATTACKE_GIFTPUDER },
	{ 27, ATTACKE_BLUTSAUGER },
	{ 30, ATTACKE_STACHELSPORE },
	{ 38, ATTACKE_PSYSTRAHL },
	{ 43, ATTACKE_SCHLAFPUDER },
	{ 50, ATTACKE_PSYCHOKINESE }
};
const struct Learnables OmotLearns = { 10, OmotLearn };

const struct Learnable BluzukLearn[] = {
	{  1, ATTACKE_AUSSETZER },
	{  1, ATTACKE_TACKLE },
	{ 11, ATTACKE_SUPERSCHALL },
	{ 19, ATTACKE_KONFUSION },
	{ 22, ATTACKE_GIFTPUDER },
	{ 27, ATTACKE_BLUTSAUGER },
	{ 30, ATTACKE_STACHELSPORE },
	{ 35, ATTACKE_PSYSTRAHL },
	{ 38, ATTACKE_SCHLAFPUDER },
	{ 43, ATTACKE_PSYCHOKINESE }
};
const struct Learnables BluzukLearns = { 10, BluzukLearn };

const struct Learnable ParasekLearn[] = {
	{  1, ATTACKE_BLUTSAUGER },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_STACHELSPORE },
	{ 13, ATTACKE_STACHELSPORE },
	{ 20, ATTACKE_BLUTSAUGER },
	{ 30, ATTACKE_PILZSPORE },
	{ 39, ATTACKE_SCHLITZER },
	{ 48, ATTACKE_WACHSTUM }
};
const struct Learnables ParasekLearns = { 8, ParasekLearn };

const struct Learnable ParasLearn[] = {
	{  1, ATTACKE_KRATZER },
	{ 13, ATTACKE_STACHELSPORE },
	{ 20, ATTACKE_BLUTSAUGER },
	{ 27, ATTACKE_PILZSPORE },
	{ 34, ATTACKE_SCHLITZER },
	{ 41, ATTACKE_WACHSTUM }
};
const struct Learnables ParasLearns = { 6, ParasLearn };

const struct Learnable GiflorLearn[] = {
	{  1, ATTACKE_BLAETTERTANZ },
	{  1, ATTACKE_SAEURE },
	{  1, ATTACKE_SCHLAFPUDER },
	{  1, ATTACKE_STACHELSPORE },
	{ 15, ATTACKE_GIFTPUDER },
	{ 17, ATTACKE_STACHELSPORE },
	{ 19, ATTACKE_SCHLAFPUDER }
};
const struct Learnables GiflorLearns = { 7, GiflorLearn };

const struct Learnable DuflorLearn[] = {
	{  1, ATTACKE_ABSORBER },
	{  1, ATTACKE_GIFTPUDER },
	{  1, ATTACKE_STACHELSPORE },
	{ 15, ATTACKE_GIFTPUDER },
	{ 17, ATTACKE_STACHELSPORE },
	{ 19, ATTACKE_SCHLAFPUDER },
	{ 28, ATTACKE_SAEURE },
	{ 38, ATTACKE_BLAETTERTANZ },
	{ 52, ATTACKE_SOLARSTRAHL }
};
const struct Learnables DuflorLearns = { 9, DuflorLearn };

const struct Learnable MyraplaLearn[] = {
	{  1, ATTACKE_ABSORBER },
	{ 15, ATTACKE_GIFTPUDER },
	{ 17, ATTACKE_STACHELSPORE },
	{ 19, ATTACKE_SCHLAFPUDER },
	{ 24, ATTACKE_SAEURE },
	{ 33, ATTACKE_BLAETTERTANZ },
	{ 46, ATTACKE_SOLARSTRAHL }
};
const struct Learnables MyraplaLearns = { 7, MyraplaLearn };

const struct Learnable GolbatLearn[] = {
	{  1, ATTACKE_BISS },
	{  1, ATTACKE_BLUTSAUGER },
	{  1, ATTACKE_KREIDESCHREI },
	{ 10, ATTACKE_SUPERSCHALL },
	{ 15, ATTACKE_BISS },
	{ 21, ATTACKE_KONFUSTRAHL },
	{ 32, ATTACKE_FLUEGELSCHLAG },
	{ 43, ATTACKE_DUNKELNEBEL }
};
const struct Learnables GolbatLearns = { 8, GolbatLearn };

const struct Learnable ZubatLearn[] = {
	{  1, ATTACKE_BLUTSAUGER },
	{ 10, ATTACKE_SUPERSCHALL },
	{ 15, ATTACKE_BISS },
	{ 21, ATTACKE_KONFUSTRAHL },
	{ 28, ATTACKE_FLUEGELSCHLAG },
	{ 36, ATTACKE_DUNKELNEBEL }
};
const struct Learnables ZubatLearns = { 6, ZubatLearn };

const struct Learnable KnuddeluffLearn[] = {
	{ 1, ATTACKE_AUSSETZER },
	{ 1, ATTACKE_DUPLEXHIEB },
	{ 1, ATTACKE_EINIGLER },
	{ 1, ATTACKE_GESANG }
};
const struct Learnables KnuddeluffLearns = { 4, KnuddeluffLearn };


const struct Learnable PummeluffLearn[] = {
	{  1, ATTACKE_GESANG },
	{  9, ATTACKE_PFUND },
	{ 14, ATTACKE_AUSSETZER },
	{ 19, ATTACKE_EINIGLER },
	{ 24, ATTACKE_DUPLEXHIEB },
	{ 29, ATTACKE_ERHOLUNG },
	{ 34, ATTACKE_BODYSLAM },
	{ 39, ATTACKE_RISIKOTACKLE }
};
const struct Learnables PummeluffLearns = { 8, PummeluffLearn };

const struct Learnable VulnonaLearn[] = {
	{ 1, ATTACKE_GLUT },
	{ 1, ATTACKE_RUTENSCHLAG },
	{ 1, ATTACKE_RUCKZUCKHIEB },
	{ 1, ATTACKE_BRUELLER }
};
const struct Learnables VulnonaLearns = { 4, VulnonaLearn };

const struct Learnable VulpixLearn[] = {
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_GLUT },
	{ 16, ATTACKE_RUCKZUCKHIEB },
	{ 21, ATTACKE_BRUELLER },
	{ 28, ATTACKE_KONFUSTRAHL },
	{ 35, ATTACKE_FLAMMENWURF },
	{ 42, ATTACKE_FEUERWIRBEL }
};
const struct Learnables VulpixLearns = { 7, VulpixLearn };

const struct Learnable PixiLearn[] = {
	{  1, ATTACKE_DUPLEXHIEB },
	{  1, ATTACKE_GESANG },
	{  1, ATTACKE_KOMPRIMATOR },
	{  1, ATTACKE_METRONOM }
};
const struct Learnables PixiLearns = { 4, PixiLearn };

const struct Learnable PiepiLearn[] = {
	{  1, ATTACKE_PFUND },
	{  1, ATTACKE_HEULER },
	{ 13, ATTACKE_GESANG },
	{ 18, ATTACKE_DUPLEXHIEB },
	{ 24, ATTACKE_KOMPRIMATOR },
	{ 31, ATTACKE_METRONOM },
	{ 39, ATTACKE_EINIGLER },
	{ 48, ATTACKE_LICHTSCHILD }
};
const struct Learnables PiepiLearns = { 8, PiepiLearn };

const struct Learnable NidokingLearn[] = {
	{  1, ATTACKE_FUCHTLER },
	{  1, ATTACKE_GIFTSTACHEL },
	{  1, ATTACKE_HORNATTACKE },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_HORNATTACKE },
	{ 12, ATTACKE_DOPPELKICK },
	{ 23, ATTACKE_FUCHTLER }
};
const struct Learnables NidokingLearns = { 7, NidokingLearn };

const struct Learnable NidorinoLearn[] = {
	{  1, ATTACKE_HORNATTACKE },
	{  1, ATTACKE_SILBERBLICK },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_HORNATTACKE },
	{ 12, ATTACKE_DOPPELKICK },
	{ 19, ATTACKE_GIFTSTACHEL },
	{ 27, ATTACKE_ENERGIEFOKUS },
	{ 36, ATTACKE_FURIENSCHLAG },
	{ 46, ATTACKE_HORNBOHRER }
};
const struct Learnables NidorinoLearns = { 9, NidorinoLearn };

const struct Learnable NidoranMLearn[] = {
	{  1, ATTACKE_SILBERBLICK },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_HORNATTACKE },
	{ 12, ATTACKE_DOPPELKICK },
	{ 17, ATTACKE_GIFTSTACHEL },
	{ 23, ATTACKE_ENERGIEFOKUS },
	{ 30, ATTACKE_FURIENSCHLAG },
	{ 38, ATTACKE_HORNBOHRER }
};
const struct Learnables NidoranMLearns = { 8, NidoranMLearn };

const struct Learnable NidoqueenLearn[] = {
	{  1, ATTACKE_BODYSLAM },
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_KRATZER },
	{ 12, ATTACKE_DOPPELKICK },
	{ 23, ATTACKE_BODYSLAM }
};
const struct Learnables NidoqueenLearns = { 7, NidoqueenLearn };

const struct Learnable NidorinaLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_KRATZER },
	{ 12, ATTACKE_DOPPELKICK },
	{ 19, ATTACKE_GIFTSTACHEL },
	{ 27, ATTACKE_RUTENSCHLAG },
	{ 36, ATTACKE_BISS },
	{ 46, ATTACKE_KRATZFURIE }
};
const struct Learnables NidorinaLearns = { 9, NidorinaLearn };

const struct Learnable NidoranWLearn[] = {
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_TACKLE },
	{  8, ATTACKE_KRATZER },
	{ 12, ATTACKE_DOPPELKICK },
	{ 17, ATTACKE_GIFTSTACHEL },
	{ 23, ATTACKE_RUTENSCHLAG },
	{ 30, ATTACKE_BISS },
	{ 38, ATTACKE_KRATZFURIE }
};
const struct Learnables NidoranWLearns = { 8, NidoranWLearn };

const struct Learnable SandamerLearn[] = {
	{  1, ATTACKE_KRATZER },
	{  1, ATTACKE_SANDWIRBEL },
	{ 10, ATTACKE_SANDWIRBEL },
	{ 17, ATTACKE_SCHLITZER },
	{ 27, ATTACKE_GIFTSTACHEL },
	{ 36, ATTACKE_STERNSCHAUER },
	{ 47, ATTACKE_KRATZFURIE }
};
const struct Learnables SandamerLearns = { 7, SandamerLearn };

const struct Learnable SandanLearn[] = {
	{  1, ATTACKE_KRATZER },
	{ 10, ATTACKE_SANDWIRBEL },
	{ 17, ATTACKE_SCHLITZER },
	{ 24, ATTACKE_GIFTSTACHEL },
	{ 31, ATTACKE_STERNSCHAUER },
	{ 38, ATTACKE_KRATZFURIE }
};
const struct Learnables SandanLearns = { 6, SandanLearn };

const struct Learnable RaichuLearn[] = {
	{  1, ATTACKE_DONNERSCHOCK },
	{  1, ATTACKE_DONNERWELLE },
	{  1, ATTACKE_HEULER }
};
const struct Learnables RaichuLearns = { 3, RaichuLearn };

const struct Learnable PikachuLearn[] = {
	{  1, ATTACKE_DONNERSCHOCK },
	{  1, ATTACKE_HEULER },
	{  6, ATTACKE_RUTENSCHLAG },
	{  8, ATTACKE_DONNERWELLE },
	{ 11, ATTACKE_RUCKZUCKHIEB },
	{ 15, ATTACKE_DOPPELTEAM },
	{ 20, ATTACKE_SLAM },
	{ 26, ATTACKE_DONNERBLITZ },
	{ 33, ATTACKE_AGILITAET },
	{ 41, ATTACKE_DONNER },
	{ 50, ATTACKE_LICHTSCHILD }
};
const struct Learnables PikachuLearns = { 11, PikachuLearn };

const struct Learnable ArbokLearn[] = {
	{  1, ATTACKE_GIFTSTACHEL },
	{  1, ATTACKE_SILBERBLICK },
	{  1, ATTACKE_WICKEL },
	{ 10, ATTACKE_GIFTSTACHEL },
	{ 17, ATTACKE_BISS },
	{ 27, ATTACKE_GIFTBLICK },
	{ 36, ATTACKE_KREIDESCHREI },
	{ 47, ATTACKE_SAEURE }
};
const struct Learnables ArbokLearns = { 8, ArbokLearn };

const struct Learnable RettanLearn[] = {
	{  1, ATTACKE_WICKEL },
	{  1, ATTACKE_SILBERBLICK },
	{ 10, ATTACKE_GIFTSTACHEL },
	{ 17, ATTACKE_BISS },
	{ 24, ATTACKE_GIFTBLICK },
	{ 31, ATTACKE_KREIDESCHREI },
	{ 38, ATTACKE_SAEURE }
};
const struct Learnables RettanLearns = { 7, RettanLearn };

const struct Learnable IbitakLearn[] = {
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_SCHNABEL },
	{  1, ATTACKE_SILBERBLICK },
	{  9, ATTACKE_SILBERBLICK },
	{ 15, ATTACKE_FURIENSCHLAG },
	{ 25, ATTACKE_SPIEGELTRICK },
	{ 34, ATTACKE_BOHRSCHNABEL },
	{ 43, ATTACKE_AGILITAET }
};
const struct Learnables IbitakLearns = { 8, IbitakLearn };

const struct Learnable HabitakLearn[] = {
	{  1, ATTACKE_HEULER },
	{  1, ATTACKE_SCHNABEL },
	{  9, ATTACKE_SILBERBLICK },
	{ 15, ATTACKE_FURIENSCHLAG },
	{ 22, ATTACKE_SPIEGELTRICK },
	{ 29, ATTACKE_BOHRSCHNABEL },
	{ 36, ATTACKE_AGILITAET }
};
const struct Learnables HabitakLearns = { 7, HabitakLearn };

const struct Learnable RattikarlLearn[] = {
	{  1, ATTACKE_RUCKZUCKHIEB },
	{  1, ATTACKE_RUTENSCHLAG },
	{  1, ATTACKE_TACKLE },
	{  7, ATTACKE_RUCKZUCKHIEB },
	{ 14, ATTACKE_HYPERZAHN },
	{ 27, ATTACKE_ENERGIEFOKUS },
	{ 41, ATTACKE_SUPERZAHN }
};
const struct Learnables RattikarlLearns = { 7, RattikarlLearn };

const struct Learnable RattfratzLearn[] = {
	{ 1, ATTACKE_RUTENSCHLAG },
	{ 1, ATTACKE_TACKLE },
	{ 7, ATTACKE_RUCKZUCKHIEB },
	{ 14, ATTACKE_HYPERZAHN },
	{ 23, ATTACKE_ENERGIEFOKUS },
	{ 34, ATTACKE_SUPERZAHN }
};
const struct Learnables RattfratzLearns = { 6, RattfratzLearn };

const struct Learnable TaubossLearn[] = {
	{  1, ATTACKE_RUCKZUCKHIEB },
	{  1, ATTACKE_SANDWIRBEL },
	{  1, ATTACKE_WINDSTOSS },
	{  5, ATTACKE_SANDWIRBEL },
	{ 12, ATTACKE_RUCKZUCKHIEB },
	{ 21, ATTACKE_WIRBELWIND },
	{ 31, ATTACKE_FLUEGELSCHLAG },
	{ 44, ATTACKE_AGILITAET },
	{ 54, ATTACKE_SPIEGELTRICK }
};
const struct Learnables TaubossLearns = { 9, TaubossLearn };

const struct Learnable TaubogaLearn[] = {
	{  1, ATTACKE_SANDWIRBEL },
	{  1, ATTACKE_WINDSTOSS },
	{  5, ATTACKE_SANDWIRBEL },
	{ 12, ATTACKE_RUCKZUCKHIEB },
	{ 21, ATTACKE_WIRBELWIND },
	{ 31, ATTACKE_FLUEGELSCHLAG },
	{ 40, ATTACKE_AGILITAET },
	{ 49, ATTACKE_SPIEGELTRICK }
};
const struct Learnables TaubogaLearns = { 8, TaubogaLearn };

const struct Learnable TaubsiLearn[] = {
	{  1, ATTACKE_WINDSTOSS },
	{  5, ATTACKE_SANDWIRBEL },
	{ 12, ATTACKE_RUCKZUCKHIEB },
	{ 19, ATTACKE_WIRBELWIND },
	{ 28, ATTACKE_FLUEGELSCHLAG },
	{ 36, ATTACKE_AGILITAET },
	{ 44, ATTACKE_SPIEGELTRICK }
};
const struct Learnables TaubsiLearns = { 7, TaubsiLearn };

const struct Learnable BiborLearn[] = {
	{  1, ATTACKE_FURIENSCHLAG },
	{ 12, ATTACKE_FURIENSCHLAG },
	{ 16, ATTACKE_ENERGIEFOKUS },
	{ 20, ATTACKE_DUONADEL },
	{ 25, ATTACKE_RASEREI },
	{ 30, ATTACKE_NADELRAKETE },
	{ 35, ATTACKE_AGILITAET }
};
const struct Learnables BiborLearns = { 7, BiborLearn };

const struct Learnable KokunaLearn[] = {
	{	1, ATTACKE_HAERTNER }
};
const struct Learnables KokunaLearns = { 1, KokunaLearn };

const struct Learnable HornliuLearn[] = {
	{  1, ATTACKE_GIFTSTACHEL },
	{  1, ATTACKE_FADENSCHUSS }
};
const struct Learnables HornliuLearns = { 2, HornliuLearn };

const struct Learnable SmettboLearn[] = {
	{  1, ATTACKE_KONFUSION },
	{ 10, ATTACKE_KONFUSION },
	{ 13, ATTACKE_GIFTPUDER },
	{ 14, ATTACKE_STACHELSPORE },
	{ 15, ATTACKE_SCHLAFPUDER },
	{ 18, ATTACKE_SUPERSCHALL },
	{ 23, ATTACKE_WIRBELWIND },
	{ 28, ATTACKE_WINDSTOSS },
	{ 34, ATTACKE_PSYSTRAHL }
};
const struct Learnables SmettboLearns = { 9, SmettboLearn };

const struct Learnable SafconLearn[] = {
	{  1, ATTACKE_HAERTNER },
	{  7, ATTACKE_HAERTNER }
};
const struct Learnables SafconLearns = { 2, SafconLearn };

const struct Learnable RaupyLearn[] = {
	{  1, ATTACKE_TACKLE },
	{  1, ATTACKE_FADENSCHUSS }
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

//											dex  name			typ1		typ2		cr   exp   hp  atk  def  sat  sdf  spd  EXP T   evo
const struct PokemonBase Mew			= { 151, "Mew",			PSYCHO,		KEINTYP,	 45,  64, 100, 100, 100, 100, 100, 100, EXP_T4, 0, NULL,			&MewLearns };

const struct PokemonBase Mewtu			= { 150, "Mewtu",		PSYCHO,		KEINTYP,	  3, 220, 106, 110,  90, 154,  90, 130, EXP_T5, 0, NULL,			&MewtuLearns };

const struct PokemonBase Dragoran		= { 149, "Dragoran",	DRACHE,		FLUG,		 45, 218,  91, 134,  95, 100, 100,  80, EXP_T5, 0, NULL,			&DragoranLearns };

const struct Evolution  DragonirEvo[]	= { 55, &Dragoran };
const struct PokemonBase Dragonir		= { 148, "Dragonir",	DRACHE,		KEINTYP,	 45, 144,  61,  84,  65,  70,  70,  70, EXP_T5, 1, DragonirEvo,		&DragonirLearns };

const struct Evolution  DratiniEvo[]	= { 30, &Dragonir };
const struct PokemonBase Dratini		= { 147, "Dratini",		DRACHE,		KEINTYP,	 45,  67,  41,  64,  45,  50,  50,  50, EXP_T5, 1, DratiniEvo,		&DratiniLearns };

const struct PokemonBase Lavados		= { 146, "Lavados",		FEUER,		FLUG,		  3, 217,  90, 100,  90, 125,  85,  90, EXP_T5, 0, NULL,			&LavadosLearns };

const struct PokemonBase Zapdos			= { 145, "Zapdos",		ELEKTRO,	FLUG,		  3, 216,  90,  90,  85, 125,  90, 100, EXP_T5, 0, NULL,			&ZapdosLearns };

const struct PokemonBase Arktos			= { 144, "Arktos",		EIS,		FLUG,		  3, 215,  90,  85, 100,  95, 125,  85, EXP_T5, 0, NULL,			&ArktosLearns };

const struct PokemonBase Relaxo			= { 143, "Relaxo",		NORMAL,		KEINTYP,	 25, 154, 160, 110,  65,  65, 110,  30, EXP_T5, 0, NULL,			&RelaxoLearns };

const struct PokemonBase Aerodactyl		= { 142, "Aerodactyl",	STEIN,		FLUG,		 45, 202,  80, 105,  65,  60,  75, 130, EXP_T5, 0, NULL,			&AerodactylLearns };

const struct PokemonBase Kabutops		= { 141, "Kabutops",	STEIN,		WASSER,		 45, 199,  60, 115, 105,  65,  70,  80, EXP_T3, 0, NULL,			&KabutopsLearns };

const struct Evolution  KabutoEvo[]		= { 40, &Kabutops };
const struct PokemonBase Kabuto			= { 140, "Kabuto",		STEIN,		WASSER,		 45,  99,  30,  80,  90,  55,  45,  55, EXP_T3, 1, KabutoEvo,		&KabutoLearns };

const struct PokemonBase Amoroso		= { 139, "Amoroso",		STEIN,		WASSER,		 45, 199,  70,  60, 125, 115,  70,  55, EXP_T3, 0, NULL,			&AmorosoLearns };

const struct Evolution  AmonitasEvo[]	= { 40, &Amoroso };
const struct PokemonBase Amonitas		= { 138, "Amonitas",	STEIN,		WASSER,		 45,  99,  35,  40, 100,  90,  55,  35, EXP_T3, 1, AmonitasEvo,		&AmonitasLearns };

const struct PokemonBase Porygon		= { 137, "Porygon",		NORMAL,		KEINTYP,	 45, 130,  65,  60,  70,  85,  75,  40, EXP_T3, 0, NULL,			&PorygonLearns };

const struct PokemonBase Flamara		= { 136, "Flamara",		FEUER,		KEINTYP,	 45, 198,  65, 130,  60,  95, 110,  65, EXP_T3, 0, NULL,			&FlamaraLearns };

const struct PokemonBase Blitza			= { 135, "Blitza",		ELEKTRO,	KEINTYP,	 45, 197,  65,  65,  60, 110,  95, 130, EXP_T3, 0, NULL,			&BlitzaLearns };

const struct PokemonBase Aquana			= { 134, "Aquana",		WASSER,		KEINTYP,	 45, 196, 130,  65,  60, 110,  95,  65, EXP_T3, 0, NULL,			&AquanaLearns };

const struct Evolution EvoliEvo[]		= { 
											{ STONE_FIRE, &Flamara },
											{ STONE_THUNDER, &Blitza },
											{ STONE_WATER, &Aquana } 
										};
const struct PokemonBase Evoli			= { 133, "Evoli",		NORMAL,		KEINTYP,	 45,  92,  55,  55,  50,  45,  65,  55, EXP_T3, 3, EvoliEvo,		&EvoliLearns };

const struct PokemonBase Ditto			= { 132, "Ditto",		NORMAL,		KEINTYP,	 35,  61,  48,  48,  48,  48,  48,  48, EXP_T3, 0, NULL,			&DittoLearns };

const struct PokemonBase Lapras			= { 131, "Lapras",		WASSER,		EIS,		 45, 219, 130,  85,  80,  85,  95,  60, EXP_T5, 0, NULL,			&LaprasLearns };

const struct PokemonBase Garados		= { 130, "Garados",		WASSER,		FLUG,		 45, 214,  95, 125,  79,  60, 100,  81, EXP_T5, 0, NULL,			&GaradosLearns };

const struct Evolution  KarpadorEvo[]	= { 20, &Garados };
const struct PokemonBase Karpador		= { 129, "Karpador",	WASSER,		KEINTYP,	255,  20,  20,  10,  55,  15,  20,  80, EXP_T5, 1, KarpadorEvo,		&KarpadorLearns };

const struct PokemonBase Tauros			= { 128, "Tauros",		NORMAL,		KEINTYP,	 45, 211,  75, 100,  95,  40,  70, 110, EXP_T5, 0, NULL,			&TaurosLearns };

const struct PokemonBase Pinsir			= { 127, "Pinsir",		KAEFER,		KEINTYP,	 45, 200,  65, 125, 100,  55,  70,  85, EXP_T5, 0, NULL,			&PinsirLearns };

const struct PokemonBase Magmar			= { 126, "Magmar",		FEUER,		KEINTYP,	 45, 167,  65,  95,  57, 100,  85,  93, EXP_T3, 0, NULL,			&MagmarLearns };

const struct PokemonBase Elektek		= { 125, "Elektek",		ELEKTRO,	KEINTYP,	 45, 156,  65,  83,  57,  95,  85, 105, EXP_T3, 0, NULL,			&ElektekLearns };

const struct PokemonBase Rossana		= { 124, "Rossana",		EIS,		PSYCHO,		 45, 137,  65,  50,  35, 115,  95,  95, EXP_T3, 0, NULL,			&RossanaLearns };

const struct PokemonBase Sichlor		= { 123, "Sichlor",		KAEFER,		FLUG,		 45, 187,  70, 110,  80,  55,  80, 105, EXP_T3, 0, NULL,			&SichlorLearns };

const struct PokemonBase Pantimos		= { 122, "Pantimos",	PSYCHO,		KEINTYP,	 45, 136,  40,  45,  65, 100, 120,  90, EXP_T3, 0, NULL,			&PantimosLearns };

const struct PokemonBase Starmie		= { 121, "Starmie",		WASSER,		PSYCHO,		 60, 207,  60,  75,  85, 100,  85, 115, EXP_T5, 0, NULL,			&StarmieLearns };

const struct Evolution  SternduEvo[]	= { STONE_WATER, &Starmie };
const struct PokemonBase Sterndu		= { 120, "Sterndu",		WASSER,		KEINTYP,	225, 106,  30,  45,  55,  70,  55,  85, EXP_T5, 1, SternduEvo,		&SternduLearns };

const struct PokemonBase Golking		= { 119, "Golking",		WASSER,		KEINTYP,	 60, 170,  80,  92,  65,  65,  80,  68, EXP_T3, 0, NULL,			&GolkingLearns };

const struct Evolution  GoldiniEvo[]	= { 33, &Golking };
const struct PokemonBase Goldini		= { 118, "Goldini",		WASSER,		KEINTYP,	225, 111,  45,  67,  60,  35,  50,  63, EXP_T3, 1, GoldiniEvo,		&GoldiniLearns };

const struct PokemonBase Seemon			= { 117, "Seemon",		WASSER,		KEINTYP,	 75, 155,  55,  65,  95,  95,  45,  85, EXP_T3, 0, NULL,			&SeemonLearns };

const struct Evolution  SeeperEvo[]		= { 32, &Seemon };
const struct PokemonBase Seeper			= { 116, "Seeper",		WASSER,		KEINTYP,	225,  83,  30,  40,  70,  70,  25,  60, EXP_T3, 1, SeeperEvo,		&SeeperLearns };

const struct PokemonBase Kangama		= { 115, "Kangama",		NORMAL,		KEINTYP,	 45, 175, 105,  95,  80,  40,  80,  90, EXP_T3, 0, NULL,			&KangamaLearns };

const struct PokemonBase Tangela		= { 114, "Tangela",		PFLANZE,	KEINTYP,	 45, 166,  65,  55, 115, 100,  40,  60, EXP_T3, 0, NULL,			&TangelaLearns };

const struct PokemonBase Chaneira		= { 113, "Chaneira",	NORMAL,		KEINTYP,	 30, 255, 250,   5,   5,  35, 105,  50, EXP_T2, 0, NULL,			&ChaneiraLearns };

const struct PokemonBase Rizeros		= { 112, "Rizeros",		BODEN,		STEIN,		 60, 204, 105, 130, 120,  45,  45,  40, EXP_T5, 0, NULL,			&RizerosLearns };

const struct Evolution  RihornEvo[]		= { 42, &Rizeros };
const struct PokemonBase Rihorn			= { 111, "Rihorn",		BODEN,		STEIN,		120, 135,  80,  85,  95,  30,  30,  25, EXP_T5, 1, RihornEvo,		&RihornLearns };

const struct PokemonBase Smogmog		= { 110, "Smogmog",		GIFT,		KEINTYP,	 60, 173,  65,  90, 120,  85,  70,  60, EXP_T3, 0, NULL,			&SmogmogLearns };

const struct Evolution  SmogonEvo[]		= { 35, &Smogmog };
const struct PokemonBase Smogon			= { 109, "Smogon",		GIFT,		KEINTYP,	190, 114,  40,  65,  95,  60,  45,  35, EXP_T3, 1, SmogonEvo,		&SmogonLearns };

const struct PokemonBase Schlurp		= { 108, "Schlurp",		NORMAL,		KEINTYP,	 45, 127,  90,  55,  75,  60,  75,  30, EXP_T3, 0, NULL,			&SchlurpLearns };

const struct PokemonBase Nockchan		= { 107, "Nockchan",	KAMPF,		KEINTYP,	 45, 140,  50, 105,  79,  35, 110,  76, EXP_T3, 0, NULL,			&NockchanLearns };

const struct PokemonBase Kicklee		= { 106, "Kicklee",		KAMPF,		KEINTYP,	 45, 139,  50, 120,  53,  35, 110,  87, EXP_T3, 0, NULL,			&KickleeLearns };

const struct PokemonBase Knogga			= { 105, "Knogga",		BODEN,		KEINTYP,	 75, 124,  60,  80, 110,  50,  80,  45, EXP_T3, 0, NULL,			&KnoggaLearns };

const struct Evolution  TragossoEvo[]	= { 28, &Knogga };
const struct PokemonBase Tragosso		= { 104, "Tragosso",	BODEN,		KEINTYP,	190,  87,  50,  50,  95,  40,  50,  35, EXP_T3, 1, TragossoEvo,		&TragossoLearns };

const struct PokemonBase Kokowei		= { 103, "Kokowei",		PFLANZE,	PSYCHO,		 45, 212,  95,  95,  85, 125,  75,  55, EXP_T5, 0, NULL,			&KokoweiLearns };

const struct Evolution  OweiEvo[]		= { STONE_LEAF, &Kokowei };
const struct PokemonBase Owei			= { 102, "Owei",		PFLANZE,	PSYCHO,		 90,  98,  60,  40,  80,  60,  45,  40, EXP_T5, 1, OweiEvo,			&OweiLearns };

const struct PokemonBase Lektrobal		= { 101, "Lektrobal",	ELEKTRO,	KEINTYP,	 70, 150,  60,  50,  70,  80,  80, 150, EXP_T3, 0, NULL,			&LektrobalLearns };

const struct Evolution  VoltobalEvo[]	= { 30, &Lektrobal };
const struct PokemonBase Voltobal		= { 100, "Voltobal",	ELEKTRO,	KEINTYP,	 190, 103,  40,  30,  50,  55,  55, 100, EXP_T3, 1, VoltobalEvo,	&VoltobalLearns };

const struct PokemonBase Kingler		= {  99, "Kingler",		WASSER,		KEINTYP,	 60, 206,  55, 130, 115,  50,  50,  75, EXP_T3, 0, NULL,			&KinglerLearns };

const struct Evolution  KrabbyEvo[]		= { 28, &Kingler };
const struct PokemonBase Krabby			= {  98, "Krabby",		WASSER,		KEINTYP,	225, 115,  30, 105,  90,  25,  25,  50, EXP_T3, 1, KrabbyEvo,		&KrabbyLearns };

const struct PokemonBase Hypno			= {  97, "Hypno",		PSYCHO,		KEINTYP,	 75, 165,  85,  73,  70,  73, 115,  67, EXP_T3, 0, NULL,			&HypnoLearns };

const struct Evolution  TraumatoEvo[]	= { 26, &Hypno };
const struct PokemonBase Traumato		= {  96, "Traumato",	PSYCHO,		KEINTYP,	190, 102,  60,  48,  45,  43,  90,  42, EXP_T3, 1, TraumatoEvo,		&TraumatoLearns };

const struct PokemonBase Onix			= {  95, "Onix",		STEIN,		BODEN,		 45, 108,  35,  45, 160,  30,  45,  70, EXP_T3, 0, NULL,			&OnixLearns };

const struct PokemonBase Gengar			= {  94, "Gengar",		GEIST,		GIFT,		 45, 190,  60,  65,  60, 130,  75, 110, EXP_T4, 0, NULL,			&GengarLearns };

const struct Evolution  AlpolloEvo[]	= { EVO_TRADE, &Gengar };
const struct PokemonBase Alpollo		= {  93, "Alpollo",		GEIST,		GIFT,		 90, 126,  45,  50,  45, 115,  55,  95, EXP_T4, 1, AlpolloEvo,		&AlpolloLearns };

const struct Evolution  NebulakEvo[]	= { 25, &Alpollo };
const struct PokemonBase Nebulak		= {  92, "Nebulak",		GEIST,		GIFT,		190,  95,  30,  35,  30, 100,  35,  80, EXP_T4, 1, NebulakEvo,		&NebulakLearns };

const struct PokemonBase Austos			= {  91, "Austos",		WASSER,		EIS,		 60, 203,  50,  95, 180,  85,  45,  70, EXP_T5, 0, NULL,			&AustosLearns };

const struct Evolution  MuschasEvo[]	= { STONE_WATER, &Austos };
const struct PokemonBase Muschas		= {  90, "Muschas",		WASSER,		KEINTYP,	190,  97,  30,  65, 100,  45,  25,  40, EXP_T5, 1, MuschasEvo,		&MuschasLearns };

const struct PokemonBase Sleimok		= {  89, "Sleimok",		GIFT,		KEINTYP,	 75, 157, 105, 105,  75,  65, 100,  50, EXP_T3, 0, NULL,			&SleimokLearns };

const struct Evolution  SleimaEvo[]		= { 38, &Sleimok };
const struct PokemonBase Sleima			= {  88, "Sleima",		GIFT,		KEINTYP,	190,  90,  80,  80,  50,  40,  50,  25, EXP_T3, 1, SleimaEvo,		&SleimaLearns };

const struct PokemonBase Jugong			= {  87, "Jugong",		WASSER,		EIS,		 75, 176,  90,  70,  80,  70,  95,  70, EXP_T3, 0, NULL,			&JugongLearns };

const struct Evolution  JurobEvo[]		= { 34, &Jugong };
const struct PokemonBase Jurob			= {  86, "Jurob",		WASSER,		KEINTYP,	190, 100,  65,  45,  55,  45,  70,  45, EXP_T3, 1, JurobEvo,		&JurobLearns };

const struct PokemonBase Dodri			= {  85, "Dodri",		NORMAL,		FLUG,		 45, 158,  60, 110,  70,  60,  60, 110, EXP_T3, 0, NULL,			&DodriLearns };

const struct Evolution  DoduEvo[]		= { 31, &Dodri };
const struct PokemonBase Dodu			= {  84, "Dodu",		NORMAL,		FLUG,		190,  96,  35,  85,  45,  35,  35,  75, EXP_T3, 1, DoduEvo,			&DoduLearns };

const struct PokemonBase Porenta		= {  83, "Porenta",		NORMAL,		FLUG,		 45,  94,  52,  90,  55,  58,  62,  60, EXP_T3, 0, NULL,			&PorentaLearns };

const struct PokemonBase Magneton		= {  82, "Magneton",	ELEKTRO,	STAHL,		 60, 161,  50,  60,  95, 120,  70,  70, EXP_T3, 0, NULL,			&MagnetonLearns };

const struct Evolution  MagnetiloEvo[]	= { 30, &Magneton };
const struct PokemonBase Magnetilo		= {  81, "Magnetilo",	ELEKTRO,	STAHL,		190,  89,  25,  35,  70,  95,  55,  45, EXP_T3, 1, MagnetiloEvo,	&MagnetiloLearns };

const struct PokemonBase Lahmus			= {  80, "Lahmus",		WASSER,		PSYCHO,		 75, 164,  95,  75, 110, 100,  80,  30, EXP_T3, 0, NULL,			&LahmusLearns };

const struct Evolution FlegmonEvo[]		= { 37, &Lahmus };
const struct PokemonBase Flegmon		= {  79, "Flegmon",		WASSER,		PSYCHO,		190,  99,  90,  65,  65,  40,  40,  15, EXP_T3, 1, FlegmonEvo,		&FlegmonLearns };

const struct PokemonBase Gallopa		= {  78, "Gallopa",		FEUER,		KEINTYP,	 60, 192,  65, 100,  70,  80,  80, 105, EXP_T3, 0, NULL,			&GallopaLearns };

const struct Evolution PonitaEvo[]		= { 40, &Gallopa };
const struct PokemonBase Ponita			= {  77, "Ponita",		FEUER,		KEINTYP,	190, 152,  50,  85,  55,  65,  65,  90, EXP_T3, 1, PonitaEvo,		&GeorokLearns };

const struct PokemonBase Geowaz			= {  76, "Geowaz",		STEIN,		BODEN,		 45, 177,  80, 120, 130,  55,  65,  45, EXP_T4, 0, NULL,			&GeowazLearns };

const struct Evolution GeorokEvo[]		= { EVO_TRADE, &Geowaz };
const struct PokemonBase Georok			= {  75, "Georok",		STEIN,		BODEN,		120, 134,  55,  95, 115,  45,  45,  35, EXP_T4, 1, GeorokEvo,		&GeorokLearns };

const struct Evolution KleinsteinEvo[]	= { 25, &Georok };
const struct PokemonBase Kleinstein		= {  74, "Kleinstein",	STEIN,		BODEN,		255,  73,  40,  80, 100,  30,  30,  20, EXP_T4, 1, KleinsteinEvo,	&KleinsteinLearns };

const struct PokemonBase Tentoxa		= {  73, "Tentoxa",		WASSER,		GIFT,		 60, 205,  80,  70,  65,  80, 120, 100, EXP_T5, 0, NULL,			&TentoxaLearns };

const struct Evolution TentachaEvo[]	= { 30, &Tentoxa };
const struct PokemonBase Tentacha		= {  72, "Tentacha",	WASSER,		GIFT,		190, 105,  40,  40,  35,  50, 100,  70, EXP_T5, 1, TentachaEvo,		&TentachaLearns };

const struct PokemonBase Sarzenia		= {  71, "Sarzenia",	PFLANZE,	GIFT,		 45, 191,  80, 105,  65, 100,  70,  70, EXP_T4, 0, NULL,			&SarzeniaLearns };

const struct Evolution UltrigariaEvo[]	= { STONE_LEAF, &Sarzenia };
const struct PokemonBase Ultrigaria		= {  70, "Ultrigaria",	PFLANZE,	GIFT,		120, 151,  65,  90,  50,  85,  45,  55, EXP_T4, 1, UltrigariaEvo,	&UltrigariaLearns };

const struct Evolution KnofensaEvo[]	= { 21, &Ultrigaria };
const struct PokemonBase Knofensa		= {  69, "Knofensa",	PFLANZE,	GIFT,		255,  84,  50,  75,  35,  70,  30,  40, EXP_T4, 1, KnofensaEvo,		&KnofensaLearns };

const struct PokemonBase Machomei		= {  68, "Machomei",	KAMPF,		KEINTYP,	 45, 193,  90, 130,  80,  65,  85,  55, EXP_T4, 0, NULL,			&MachomeiLearns };

const struct Evolution MaschockEvo[]	= { EVO_TRADE, &Machomei };
const struct PokemonBase Maschock		= {  67, "Maschock",	KAMPF,		KEINTYP,	 90, 146,  80, 100,  70,  50,  60,  45, EXP_T4, 1, MaschockEvo,		&MaschockLearns };

const struct Evolution MacholloEvo[]	= { 28, &Maschock };
const struct PokemonBase Machollo		= {  66, "Machollo",	KAMPF,		KEINTYP,	180,  75,  70,  80,  50,  35,  35,  35, EXP_T4, 1, MacholloEvo,		&MacholloLearns };

const struct PokemonBase Simsala		= {  65, "Simsala",		PSYCHO,		KEINTYP,	 50, 186,  55,  50,  45, 135,  95, 120, EXP_T4, 0, NULL,			&SimsalaLearns };

const struct Evolution KadabraEvo[]		= { EVO_TRADE, &Simsala };
const struct PokemonBase Kadabra		= {  64, "Kadabra",		PSYCHO,		KEINTYP,	100, 145,  40,  35,  30, 120,  70, 105, EXP_T4, 1, KadabraEvo,		&KadabraLearns };

const struct Evolution AbraEvo[]		= { 16, &Kadabra };
const struct PokemonBase Abra			= {  63, "Abra",		PSYCHO,		KEINTYP,	200,  75,  25,  20,  15, 105,  55,  90, EXP_T4, 1, AbraEvo,			&AbraLearns };

const struct PokemonBase Quappo			= {  62, "Quappo",		WASSER,		KAMPF,		 45, 185,  90,  95,  95,  70,  90,  70, EXP_T4, 0, NULL,			&QuappoLearns };

const struct Evolution QuaputziEvo[]	= { STONE_WATER, &Quappo };
const struct PokemonBase Quaputzi		= {  61, "Quaputzi",	WASSER,		KEINTYP,	120, 131,  65,  65,  65,  50,  50,  90, EXP_T4, 1, QuaputziEvo,		&QuaputziLearns };

const struct Evolution QuapselEvo[]		= { 25, &Quaputzi };
const struct PokemonBase Quapsel		= {  60, "Quapsel",		WASSER,		KEINTYP,	255,  77,  40,  50,  40,  40,  40,  90, EXP_T4, 1, QuapselEvo,		&QuapselLearns };

const struct PokemonBase Arkani			= {  59, "Arkani",		FEUER,		KEINTYP,	 75, 213,  90, 110,  80, 100,  80,  95, EXP_T5, 0, NULL,			&ArkaniLearns };

const struct Evolution FukanoEvo[]		= { STONE_FIRE, &Arkani };
const struct PokemonBase Fukano			= {  58, "Fukano",		FEUER,		KEINTYP,	190,  91,  55,  70,  45,  70,  50,  60, EXP_T5, 1, FukanoEvo,		&FukanoLearns };

const struct PokemonBase Rasaff			= {  57, "Rasaff",		KAMPF,		KEINTYP,	 75, 149,  65, 105,  60,  60,  70,  95, EXP_T3, 0, NULL,			&RasaffLearns };

const struct Evolution MenkiEvo[]		= { 28, &Rasaff };
const struct PokemonBase Menki			= {  56, "Menki",		KAMPF,		KEINTYP,	190,  74,  40,  80,  35,  35,  45,  70, EXP_T3, 1, MenkiEvo,		&MenkiLearns };

const struct PokemonBase Entoron		= {  55, "Entoron",		WASSER,		KEINTYP,	 75, 174,  80,  82,  75,  95,  80,  85, EXP_T3, 0, NULL,			&EntoronLearns };

const struct Evolution EntonEvo[]		= { 33, &Entoron };
const struct PokemonBase Enton			= {  54, "Enton",		WASSER,		KEINTYP,	190,  80,  50,  52,  48,  65,  50,  55, EXP_T3, 1, EntonEvo,		&EntonLearns };

const struct PokemonBase Snobilikat		= {  53, "Snobilikat",	NORMAL,		KEINTYP,	 90, 148,  65,  70,  60,  65,  65, 115, EXP_T3, 0, NULL,			&SnobilikatLearns };

const struct Evolution MauziEvo[]		= { 28, &Snobilikat };
const struct PokemonBase Mauzi			= {  52, "Mauzi",		NORMAL,		KEINTYP,	255,  69,  40,  45,  35,  40,  40,  90, EXP_T3, 1, MauziEvo,		&MauziLearns };

const struct PokemonBase Digdri			= {  51, "Digdri",		BODEN,		KEINTYP,	 50, 153,  35, 100,  50,  50,  70, 120, EXP_T3, 0, NULL,			&DigdriLearns };

const struct Evolution DigdaEvo[]		= { 26, &Digdri };
const struct PokemonBase Digda			= {  50, "Digda",		BODEN,		KEINTYP,	255,  81,  10,  55,  25,  35,  45,  95, EXP_T3, 1, DigdaEvo,		&DigdaLearns };

const struct PokemonBase Omot			= {  49, "Omot",		KAEFER,		GIFT,		 75, 138,  70,  65,  60,  90,  75,  90, EXP_T3, 0, NULL,			&OmotLearns };

const struct Evolution BluzukEvo[]		= { 31, &Omot };
const struct PokemonBase Bluzuk			= {  48, "Bluzuk",		KAEFER,		GIFT,		190,  75,  60,  55,  50,  40,  55,  45, EXP_T3, 1, BluzukEvo,		&BluzukLearns };

const struct PokemonBase Parasek		= {  47, "Parasek",		KAEFER,		PFLANZE,	 75, 128,  60,  95,  80,  60,  80,  30, EXP_T3, 0, NULL,			&ParasekLearns };

const struct Evolution ParasEvo[]		= { 24, &Parasek };
const struct PokemonBase Paras			= {  46, "Paras",		KAEFER,		PFLANZE,	190,  70,  35,  70,  55,  45,  55,  25, EXP_T3, 1, ParasEvo,		&ParasekLearns };

const struct PokemonBase Giflor			= {  45, "Giflor",		PFLANZE,	GIFT,		 45, 184,  75,  80,  85, 110,  90,  50, EXP_T4, 0, NULL,			&GiflorLearns };

const struct Evolution DuflorEvo[]		= { STONE_LEAF, &Giflor };
const struct PokemonBase Duflor			= {  44, "Duflor",		PFLANZE,	GIFT,		120, 132,  60,  65,  70,  85,  75,  40, EXP_T4, 1, DuflorEvo,		&DuflorLearns };

const struct Evolution MyraplaEvo[]		= { 21, &Duflor };
const struct PokemonBase Myrapla		= {  43, "Myrapla",		PFLANZE,	GIFT,		255,  78,  45,  50,  55,  75,  65,  30, EXP_T4, 1, MyraplaEvo,		&MyraplaLearns };

const struct PokemonBase Golbat			= {  42, "Golbat",		GIFT,		FLUG,		 90, 171,  71,  80,  70,  65,  75,  90, EXP_T3, 0, NULL,			&GolbatLearns };

const struct Evolution ZubatEvo[]		= { 22, &Golbat };
const struct PokemonBase Zubat			= {  41, "Zubat",		GIFT,		FLUG,		255,  54,  40,  45,  35,  30,  40,  55, EXP_T3, 1, ZubatEvo,		&ZubatLearns };

const struct PokemonBase Knuddeluff		= {  40, "Knuddeluff",	NORMAL,		KEINTYP,	 50, 109, 140,  70,  45,  85,  50,  45, EXP_T2, 0, NULL,			&KnuddeluffLearns };

const struct Evolution PummeluffEvo[]	= { STONE_MOON, &Knuddeluff };
const struct PokemonBase Pummeluff		= {  39, "Pummeluff",	NORMAL,		KEINTYP,	170,  76, 115,  45,  20,  45,  25,  20, EXP_T2, 1, PummeluffEvo,	&PummeluffLearns };

const struct PokemonBase Vulnona		= {  38, "Vulnona",		FEUER,		KEINTYP,	 75, 178,  73,  76,  75,  81, 100, 100, EXP_T3, 0, NULL,			&VulnonaLearns };

const struct Evolution VulpixEvo[]		= { STONE_FIRE, &Vulnona };
const struct PokemonBase Vulpix			= {  37, "Vulpix",		FEUER,		KEINTYP,	190,  63,  38,  41,  40,  50,  65,  65, EXP_T3, 1, VulpixEvo,		&VulpixLearns };

const struct PokemonBase Pixi			= {  36, "Pixi",		NORMAL,		KEINTYP,	 25, 129,  95,  70,  73,  95,  90,  60, EXP_T2, 0, NULL,			&PixiLearns };

const struct Evolution PiepiEvo[]		= { STONE_MOON, &Pixi };
const struct PokemonBase Piepi			= {  35, "Piepi",		NORMAL,		KEINTYP,	150,  68,  70,  45,  48,  60,  65,  35, EXP_T2, 1, PiepiEvo,		&PiepiLearns };

const struct PokemonBase Nidoking		= {  34, "Nidoking",	GIFT,		BODEN,		 45, 195,  81, 102,  77,  85,  75,  85, EXP_T4, 0, NULL,			&NidokingLearns };

const struct Evolution NidorinoEvo[]	= { STONE_MOON, &Nidoking };
const struct PokemonBase Nidorino		= {  33, "Nidorino",	GIFT,		KEINTYP,	120, 118,  61,  72,  57,  55,  55,  65, EXP_T4, 1, NidorinoEvo,		&NidorinoLearns };

const struct Evolution NidoranMEvo[]	= { 16, &Nidorino };
const struct PokemonBase NidoranM		= {  32, "NidoranM",	GIFT,		KEINTYP,	235,  60,  46,  57,  40,  40,  40,  50, EXP_T4, 1, NidoranMEvo,		&NidoranMLearns };

const struct PokemonBase Nidoqueen		= {  31, "Nidoqueen",	GIFT,		BODEN,		 45, 194,  90,  92,  87,  75,  85,  76, EXP_T4, 0, NULL,			&NidoqueenLearns };

const struct Evolution NidorinaEvo[]	= { STONE_MOON, &Nidoqueen };
const struct PokemonBase Nidorina		= {  30, "Nidorina",	GIFT,		KEINTYP,	120, 117,  70,  62,  67,  55,  55,  56, EXP_T4, 1, NidorinaEvo,		&NidorinaLearns };

const struct Evolution NidoranWEvo[]	= { 16, &Nidorina };
const struct PokemonBase NidoranW		= {  29, "NidoranW",	GIFT,		KEINTYP,	235,  59,  55,  47,  52,  40,  40,  41, EXP_T4, 1, NidoranWEvo,		&NidoranWLearns };

const struct PokemonBase Sandamer		= {  28, "Sandamer",	BODEN,		KEINTYP,	 90, 163,  75, 100, 110,  45,  55,  65, EXP_T3, 0, NULL,			&SandamerLearns };

const struct Evolution SandanEvo[]		= { 22, &Sandamer };
const struct PokemonBase Sandan			= {  27, "Sandan",		BODEN,		KEINTYP,	255,  93,  50,  75,  85,  20,  30,  40, EXP_T3, 1, SandanEvo,		&SandanLearns };

const struct PokemonBase Raichu			= {  26, "Raichu",		ELEKTRO,	KEINTYP,	 75, 122,  60,  90,  55,  90,  80, 110, EXP_T3, 0, NULL,			&RaichuLearns };

const struct Evolution PikachuEvo[]		= { STONE_THUNDER, &Raichu };
const struct PokemonBase Pikachu		= {  25, "Pikachu",		ELEKTRO,	KEINTYP,	190,  82,  35,  55,  40,  50,  50,  90, EXP_T3, 1, PikachuEvo,		&PikachuLearns };

const struct PokemonBase Arbok			= {  24, "Arbok",		GIFT,		KEINTYP,	 90, 147,  60,  95,  69,  65,  79,  80, EXP_T3, 0, NULL,			&ArbokLearns };

const struct Evolution RettanEvo[]		= { 22, &Arbok };
const struct PokemonBase Rettan			= {  23, "Rettan",		GIFT,		KEINTYP,	255,  62,  35,  60,  44,  40,  45,  55, EXP_T3, 1, RettanEvo,		&RettanLearns };

const struct PokemonBase Ibitak			= {  22, "Ibitak",		NORMAL,		FLUG,		 90, 162,  65,  90,  65,  61,  61, 100, EXP_T3, 0, NULL,			&IbitakLearns };

const struct Evolution HabitakEvo[]		= { 20, &Ibitak };
const struct PokemonBase Habitak		= {  21, "Habitak",		NORMAL,		FLUG,		255,  58,  40,  60,  30,  31,  31,  70, EXP_T3, 1, HabitakEvo,		&HabitakLearns };

const struct PokemonBase Rattikarl		= {  20, "Rattikarl",	NORMAL,		KEINTYP,	127, 116,  55,  81,  60,  50,  70,  97, EXP_T3, 0, NULL,			&RattikarlLearns };

const struct Evolution RattfratzEvo[]	= { 20, &Rattikarl };
const struct PokemonBase Rattfratz		= {  19, "Rattfratz",	NORMAL,		KEINTYP,	255,  57,  30,  56,  35,  25,  35,  72, EXP_T3, 1, RattfratzEvo,	&RattfratzLearns };

const struct PokemonBase Tauboss		= {  18, "Tauboss",		NORMAL,		FLUG,		 45, 172,  83,  80,  75,  70,  70, 101, EXP_T4, 0, NULL,			&TaubossLearns };

const struct Evolution TaubogaEvo[]		= { 36, &Tauboss };
const struct PokemonBase Tauboga		= {  17, "Tauboga",		NORMAL,		FLUG,		120, 113,  63,  60,  55,  50,  50,  71, EXP_T4, 1, TaubogaEvo,		&TaubogaLearns };

const struct Evolution TaubsiEvo[]		= { 18, &Tauboga };
const struct PokemonBase Taubsi			= {  16, "Taubsi",		NORMAL,		FLUG,		255,  55,  40,  45,  40,  35,  35,  53, EXP_T4, 1, TaubsiEvo,		&TaubsiLearns };

const struct PokemonBase Bibor			= {  15, "Bibor",		KAEFER,		GIFT,		 45, 159,  65,  90,  40,  45,  80,  75, EXP_T3, 0, NULL,			&BiborLearns };

const struct Evolution KokunaEvo[]		= { 10, &Bibor };
const struct PokemonBase Kokuna			= {  14, "Kokuna",		KAEFER,		GIFT,		120,  71,  45,  25,  50,  25,  25,  35, EXP_T3, 1, KokunaEvo,		&KokunaLearns };

const struct Evolution HornliuEvo[]		= {  7, &Kokuna };
const struct PokemonBase Hornliu		= {  13, "Hornliu",		KAEFER,		GIFT,		255,  52,  40,  35,  30,  20,  20,  50, EXP_T3, 1, HornliuEvo,		&HornliuLearns };

const struct PokemonBase Smettbo		= {  12, "Smettbo",		KAEFER,		FLUG,		 45, 160,  60,  45,  50,  90,  80,  70, EXP_T3, 0, NULL,			&SmettboLearns };

const struct Evolution SafconEvo[]		= { 10, &Smettbo };
const struct PokemonBase Safcon			= {  11, "Safcon",		KAEFER,		KEINTYP,	120,  72,  50,  20,  55,  25,  25,  30, EXP_T3, 1, SafconEvo,		&SafconLearns };

const struct Evolution RaupyEvo[]		= {  7, &Safcon };
const struct PokemonBase Raupy			= {  10, "Raupy",		KAEFER,		KEINTYP,	255,  53,  45,  30,  35,  20,  20,  45, EXP_T3, 1, RaupyEvo,		&RaupyLearns };

const struct PokemonBase Turtok			= {   9, "Turtok",		WASSER,		KEINTYP,	 45, 210,  79,  83, 100,  85, 105,  78, EXP_T4, 0, NULL,			&TurtokLearns };

const struct Evolution SchillokEvo[]	= { 32, &Turtok };
const struct PokemonBase Schillok		= {   8, "Schillok",	WASSER,		KEINTYP,	 45, 143,  59,  63,  80,  65,  80,  58, EXP_T4, 1, SchillokEvo,		&SchillokLearns };

const struct Evolution SchiggyEvo[]		= { 16, &Schillok };
const struct PokemonBase Schiggy		= {   7, "Schiggy",		WASSER,		KEINTYP,	 45,  66,  44,  48,  65,  50,  64,  43, EXP_T4, 1, SchiggyEvo,		&SchiggyLearns };

const struct PokemonBase Glurak			= {   6, "Glurak",		FEUER,		FLUG,		 45, 209,  78,  84,  78, 109,  85, 100, EXP_T4, 0, NULL,			&GlurakLearns };

const struct Evolution GlutexoEvo[]		= { 32, &Glurak };
const struct PokemonBase Glutexo		= {   5, "Glutexo",		FEUER,		KEINTYP,	 45, 142,  58,  64,  58,  80,  65,  80, EXP_T4, 1, GlutexoEvo,		&GlutexoLearns };

const struct Evolution GlumandaEvo[]	= { 16, &Glutexo };
const struct PokemonBase Glumanda		= {   4, "Glumanda",	FEUER,		KEINTYP,	 45,  70,  39,  52,  43,  60,  50,  65, EXP_T4, 1, GlumandaEvo,		&GlumandaLearns };

const struct PokemonBase Bisaflor		= {   3, "Bisaflor",	PFLANZE,	GIFT,		 45, 208,  80,  82,  83, 100, 100,  80, EXP_T4, 0, NULL,			&BisaflorLearns };

const struct Evolution BisaknospEvo[]	= { 32, &Bisaflor };
const struct PokemonBase Bisaknosp		= {   2, "Bisaknosp",	PFLANZE,	GIFT,		 45, 141,  60,  62,  63,  80,  80,  60, EXP_T4, 1, BisaknospEvo,	&BisaknospLearns };

const struct Evolution BisasamEvo[]		= { 16, &Bisaknosp };
const struct PokemonBase Bisasam		= {   1, "Bisasam",		PFLANZE,	GIFT,		 45,  64,  45,  49,  49,  65,  65,  45, EXP_T4, 1, BisasamEvo,		&BisasamLearns };


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
