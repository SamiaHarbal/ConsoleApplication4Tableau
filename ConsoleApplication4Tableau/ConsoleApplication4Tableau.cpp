// ConsoleApplication4Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"
using namespace std;
int main() {
    cout << "--- Test de la classe Tableau ---" << endl;
    Tableau t1(3);
    t1[0] = 1.5f;
    t1[1] = 4.2f;
    t1[2] = 8.9f;
    cout << "t1 : ";
    t1.afficher();
    Tableau t2 = t1;
    cout << "t2 (copie de t1) : ";
    t2.afficher();

    cout << "\n--- Test de la classe TableauBorne ---" << endl;
    TableauBorne tb(3, 0.0f, 10.0f);
    tb.modifier(0, 2.5f);
    tb.modifier(1, 7.8f);
    tb.modifier(2, 15.0f);
    cout << "Elements de tb : ";
    cout << tb[0] << " " << tb[1] << " " << tb[2] << endl;

    return 0;
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
