#include <iostream> 
using namespace std;

#include"Noeud.h"
/* il faudrait ajouter
  #include "Arbre.h"
  si l'on utilisait des methodes de Arbre dans  le code des methodes de Noeud
*/
Noeud::Noeud(){filsG=NULL; filsD=NULL;}
Noeud::Noeud(TypeCle c, Arbre* g, Arbre* d) {cle=c; filsG=g; filsD=d;}
Noeud::~Noeud() {}
TypeCle Noeud::getCle() {return cle;}
void Noeud::setCle(TypeCle c) {cle=c;}
Arbre*& Noeud::refFilsG() {return filsG;}
Arbre*& Noeud::refFilsD() {return filsD;}
