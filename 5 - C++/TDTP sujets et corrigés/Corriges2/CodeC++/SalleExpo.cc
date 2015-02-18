#include "SalleExpo.h"

SalleExpo::SalleExpo()
  {capa=10; t=new ObjMus *[capa];
   for (int i=0;i<capa;i++)t[i]=NULL;
   rempl=0;}

SalleExpo::SalleExpo(int c)
 {capa=c; t=new ObjMus *[capa];
  for (int i=0;i<capa;i++)t[i]=NULL;
  rempl=0;}

SalleExpo::~SalleExpo()
  {for (int i=0;i<capa;i++) 
     if (t[i]!=NULL) delete t[i];
   delete[] t;}

int SalleExpo::getCapa() const {return capa;}

int SalleExpo::getRempl() const {return rempl;}

bool SalleExpo::ajoute(int i, ObjMus* obj)
  {if (t[i]!=NULL) return false;
    else { t[i]=obj; rempl++;return true;}
  }

ObjMus*  SalleExpo::enleve(int i)
   {if (t[i]==NULL) return NULL;
    else { ObjMus* s=t[i]; t[i]=NULL;rempl--;return s;}
   }

void SalleExpo::affiche(ostream& os ) const
{  os<<"contenu de la salle:"<<endl;
   for (int i=0;i<capa;i++)
     {if (t[i]!=NULL)
        {os<<"place "<<i<<" : "<<endl;
          t[i]->affiche(os); os<<endl;}
       // else os<<"place "<<i<<"vide"<<endl;
     }
   os<<"- - - - - - - - - - - - - - - "<<endl;
   }
