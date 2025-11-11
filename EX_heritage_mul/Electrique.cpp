#include "Electrique.h"

Electrique::Electrique(string mat, string mod, string mar, int nbP, float qtC):Voiture(mat,mod,mar,nbP),qtCharge(qtC)
{
	cout << "Constructeur de Electrique" << endl;
}

void Electrique::afficher() const
{
	cout << "Info voiture Electrique :" << endl;
	cout << "Nombre de portes : " << this->nbPortes << endl;
	cout << "Modele : " << this->model << endl;
	cout << "Marque : " << this->marque << endl;
	cout << "Matricule : " << this->matricule << endl;
	cout << "Quantite Charge : " << this->qtCharge << endl;
}

void Electrique::calculCharge(float distance)
{
	float conso = distance * 0.15; // 15 kWh pour 100 km
	if (conso > this->qtCharge)
		cout << "Pas assez de charge pour ce trajet !" << endl;
	else {
		this->qtCharge -= conso;
		cout << "Trajet de " << distance << " km effectue. "
			<< "Charge consommee : " << conso << " kWh, "
			<< "Charge restante : " << this->qtCharge << " kWh" << endl;
	}
}

Electrique::~Electrique()
{
	cout << "Destructeur de Electrique" << endl;
}
