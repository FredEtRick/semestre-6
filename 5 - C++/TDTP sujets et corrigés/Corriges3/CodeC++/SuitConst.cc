#include <iostream>
#include<vector>
using namespace std;
#include "Suit.h"
#include "SuitConst.h"


SuitConst::SuitConst(int val)  {a=val; rg=0;}

SuitConst::~SuitConst()  {}

float SuitConst::operator()(int n)const
  {if (n>=rang()) return a;
   else 
     return u[n];
  }

int SuitConst::rang() const {return rg;}

ostream& SuitConst::Affiche(ostream& os)const
{
	os <<"(";
	 for (int i=0; i<u.size(); i++) cout << u[i] <<" ";
	os<<a <<" ...)"<<endl; 
	return os;
} //<<u

istream& SuitConst::Saisie(istream& is)
 {float v;
  cout<< "rang \n";is>>rg;
  cout<<"valeurs \n"; 
  for (int i=0; i<rg; i++) 
	{
		//cout << " entrez valeur de rang" << i << endl; 
		float f; is >> f; u.push_back(f);
	}
  cout<<"valeur constante finale\n";is>>a;
  return is;
 }





