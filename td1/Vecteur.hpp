#ifndef DEF_VECTEUR
#define DEF_VECTEUR

#include <string>

class Vecteur
{
    public:
    //Constructeurs
    Vecteur();
    Vecteur(int dim);
    Vecteur(int dim, float composantes);
    ~Vecteur();//Destructeur

    //Méthodes (fonctions)
    void AfficheVecteur();
    void ComposerVecteur();

    private:
    //Attributs
    int m_dim;
    float * m_composantes;
};

#endif