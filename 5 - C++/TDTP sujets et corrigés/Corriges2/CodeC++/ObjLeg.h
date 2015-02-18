#ifndef ObjLeg_h
#define ObjLeg_h
#include "ObjMus.h"
class ObjLeg :virtual public ObjMus
{
private: 
  string donateur;
  int annDon;
public:
 ObjLeg();
 ObjLeg(int,string,string,int);
 virtual ~ObjLeg();
 virtual string getDonateur()const;
 virtual void setDonateur(string);
 virtual int getAnnDon()const;
 virtual void  setAnnDon(int);
 virtual void saisie(istream&);
 virtual void affiche(ostream&)const;
 };
 

#endif
