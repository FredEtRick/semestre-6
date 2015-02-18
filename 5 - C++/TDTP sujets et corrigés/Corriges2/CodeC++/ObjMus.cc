#include "ObjMus.h"

 ObjMus::ObjMus(){ref=0;descr="rien";}
 ObjMus::ObjMus(int r,string d){ref=r;descr=d;}
 ObjMus::~ObjMus(){}
 int ObjMus::getRef()const{ return ref;}
 void  ObjMus::setRef(int r){ref=r;}
 string ObjMus::getDescr()const{return descr;}
 void ObjMus::setDescr(string d){descr=d;}
 void ObjMus::saisie(istream& is)
  {is>>ref>>descr;}
 void ObjMus::affiche(ostream& os)const
  {os<<ref<<" "<<descr<<endl; }

