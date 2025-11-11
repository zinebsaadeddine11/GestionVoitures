#pragma once
#include "Voiture.h"
class Classique : public virtual Voiture
{
protected:
	float qtFuel;

public:
	Classique(string, string, string, int, float);
	void calculFuel(float) ;
	void afficher() const override;
	~Classique();

};

