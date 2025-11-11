#pragma once
#include<iostream>
using namespace std;
class Vehicule
{
protected:
	string matricule;
	string model;
	string marque;
public:
	Vehicule(string, string, string);
	virtual void afficher() const = 0;
	~Vehicule();
};

