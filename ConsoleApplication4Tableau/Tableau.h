#pragma once
class Tableau
{
protected:
    int taille;
    float* tab;

public:
    Tableau(int n);
    Tableau(const Tableau& autre);
    Tableau& operator=(const Tableau& autre);
    float& operator[](int index);
    void afficher() const;
    ~Tableau();
};
