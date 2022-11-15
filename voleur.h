#ifndef VOLEUR_H
#define VOLEUR_H
#include <iostream>
#include "personnage.h"

class Voleur : public Personnage
{
public:
    Voleur();
    Voleur(const string & nom):Personnage(nom){};
    void rencontrer(const Personnage & ps) const{
        cout<<" fiou " <<endl;
    }

};

#endif // VOLEUR_H
