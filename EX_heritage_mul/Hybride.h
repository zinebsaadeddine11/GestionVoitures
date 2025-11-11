#pragma once
#include "Classique.h"
#include"Electrique.h"
class Hybride :public Classique,public Electrique
{
public:
	Hybride(string, string, string, int, float, float);
	void afficher() const override;
	void calculEnergie(float);
	~Hybride();

};

