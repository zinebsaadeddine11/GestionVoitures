#include "Hybride.h"
Hybride::Hybride(string mat, string mod, string mar, int nbP, float qtF, float qtC):Voiture(mat,mod,mar,nbP),Classique(mat,mod,mar,nbP,qtF),Electrique(mat, mod, mar, nbP, qtC)
{
	cout << "Constructeur de Hybride" << endl;
}

void Hybride::afficher() const
{
	cout << "Info voiture Hybride :" << endl;
	cout << "Nombre de portes : " << this->nbPortes << endl;
	cout << "Modele : " << this->model << endl;
	cout << "Marque : " << this->marque << endl;
	cout << "Matricule : " << this->matricule << endl;
	cout << "Quantite Charge : " << this->qtCharge << endl;
	cout << "Quantite Fuel : " << this->qtFuel << endl;
}

void Hybride::calculEnergie(float distance)
{
	cout << "--- Calcul d\'energie pour voiture Hybride ---" << endl;
	Classique::calculFuel(distance / 2);      // moitié en fuel
	Electrique::calculCharge(distance / 2);     // moitié en électrique
}

Hybride::~Hybride()
{
	cout << "Destructeur de Hybride" << endl;
}
