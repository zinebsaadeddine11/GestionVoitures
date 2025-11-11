#include "Vehicule.h"
Vehicule::Vehicule(string matricule, string model, string marque)
{
	cout <<"Constructeur de Vehicule" << endl;
	this->matricule = matricule;
	this->model = model;
	this->marque = marque;
}

Vehicule::~Vehicule()
{
	cout << "Destructeur de Vehicule" << endl;
}


