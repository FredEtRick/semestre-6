#ifndef Noeud_h
#define Noeud_h
#include "TypeCle.h"

class Arbre;

class Noeud
{
private:
TypeCle cle;
Arbre * filsG, * filsD;

public:
Noeud();
Noeud(TypeCle Cl, Arbre* g, Arbre* d);
virtual ~Noeud();
virtual TypeCle getCle();
virtual void setCle(TypeCle);
virtual Arbre*& refFilsG();
virtual Arbre*& refFilsD();
};

#endif
