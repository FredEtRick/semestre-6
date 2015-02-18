#ifndef Arbre_h
#define Arbre_h
#include "Noeud.h"
class Arbre
{
//---------------- Questions 1,6,7
 protected:
 Noeud * racine;

 public:
 Arbre();
 Arbre(TypeCle c, Arbre* g, Arbre * d);
 // Arbre(const Arbre&);//impossible pour classe abstraite
 virtual ~Arbre();
 // virtual Arbre& operator=(const Arbre&);//impossible pour classe abstraite

//---------------- Question 2, noyau
virtual TypeCle clef()const;
virtual Arbre*& sag()const;
virtual Arbre*& sad()const;
virtual bool estVide()const;
virtual bool feuille()const;

//---------------- Question 3, insertion
 virtual void insere(TypeCle c)=0; //methode abstraite
   //on pourrait definir une insertion "par defaut"

//---------------- Question 4, affichage
protected :
virtual void imprimeBis(ostream&, int)const;
public:
virtual void imprime(ostream&)const;
virtual void imprimeContenu(ostream&)const;
virtual void imprimeEntete(ostream&)const;

//---------------- Question 5, recherche
virtual bool recherche(TypeCle c)const;

};
// Insertion dans un flot
ostream& operator<<(ostream& os, const Arbre& A);

#endif
