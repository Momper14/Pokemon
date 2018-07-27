#pragma once

#include "types.h"
#include "Util.h"

#define STONE_THUNDER	101
#define STONE_MOON		102
#define STONE_FIRE		103
#define STONE_LEAF		104
#define STONE_WATER		105
#define EVO_TRADE		110

#define STAT_KP						0
#define STAT_ANGRIFF				1
#define STAT_VERTEIDIGUNG			2
#define STAT_SPEZIALANGRIFF			3
#define STAT_SPEZIALVERTEIDIGUNG	4
#define STAT_INITIATIVE				5

#define EXP_T2 2
#define EXP_T3 3
#define EXP_T4 4
#define EXP_T5 5


struct PokemonBase{
	const uint natDex;
	const char *name;
	const byte typ1;
	const byte typ2;
	const byte catchrate;
	const uint exp;
	const uint stats[6];
	const byte expTier;
	const byte countEvolutions;
	const struct Evolution *evolutions;
	const struct Learnables *learnables;
};

struct Evolution{
	const byte evolCon;
	const struct PokemonBase *evol;
};

struct Evolutions{
	const byte count;
	const struct Evolution *evolutions;
};

struct Learnable{
	const byte lvl;
	const struct Attacke *attacke;
};

struct Learnables{
	const byte count;
	const struct Learnable *learnables;
};

extern const struct PokemonBase Mew;
extern const struct PokemonBase Mewtu;
extern const struct PokemonBase Dragoran;
extern const struct PokemonBase Dragonir;
extern const struct PokemonBase Dratini;
extern const struct PokemonBase Lavados;
extern const struct PokemonBase Zapdos;
extern const struct PokemonBase Arktos;
extern const struct PokemonBase Relaxo;
extern const struct PokemonBase Aerodactyl;
extern const struct PokemonBase Kabutops;
extern const struct PokemonBase Kabuto;
extern const struct PokemonBase Amoroso;
extern const struct PokemonBase Amonitas;
extern const struct PokemonBase Porygon;
extern const struct PokemonBase Flamara;
extern const struct PokemonBase Blitza;
extern const struct PokemonBase Aquana;
extern const struct PokemonBase Evoli;
extern const struct PokemonBase Ditto;
extern const struct PokemonBase Lapras;
extern const struct PokemonBase Garados;
extern const struct PokemonBase Karpador;
extern const struct PokemonBase Tauros;
extern const struct PokemonBase Pinsir;
extern const struct PokemonBase Magmar;
extern const struct PokemonBase Elektek;
extern const struct PokemonBase Rossana;
extern const struct PokemonBase Sichlor;
extern const struct PokemonBase Pantimos;
extern const struct PokemonBase Starmie;
extern const struct PokemonBase Sterndu;
extern const struct PokemonBase Golking;
extern const struct PokemonBase Goldini;
extern const struct PokemonBase Seemon;
extern const struct PokemonBase Seeper;
extern const struct PokemonBase Kangama;
extern const struct PokemonBase Tangela;
extern const struct PokemonBase Chaneira;
extern const struct PokemonBase Rizeros;
extern const struct PokemonBase Rihorn;
extern const struct PokemonBase Smogmog;
extern const struct PokemonBase Smogon;
extern const struct PokemonBase Schlurp;
extern const struct PokemonBase Nockchan;
extern const struct PokemonBase Kicklee;
extern const struct PokemonBase Knogga;
extern const struct PokemonBase Tragosso;
extern const struct PokemonBase Kokowei;
extern const struct PokemonBase Owei;
extern const struct PokemonBase Lektrobal;
extern const struct PokemonBase Voltobal;
extern const struct PokemonBase Kingler;
extern const struct PokemonBase Krabby;
extern const struct PokemonBase Hypno;
extern const struct PokemonBase Traumato;
extern const struct PokemonBase Onix;
extern const struct PokemonBase Gengar;
extern const struct PokemonBase Alpollo;
extern const struct PokemonBase Nebulak;
extern const struct PokemonBase Austos;
extern const struct PokemonBase Muschas;
extern const struct PokemonBase Sleimok;
extern const struct PokemonBase Sleima;
extern const struct PokemonBase Jugong;
extern const struct PokemonBase Jurob;
extern const struct PokemonBase Dodri;
extern const struct PokemonBase Dodu;
extern const struct PokemonBase Porenta;
extern const struct PokemonBase Magneton;
extern const struct PokemonBase Magnetilo;
extern const struct PokemonBase Lahmus;
extern const struct PokemonBase Flegmon;
extern const struct PokemonBase Gallopa;
extern const struct PokemonBase Ponita;
extern const struct PokemonBase Geowaz;
extern const struct PokemonBase Georok;
extern const struct PokemonBase Kleinstein;
extern const struct PokemonBase Tentoxa;
extern const struct PokemonBase Tentacha;
extern const struct PokemonBase Sarzenia;
extern const struct PokemonBase Ultrigaria;
extern const struct PokemonBase Knofensa;
extern const struct PokemonBase Machomei;
extern const struct PokemonBase Maschock;
extern const struct PokemonBase Machollo;
extern const struct PokemonBase Simsala;
extern const struct PokemonBase Kadabra;
extern const struct PokemonBase Abra;
extern const struct PokemonBase Quappo;
extern const struct PokemonBase Quaputzi;
extern const struct PokemonBase Quapsel;
extern const struct PokemonBase Arkani;
extern const struct PokemonBase Fukano;
extern const struct PokemonBase Rasaff;
extern const struct PokemonBase Menki;
extern const struct PokemonBase Entoron;
extern const struct PokemonBase Enton;
extern const struct PokemonBase Snobilikat;
extern const struct PokemonBase Mauzi;
extern const struct PokemonBase Digdri;
extern const struct PokemonBase Digda;
extern const struct PokemonBase Omot;
extern const struct PokemonBase Bluzuk;
extern const struct PokemonBase Parasek;
extern const struct PokemonBase Paras;
extern const struct PokemonBase Giflor;
extern const struct PokemonBase Duflor;
extern const struct PokemonBase Myrapla;
extern const struct PokemonBase Golbat;
extern const struct PokemonBase Zubat;
extern const struct PokemonBase Knuddeluff;
extern const struct PokemonBase Pummeluff;
extern const struct PokemonBase Vulnona;
extern const struct PokemonBase Vulpix;
extern const struct PokemonBase Pixi;
extern const struct PokemonBase Piepi;
extern const struct PokemonBase Nidoking;
extern const struct PokemonBase Nidorino;
extern const struct PokemonBase NidoranM;
extern const struct PokemonBase Nidoqueen;
extern const struct PokemonBase Nidorina;
extern const struct PokemonBase NidoranW;
extern const struct PokemonBase Sandamer;
extern const struct PokemonBase Sandan;
extern const struct PokemonBase Raichu;
extern const struct PokemonBase Pikachu;
extern const struct PokemonBase Arbok;
extern const struct PokemonBase Rettan;
extern const struct PokemonBase Ibitak;
extern const struct PokemonBase Habitak;
extern const struct PokemonBase Rattikarl;
extern const struct PokemonBase Rattfratz;
extern const struct PokemonBase Tauboss;
extern const struct PokemonBase Tauboga;
extern const struct PokemonBase Taubsi;
extern const struct PokemonBase Bibor;
extern const struct PokemonBase Kokuna;
extern const struct PokemonBase Hornliu;
extern const struct PokemonBase Smettbo;
extern const struct PokemonBase Safcon;
extern const struct PokemonBase Raupy;
extern const struct PokemonBase Turtok;
extern const struct PokemonBase Schillok;
extern const struct PokemonBase Schiggy;
extern const struct PokemonBase Glurak;
extern const struct PokemonBase Glutexo;
extern const struct PokemonBase Glumanda;
extern const struct PokemonBase Bisaflor;
extern const struct PokemonBase Bisaknosp;
extern const struct PokemonBase Bisasam;

extern const struct PokemonBase *PokemonBaseNatDex[152];
