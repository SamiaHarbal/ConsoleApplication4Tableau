#include "TableauBorne.h"
#include<iostream>
using namespace std;
TableauBorne::TableauBorne(int n, float min, float max)
    :Tableau(n), borneMin(min), borneMax(max)
{
    if (borneMin > borneMax) {
        swap(borneMin, borneMax);
    }
    for (int i = 0; i < this->taille; ++i)
        tab[i] = borneMin + i * (borneMax - borneMin) / (taille - 1);
}

float TableauBorne::operator[](int index) const
{
    return this->tab[index];
}
void TableauBorne::modifier(int index, float nv)
{
    if (index < 0 || index >= taille) {
        cout << "Erreur: indice " << index << " hors limites." << endl;
        return;
    }
    if (nv < borneMin || nv > borneMax) {
        cout << "Erreur: valeur " << nv
            << " hors [" << borneMin << ", " << borneMax << "]." << endl;
        return;
    }

    this->tab[index] = nv;
}

void TableauBorne::afficher() const {
    cout << "Tableau borne [" << borneMin << ", " << borneMax << "] : ";
    Tableau::afficher();
}