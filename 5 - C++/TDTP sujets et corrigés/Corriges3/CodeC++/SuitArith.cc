#include <iostream>
using namespace std;
#include "Suit.h"
#include "SuitArith.h"


SuitArith::SuitArith(float init, float raison)
{u0=init;r=raison;}

SuitArith::~SuitArith(){}

float SuitArith::operator()(int n)const
 {return (u0+n*raison());}

float SuitArith::S(int n)const
 {return (n*(*this)(0)+n*(n-1)*(r/2));}

float SuitArith::raison()const { return r;}

ostream& SuitArith::Affiche(ostream& os)const
 {os <<"terme initial = " <<(*this)(0) <<"   raison = "<<raison()<<"\n";
  return os;}

istream& SuitArith::Saisie(istream& is)
{ is>>u0 >>r; return is;}












