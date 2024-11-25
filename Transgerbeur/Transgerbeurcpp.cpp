#include <iostream>
#include <iomanip>
using namespace std;


enum Eetat { vide, palette, roulea };
struct Spalette
{
	int poids;
	char reference[19];
};
struct Srouleau
{
	float longueur;
	int numero;
};
union Ucontenu
{
	Spalette paletteCasier;
	Srouleau rouleauCasier;
};
struct Scasier
{
	int px, py;
	Eetat etat;
	Ucontenu cont;
};



int main()
{
	cout << "-Transgerbeur : " << endl;

	Scasier tabCasier[9];

	Srouleau ro1;
	ro1.numero = 1;
	ro1.longueur = 15.5;
	Spalette pa1;
	pa1.poids = 25;
	strcpy_s(pa1.reference, "ref1");
	Eetat etatC1;
	etatC1 = vide;
	Ucontenu cont;
	cont.paletteCasier = pa1;
	cont.rouleauCasier = ro1;
	Scasier c1;
	c1.etat = etatC1;
	c1.px = 2;
	c1.py = 3;
	Scasier c2;
	c2.etat = palette;
	tabCasier[0] = c1;
	tabCasier[2] = c2;
	cout << sizeof(c1) << " ; " << sizeof(c2) << " ; " << sizeof(ro1) << " ; " << sizeof(pa1) << " ; " << sizeof(etatC1);


}