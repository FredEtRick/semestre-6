#include "ObjLeg.h"

 ObjLeg::ObjLeg(){donateur="personne";annDon=0;}
 ObjLeg::ObjLeg(int r,string d, string don,int ad):ObjMus(r,d)
   {donateur=don;annDon=ad;}
 ObjLeg::~ObjLeg(){}
 string ObjLeg::getDonateur()const{return donateur;}
 void ObjLeg::setDonateur(string aut){donateur=aut;}
 int ObjLeg::getAnnDon()const{return annDon;}
 void  ObjLeg::setAnnDon(int ad){annDon=ad;}
 void  ObjLeg::saisie(istream& is) 
   {ObjMus::saisie(is);is>>donateur>>annDon;}
 void ObjLeg::affiche(ostream& os)const
  {ObjMus::affiche(os);os<<" donateur: "<<donateur<<" date du don: "<<annDon<<endl;}
