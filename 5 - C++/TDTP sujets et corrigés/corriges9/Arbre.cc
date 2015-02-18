#include <iostream>
using namespace std;
 
#include"Arbre.h"

//---------------- Questions 1,6,7

Arbre::Arbre()    {racine=NULL;}

Arbre::Arbre(TypeCle c, Arbre* g, Arbre * d) {racine=new Noeud(c, g, d);}

Arbre::~Arbre()  
  {if (!estVide()) 
    {delete sag();delete sad();delete racine;}
  }

/*********************************************************************************
ATTENTION: contructeur par copie et operateur =  ne peuvent pas etre ecrits
si la classe est abstraite, ce qui est le cas ici puisque la methode insere
est abstraite.

Le code ci-dessous est en commentaire, il est donne à titre de corrige pour ceux
qui ont prevu une methode d'insertion par defaut dans cette classe

Arbre::Arbre(const Arbre& A)
 {
   if (A.estVide()) {racine=NULL;}
 else
   {Arbre * AG=new Arbre(*(A.sag()));//cree une copie du ss arbre gauche de A
   Arbre * AD=new Arbre(*(A.sad()));//cree une copie du ss arbre droit de A
   racine=new Noeud(A.clef(), AG, AD);}
 }

Arbre& Arbre::operator=(const Arbre& A)
 {if (this!=&A)// verifier que l'objet courant est different du parametre
  {if (!estVide())//vider l'objet courant si necessaire avant de le reaffecter
    {delete sag();
     delete sad();
     delete racine;
    }
  if (A.estVide()) racine=NULL;
  else
   {Arbre * AG=new Arbre(*(A.sag())); Arbre * AD=new Arbre(*(A.sad()));
    racine=new Noeud(A.clef(), AG, AD);}
  }
  return *this;
}

********************************************************************************/

//---------------- Question 2, noyau

TypeCle Arbre::clef()const   {return racine->getCle();}
Arbre*& Arbre::sag()const    {return racine->refFilsG();}
Arbre*& Arbre::sad()const    {return racine->refFilsD();}
bool Arbre::estVide()const      {return (racine==NULL);}
bool Arbre::feuille()const    {return (sag()->estVide() && sad()->estVide());}


//---------------- Question 3, insertion
//------- rien (methode abstraite);


//---------------- Question 4, affichage
//---------------- On decompose l'affichage (imprime()) en:
//---------------- * NomClasse()
//---------------- * imprimeEntete()
//---------------- * imprimeContenu()
//---------------- la fonction imprime() n'est utile que dans Arbre,
//---------------- les autres sont redefinies dans les sous-classes

void Arbre::imprime(ostream& os)const
{
 imprimeEntete(os);
 os <<"----------------------" << endl;
 imprimeContenu(os);
};

void Arbre::imprimeContenu(ostream& os)const 
  {if(!estVide()) imprimeBis(os, 0);}

void Arbre::imprimeEntete(ostream& os)const 
  {cout << "arbre binaire quelconque: impression indentee" << endl;}

void Arbre::imprimeBis(ostream& os, int i)const
 {for (int j=0; j<=i; j++) os <<" "; os << clef()<<endl; 
  if (sag()->estVide()) 
    {for (int j=0; j<=i+1; j++) os <<" "; os <<"."<<endl;}
    else sag()->imprimeBis(os, i+1);
  if (sad()->estVide()) 
    {for (int j=0; j<=i+1; j++) os <<" "; os <<"."<<endl;}
    else sad()->imprimeBis(os, i+1); 
 }

ostream& operator<<(ostream& os, const Arbre& A)
{A.imprime(os); return os;}

//---------------- Question 5, recherche
//---------------- Arbre : contient une fonction generale, redefinie 
//---------------- dans les sous-classes pour des raisons d'efficacite

bool Arbre::recherche(TypeCle C)const
 {if (estVide()) return false;
  else if (clef()==C) return true;
  else return (sag()->recherche(C) || sad()->recherche(C));
 }
