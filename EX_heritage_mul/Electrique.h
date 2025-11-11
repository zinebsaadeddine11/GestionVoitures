#pragma once
#include "Voiture.h"
class Electrique : public virtual Voiture
{
protected:
	float qtCharge;
public:
	Electrique(string, string, string, int, float);
	void afficher() const override;
	void calculCharge(float);
	~Electrique();
};

