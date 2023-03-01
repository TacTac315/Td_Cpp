#include <iostream>
#include "Vecteur.hpp"
using namespace std;

int main()
{
    Vecteur V1; //Vecteur vide
    Vecteur V2(3); //Vecteur de dimension 3
    Vecteur V3(5, 1.2); //Vecteur de dim 5 avec 1.2
    cout<<"Vecteur 1:"<<endl;
    V1.AfficheVecteur();
    cout<<"Vecteur 2:"<<endl;
    V2.AfficheVecteur();
    cout<<"Vecteur 3:"<<endl;
    V3.AfficheVecteur();
    cout<<"On essaye de remplir le vecteur sans dimension : "<<endl;
    V1.ComposerVecteur();
    cout<<"On essaye de remplir un vecteur de dimension 3 sans élement"<<endl;
    V2.ComposerVecteur();
    cout<<"On essaye de remplir un vecteur de dimension 5 contenant des éléments"<<endl;
    V3.ComposerVecteur();
    cout<<"Nouveau vecteur 1:"<<endl;
    V1.AfficheVecteur();
    cout<<"Nouveau vecteur 2: "<<endl;
    V2.AfficheVecteur();
    cout<<"Nouveau vecteur 3:"<<endl;
    V3.AfficheVecteur();
    return 0;
}