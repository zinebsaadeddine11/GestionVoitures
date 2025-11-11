
#include"Classique.h"
#include"Electrique.h"
#include"Voiture.h"
#include"Vehicule.h"
#include"Hybride.h"
int main()
{
    Classique c1("123ABC", "208", "Peugeot", 4, 40);
    Classique* c2 = new Classique("789DEF", "Golf", "Volkswagen", 4, 50);

    Electrique* e1 = new Electrique("XY-987-Z", "Model 3", "Tesla", 4, 60);
    Electrique* e2 = new Electrique("EL-987-Y", "Ioniq", "Hyundai", 4, 38);

    Hybride* h1 = new Hybride("HYB-001", "Prius", "Toyota", 4, 35, 45);
    Hybride* h2 = new Hybride("HYB-002", "Camry", "Toyota", 4, 40, 50);

    cout << "______________________________________________________________________________________________________\n" << endl;
    c1.afficher();
    c1.calculFuel(60);
    cout << "______________________________________________________________________________________________________\n" << endl;
    c2->afficher();
    c2->calculFuel(100);
    cout << "______________________________________________________________________________________________________\n" << endl;
    e1->afficher();
    e1->calculCharge(80);
    cout << "______________________________________________________________________________________________________\n" << endl;
    e2->afficher();
    e2->calculCharge(150);
    cout << "______________________________________________________________________________________________________\n" << endl;
    h1->afficher();
    h1->calculEnergie(200);
    cout << "______________________________________________________________________________________________________\n" << endl;
    h2->afficher();
    h2->calculEnergie(10);
    cout << "______________________________________________________________________________________________________\n" << endl;
    delete c2, e1, e2, h1, h2;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
