#include <iostream>
#include <iomanip>
using namespace std;


enum Eetat { vide, palette, roulea };
struct Spalette
{
	int poids;
	char* reference[19];
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


	
}