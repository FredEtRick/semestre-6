#ifndef ObjSign_h
#define ObjSign_h
#include "ObjMus.h"
class ObjSign :virtual public ObjMus
{
private: 
  string auteur;

public:
 ObjSign();
 ObjSign(int,string,string);
 virtual ~ObjSign();
 virtual string getAuteur()const;
 virtual void setAuteur(string);
 virtual void saisie(istream&);
 virtual void affiche(ostream&)const;
 };
 

#endif
