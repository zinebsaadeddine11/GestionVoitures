#pragma once
#include "Vehicule.h"
class Voiture : public Vehicule
{
protected:
	int nbPortes;
public:
	Voiture(string, string, string, int);
	~Voiture();
};

