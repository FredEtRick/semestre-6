#ifndef ArbreRech_h
#define ArbreRech_h
#include "Arbre.h"

class ArbreRech : virtual public Arbre
{

public:
//---------------- Question 1,6,7

ArbreRech();
ArbreRech(TypeCle Cle, ArbreRech * g, ArbreRech * d);
ArbreRech(const ArbreRech&);
virtual ~ArbreRech();
virtual ArbreRech& operator=(const ArbreRech&);

//---------------- Question 3, insertion
virtual void insere(TypeCle Cle);

//---------------- Question 4, affichage
virtual void imprimeContenu(ostream&)const;
virtual void imprimeEntete(ostream&)const;

//---------------- Question 5, recherche
virtual bool recherche(TypeCle Cle)const;

};

#endif
