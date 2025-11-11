**GestionVoitures**

->Gestion d’une flotte de véhicules (thermiques, électriques, hybrides) en C++

# 🧾 Description

Ce projet met en œuvre un système orienté objet en C++ permettant de gérer différents types de véhicules :

- Véhicules thermiques (Classique)

- Véhicules électriques (Electrique)

- Véhicules hybrides (Hybride)

  
# 📁 Structure des fichiers

- Vehicule.h, Vehicule.cpp : classe de base abstraite.

- Voiture.h, Voiture.cpp : classe intermédiaire voiture abstraite.

- Classique.h, Classique.cpp : véhicule thermique, classe dérivée de voiture.

- Electrique.h, Electrique.cpp — véhicule électrique , classe dérivée de voiture.

- Hybride.h, Hybride.cpp — véhicule hybride, classe dérivée de classqiue et electrique.

- GestionVoitures.cpp : Programme principal pour tester les classes. 

# ✅ Fonctionnalités

- Déclaration d’une classe abstraite de base Vehicule.

- Classe dérivée abstraite Voiture avec caractéristiques communes aux voitures.

- Sous‑classes concrètes : Classique, Electrique, Hybride.

**Méthodes pour :**

- Afficher les informations d’un véhicule (afficher()).

- Calculer la consommation / l’énergie restante selon la distance parcourue (calculFuel(), calculCharge(), calculEnergie()).

- Exemple d’utilisation dans main() : instancier des véhicules, simuler des trajets, afficher état restant.
