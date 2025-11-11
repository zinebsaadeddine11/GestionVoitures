#include "Classique.h"

Classique::Classique(string mat, string mod, string mar, int nbP, float qF):Voiture(mat,mod,mar,nbP),qtFuel(qF)
{
	cout << "Constructeur de Classique" << endl;
}

void Classique::calculFuel(float distance)
{
		float conso = distance * 0.08; // 8L/100km
		if (conso > this->qtFuel)
			cout << "Pas assez de fuel pour ce trajet !" << endl;
		else {
			this->qtFuel -= conso;
			cout << "Trajet de " << distance << " km effectue. "
				<< "Fuel consomme : " << conso << " L, "
				<< "Fuel restant : " << qtFuel << " L" << endl;
		}
}

void Classique::afficher() const
{
	cout << "Info voiture Classique :" << endl;
	cout << "Nombre de portes : " << this->nbPortes << endl;
	cout << "Modele : " << this->model << endl;
	cout << "Marque : " << this->marque << endl;
	cout << "Matricule : " << this->matricule << endl;
	cout << "Quantite Fuel : " << this->qtFuel << endl;

}

Classique::~Classique()
{
	cout << "Destructeur de Classique" << endl;
}
