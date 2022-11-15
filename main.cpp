#include <QApplication>
#include <QDebug>
#include <iostream>
#include "personnage.h"
#include "guerrier.h"
#include "voleur.h"

using namespace std;


void faire_rencontrer(Personnage *un,
                      Personnage *autre){
    cout<<un->getNom() <<" rencontre "<<autre->getNom()<<" : ";
    un->rencontrer(*autre);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Guerrier *g(new Guerrier("warrior"));
    Voleur *v(new Voleur("pocket"));

    faire_rencontrer(g,v);


    return a.exec();
}
