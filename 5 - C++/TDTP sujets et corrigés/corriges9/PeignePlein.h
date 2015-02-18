#ifndef PeignePlein_h
#define PeignePlein_h
#include "Arbre.h"
class PeignePlein : virtual public Arbre
{

public:

//---------------- Question 1,6,7
PeignePlein();
PeignePlein(TypeCle Cle, PeignePlein * g, PeignePlein * d);
PeignePlein(const PeignePlein&);
virtual ~PeignePlein();
virtual PeignePlein& operator=(const PeignePlein&);

//---------------- Question 3, insertion

virtual void insere(TypeCle Cle);

//---------------- Question 4, affichage

virtual void imprimeContenu(ostream&)const;
virtual void imprimeEntete(ostream&)const;

//---------------- Question 5, recherche
// on prend celle qui est heritee, ou on la redefinit 
virtual bool recherche(TypeCle C)const; 

};

#endif
 
