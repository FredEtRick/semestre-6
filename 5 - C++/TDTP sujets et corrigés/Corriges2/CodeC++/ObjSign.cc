#include "ObjSign.h"

 ObjSign::ObjSign(){auteur="personne";}
 ObjSign::ObjSign(int r,string d, string aut):ObjMus(r,d){auteur=aut;}
 ObjSign::~ObjSign(){}
 string ObjSign::getAuteur()const{return auteur;}
 void ObjSign::setAuteur(string aut){auteur=aut;}
 void ObjSign::saisie(istream& is)
  {ObjMus::saisie(is); is>>auteur;}
 void ObjSign::affiche(ostream& os)const
  {ObjMus::affiche(os);os<<" auteur: "<<auteur<<endl;}
