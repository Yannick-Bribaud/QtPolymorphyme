#ifndef GUERRIER_H
#define GUERRIER_H
#include "personnage.h"
#include <iostream>
using namespace std;

class Guerrier : public Personnage
{
public:
    Guerrier();
    Guerrier(const string & _nom):Personnage(_nom){};
    void rencontrer(Personnage & p)const{
        cout <<"Boum !" << endl;
    }
};

#endif // GUERRIER_H
