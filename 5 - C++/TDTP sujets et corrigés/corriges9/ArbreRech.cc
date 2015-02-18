#include<iostream>
using namespace std;
#include <typeinfo>
#include "ArbreRech.h"

//---------------- Question 1,6,7

ArbreRech::ArbreRech(){}

ArbreRech::ArbreRech(TypeCle c,ArbreRech* g,ArbreRech * d)
  : Arbre(c, g, d){}


ArbreRech::ArbreRech(const ArbreRech& A)
{ if (A.estVide())racine=NULL;
  else
    {/*
     il faut creer des copies des sous arbres gauche et droit de A;
     ces sous arbres sont des ArbreRech connus a travers des pointeurs
     de type Arbre. Or:
     1)l'ecriture new ArbreRech(*(A.sag())) ne marche pas car le constructeur
       par copie de ArbreRech veut un parametre de type ArbreRech;
     2)les ecritures
           new ArbreRech((ArbreRech)(*(A.sag())));
       ou  new ArbreRech(*(ArbreRech*)(A.sag())); 
      ne marchent pas non  plus car le C++ n'accepte pas de voir ce qu'il suppose 
      etre un objet de type Arbre comme si c'etait un objet d'une sous-classe
      de Arbre;
     3) la seule solution correcte consiste a utiliser le dynamic_cast,
     qui demande au C++ d'attendre l'execution, de verifier si  l'objet suppose 
     de type Arbre est bien un ArbreRech, et de faire le cast seulement 
     dans ce cas-la.
     */
    Arbre * AG=new ArbreRech(*dynamic_cast<ArbreRech*>(A.sag()));
    Arbre * AD=new ArbreRech(*dynamic_cast<ArbreRech*>(A.sad()));
    racine=new Noeud(A.clef(), AG, AD);}
 }

ArbreRech::~ArbreRech(){}

ArbreRech& ArbreRech::operator=(const ArbreRech& A)
 {if (this!=&A)
  {if (!estVide())
    {delete sag();delete sad(); delete racine;}
  if (A.estVide()) racine=NULL;
  else
   {Arbre * AG=new ArbreRech(*dynamic_cast<ArbreRech*>(A.sag()));
    Arbre * AD=new ArbreRech(*dynamic_cast<ArbreRech*>(A.sad()));
    racine=new Noeud(A.clef(), AG, AD);}
  }
 return *this;
 }

//---------------- Question 2, noyau
//---------------- toutes les methodes sont factorisées dans Arbre

//---------------- Question 3, insertion
//---------------- ArbreRech : En respectant l'ordre des clefs
//---------------- operator<< : utile seulement dans Arbre

void ArbreRech::insere(TypeCle c)
 {//sans creer de doublons
  if (estVide())
   {//surtout pas le meme arbre vide !
    Arbre *ArbreVide1=new ArbreRech,*ArbreVide2=new ArbreRech;
   //variables intermediaires non obligatoires
    racine=new Noeud(c, ArbreVide1, ArbreVide2);}
  else if (c==clef()) cout << "Repetition de "<< c<< endl; 
  else if (c<clef())  sag()->insere(c);
  else sad()->insere(c);
 }

//---------------- Question 4, affichage

void ArbreRech::imprimeContenu(ostream& os)const
 {if (!estVide())
   {sag()->imprimeContenu(os); os << clef() << " "; sad()->imprimeContenu(os);}}

void ArbreRech::imprimeEntete(ostream& os) const
{os << "arbre de recherche: affichage des clefs par ordre croissant" << endl;}


//---------------- Question 5, recherche
//---------------- ArbreRech : specifique au classement des clefs

bool ArbreRech::recherche(TypeCle C)const
 {if (estVide()) return false;
  else if (clef()==C) return true;
  else if (C<clef()) return sag()->recherche(C);
  else  return sad()->recherche(C);
 }
