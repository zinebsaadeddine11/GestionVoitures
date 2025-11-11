#include "Voiture.h"

Voiture::Voiture(string mat, string mod, string marque, int nbP):Vehicule(mat,mod,marque),nbPortes(nbP)
{
	cout << "Constructeur de Voiture" << endl;
}

Voiture::~Voiture()
{
	cout << "Destructeur de Voiture" << endl;
}

