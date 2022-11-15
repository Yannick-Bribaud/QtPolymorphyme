#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <QString>
#include <iostream>
using namespace std;


class Personnage
{
public:
    Personnage();
    Personnage(const string & p_nom):nom(p_nom){}
    virtual void rencontrer(Personnage & p)const{
       cout << "Bonjour !"<<endl;
    };

    // getters
    string getNom()const {return nom;}

    //setters
    void setNom(const string & name){
        nom=name;
    }

protected:
    string nom;
};

#endif // PERSONNAGE_H
