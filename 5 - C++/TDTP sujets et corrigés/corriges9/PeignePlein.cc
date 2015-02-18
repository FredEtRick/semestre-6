#include<iostream>
using namespace std;
#include"PeignePlein.h"


//---------------- Question 1,6,7
PeignePlein::PeignePlein() {}

PeignePlein::PeignePlein(TypeCle c, PeignePlein * g, PeignePlein * d) 
: Arbre(c, g, d){}

PeignePlein::PeignePlein(const PeignePlein& A) 
{ if (A.estVide())racine=NULL;
 else
   {//voir ArbreRech pour explications sur le dynamic_cast
    Arbre * AG=new PeignePlein(*dynamic_cast<PeignePlein*>(A.sag()));
    Arbre * AD=new PeignePlein(*dynamic_cast<PeignePlein*>(A.sad()));
    racine=new Noeud(A.clef(), AG, AD);}
}

PeignePlein::~PeignePlein() {}

PeignePlein& PeignePlein::operator=(const PeignePlein& A) 
 {if (this!=&A)
  {if (!estVide())
    {delete sag();
     delete sad();
     delete racine;
    }
  if (A.estVide()) racine=NULL;
  else
   {Arbre * AG=new PeignePlein(*dynamic_cast<PeignePlein*>(A.sag()));
    Arbre * AD=new PeignePlein(*dynamic_cast<PeignePlein*>(A.sad()));
    racine=new Noeud(A.clef(), AG, AD);}
  }
 return *this;
}

//---------------- Question 2, noyau
//---------------- toutes les methodes sont factorisées dans Arbre

//---------------- Question 3, insertion
//---------------- Peigne : en respectant la forme imposee
//---------------- operator<< : utile seulement dans Arbre

void PeignePlein::insere(TypeCle c) 
{if (estVide())
   {Arbre *ArbreVide1=new PeignePlein, *ArbreVide2=new PeignePlein;
   //variables intermediaires non obligatoires
    racine=new Noeud(c, ArbreVide1, ArbreVide2);}
 else 
 if (sag()->estVide())
   sag()->insere(c);
 else
  {Arbre *ArbreVide=new PeignePlein;
   PeignePlein* pA=new PeignePlein; pA->racine=racine;
   racine=new Noeud(c, ArbreVide, pA);}
}

void PeignePlein::imprimeContenu(ostream& os)const
{
 if (!sag()->estVide()) os << "Gauche = "<< sag()->clef() << "  ";
 else os << "Gauche = .  ";
 os << "Cle = " << clef() << " ";
 os << endl;
 if (!sad()->estVide()) sad()->imprimeContenu(os);
}
void PeignePlein::imprimeEntete(ostream& os)const
{os << "peigne plein: affichage des clefs dent par dent" << endl;}

//---------------- Question 5, recherche

// On peut en heriter  
// ou on peut la redefinir pour supprimer l'appel récursif gauche:
bool PeignePlein::recherche(TypeCle C)const 
   {if (estVide()) return 0;
    else if(clef()==C) return 1;
        else return  C == sag()->clef() || sad()->recherche(C) ;
   }












