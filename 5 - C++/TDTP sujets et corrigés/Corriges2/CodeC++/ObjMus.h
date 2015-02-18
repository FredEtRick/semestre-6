#ifndef ObjMus_h
#define ObjMus_h
using namespace std;
#include<iostream>
#include <string>
class ObjMus
{
protected: 
  int ref; string descr; 
public:
 ObjMus();
 ObjMus(int,string);
 virtual ~ObjMus();
 virtual int getRef()const;
 virtual void  setRef(int);
 virtual string getDescr()const;
 virtual void setDescr(string);
 virtual void saisie(istream&);
 virtual void affiche(ostream&)const;
 };

#endif
