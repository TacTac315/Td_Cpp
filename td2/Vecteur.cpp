#include "Vecteur.hpp"
#include <iostream>
using namespace std;

// Constructeur
Vecteur::Vecteur() : m_dim(0), m_composantes(0)
{
}

Vecteur::Vecteur(int dim) : m_dim(dim), m_composantes(0)
{
}

Vecteur::Vecteur(int dim, float composantes)
{
    m_dim = dim;
    m_composantes = new float[dim];
    for (int i = 0; i < dim; i++)
    {
        m_composantes[i] = composantes;
    }
}

// Destructeur
Vecteur::~Vecteur()
{
    delete[] m_composantes;
}

// Méthodes

void Vecteur::AfficheVecteur()
{
    if (m_dim == 0)
    {
        cout << "Vecteur Vide !" << endl;
    }
    else if (m_composantes == NULL)
    {
        cout << "Le vecteur à " << m_dim << " composantes nulles" << endl;
    }
    else
    {
        for (int i = 0; i < m_dim; i++)
        {
            cout << "Composante " << (i + 1) << ": " << m_composantes[i] << endl;
        }
    }
}

void Vecteur::ComposerVecteur()
{
    if (m_dim == 0)
    {
        cout << "Vecteur Vide ! Veuillez donner la nouvelle dimension du vecteur" << endl;
        cin >> m_dim;
        ComposerVecteur();
    }
    else
    {
        if (m_composantes == NULL)
        {
            m_composantes = new float[m_dim];
        }
        for (int i = 0; i < m_dim; i++)
        {
            cout << "Valeur de la composante [" << (i + 1) << "] : ";
            cin >> m_composantes[i];
            cout << endl;
        }
    }
}

float & Vecteur::operator[](int indice)
{   
    return m_composantes[indice];
}

float Vecteur::operator[](int indice) const
{   
    return m_composantes[indice];
}
