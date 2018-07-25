#pragma once

#include "types.h"
#include "Util.h"
#include "attacks.h"

#define stoneThunder 101
#define stoneMoon 102
#define stoneFire 103
#define stoneLeaf 104
#define stoneWater 105
#define trade 110

#define kp 0
#define angriff 1
#define verteidigung 2
#define spezialangriff 3
#define spezielverteidigung 4
#define initiative 5

#define expT1 1
#define expT2 2
#define expT3 3
#define expT4 4
#define expT5 5
#define expT6 6


struct pokemonBase{
	const uint natDex;
	const char *name;
	const byte typ1;
	const byte typ2;
	const byte catchrate;
	const uint exp;
	const uint stats[6];
	const byte expTier;
	const byte numEvolutions;
	const struct evolution *evolutions;
	const byte numLearnable;
	const struct learnable *learnables;
};

struct evolution{
	const byte evolCon;
	const struct pokemonBase *evol;
};

struct learnable{
	const byte lvl;
	const struct Attacke *attacke;
};

extern const struct pokemonBase Mew;
extern const struct pokemonBase Mewtu;
extern const struct pokemonBase Dragoran;
extern const struct pokemonBase Dragonir;
extern const struct pokemonBase Dratini;
extern const struct pokemonBase Lavados;
extern const struct pokemonBase Zapdos;
extern const struct pokemonBase Arktos;
extern const struct pokemonBase Relaxo;
extern const struct pokemonBase Aerodactyl;
extern const struct pokemonBase Kabutops;
extern const struct pokemonBase Kabuto;
extern const struct pokemonBase Amoroso;
extern const struct pokemonBase Amonitas;
extern const struct pokemonBase Porygon;
extern const struct pokemonBase Flamara;
extern const struct pokemonBase Blitza;
extern const struct pokemonBase Aquana;
extern const struct pokemonBase Evoli;
extern const struct pokemonBase Ditto;
extern const struct pokemonBase Lapras;
extern const struct pokemonBase Garados;
extern const struct pokemonBase Karpador;
extern const struct pokemonBase Tauros;
extern const struct pokemonBase Pinsir;
extern const struct pokemonBase Magmar;
extern const struct pokemonBase Elektek;
extern const struct pokemonBase Rossana;
extern const struct pokemonBase Sichlor;
extern const struct pokemonBase Pantimos;
extern const struct pokemonBase Starmie;
extern const struct pokemonBase Sterndu;
extern const struct pokemonBase Golking;
extern const struct pokemonBase Goldini;
extern const struct pokemonBase Seemon;
extern const struct pokemonBase Seeper;
extern const struct pokemonBase Kangama;
extern const struct pokemonBase Tangela;
extern const struct pokemonBase Chaneira;
extern const struct pokemonBase Rizeros;
extern const struct pokemonBase Rihorn;
extern const struct pokemonBase Smogmog;
extern const struct pokemonBase Smogon;
extern const struct pokemonBase Schlurp;
extern const struct pokemonBase Nockchan;
extern const struct pokemonBase Kicklee;
extern const struct pokemonBase Knogga;
extern const struct pokemonBase Tragosso;
extern const struct pokemonBase Kokowei;
extern const struct pokemonBase Owei;
extern const struct pokemonBase Lektrobal;
extern const struct pokemonBase Voltobal;
extern const struct pokemonBase Kingler;
extern const struct pokemonBase Krabby;
extern const struct pokemonBase Hypno;
extern const struct pokemonBase Traumato;
extern const struct pokemonBase Onix;
extern const struct pokemonBase Gengar;
extern const struct pokemonBase Alpollo;
extern const struct pokemonBase Nebulak;
extern const struct pokemonBase Austos;
extern const struct pokemonBase Muschas;
extern const struct pokemonBase Sleimok;
extern const struct pokemonBase Sleima;
extern const struct pokemonBase Jugong;
extern const struct pokemonBase Jurob;
extern const struct pokemonBase Dodri;
extern const struct pokemonBase Dodu;
extern const struct pokemonBase Porenta;
extern const struct pokemonBase Magneton;
extern const struct pokemonBase Magnetilo;
extern const struct pokemonBase Lahmus;
extern const struct pokemonBase Flegmon;
extern const struct pokemonBase Gallopa;
extern const struct pokemonBase Ponita;
extern const struct pokemonBase Geowaz;
extern const struct pokemonBase Georok;
extern const struct pokemonBase Kleinstein;
extern const struct pokemonBase Tentoxa;
extern const struct pokemonBase Tentacha;
extern const struct pokemonBase Sarzenia;
extern const struct pokemonBase Ultrigaria;
extern const struct pokemonBase Knofensa;
extern const struct pokemonBase Machomei;
extern const struct pokemonBase Maschock;
extern const struct pokemonBase Machollo;
extern const struct pokemonBase Simsala;
extern const struct pokemonBase Kadabra;
extern const struct pokemonBase Abra;
extern const struct pokemonBase Quappo;
extern const struct pokemonBase Quaputzi;
extern const struct pokemonBase Quapsel;
extern const struct pokemonBase Arkani;
extern const struct pokemonBase Fukano;
extern const struct pokemonBase Rasaff;
extern const struct pokemonBase Menki;
extern const struct pokemonBase Entoron;
extern const struct pokemonBase Enton;
extern const struct pokemonBase Snobilikat;
extern const struct pokemonBase Mauzi;
extern const struct pokemonBase Digdri;
extern const struct pokemonBase Digda;
extern const struct pokemonBase Omot;
extern const struct pokemonBase Bluzuk;
extern const struct pokemonBase Parasek;
extern const struct pokemonBase Paras;
extern const struct pokemonBase Giflor;
extern const struct pokemonBase Duflor;
extern const struct pokemonBase Myrapla;
extern const struct pokemonBase Golbat;
extern const struct pokemonBase Zubat;
extern const struct pokemonBase Knuddeluff;
extern const struct pokemonBase Pummeluff;
extern const struct pokemonBase Vulnona;
extern const struct pokemonBase Vulpix;
extern const struct pokemonBase Pixi;
extern const struct pokemonBase Piepi;
extern const struct pokemonBase Nidoking;
extern const struct pokemonBase Nidorino;
extern const struct pokemonBase NidoranM;
extern const struct pokemonBase Nidoqueen;
extern const struct pokemonBase Nidorina;
extern const struct pokemonBase NidoranW;
extern const struct pokemonBase Sandamer;
extern const struct pokemonBase Sandan;
extern const struct pokemonBase Raichu;
extern const struct pokemonBase Pikachu;
extern const struct pokemonBase Arbok;
extern const struct pokemonBase Rettan;
extern const struct pokemonBase Ibitak;
extern const struct pokemonBase Habitak;
extern const struct pokemonBase Rattikarl;
extern const struct pokemonBase Rattfratz;
extern const struct pokemonBase Tauboss;
extern const struct pokemonBase Tauboga;
extern const struct pokemonBase Taubsi;
extern const struct pokemonBase Bibor;
extern const struct pokemonBase Kokuna;
extern const struct pokemonBase Hornliu;
extern const struct pokemonBase Smettbo;
extern const struct pokemonBase Safcon;
extern const struct pokemonBase Raupy;
extern const struct pokemonBase Turtok;
extern const struct pokemonBase Schillok;
extern const struct pokemonBase Schiggy;
extern const struct pokemonBase Glurak;
extern const struct pokemonBase Glutexo;
extern const struct pokemonBase Glumanda;
extern const struct pokemonBase Bisaflor;
extern const struct pokemonBase Bisaknosp;
extern const struct pokemonBase Bisasam;

extern const struct pokemonBase *pokemons[152];
