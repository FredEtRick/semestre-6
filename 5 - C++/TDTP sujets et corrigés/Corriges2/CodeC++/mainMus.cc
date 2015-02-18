# include <iostream>
#include "ObjMus.h"//pas obligatoire (inclus dans les suivants)
#include "ObjSign.h"
#include "ObjLeg.h"
#include "SalleExpo.h"

int main()
{
  cout<<"########################################"<<endl;
  cout<<"Essai des classes objets du musee"<<endl;
 ObjMus Vase(1,"vase a vin");
 Vase.affiche(cout);

 ObjMus* Alb=new ObjMus(2,"Le Grand Albert");
 Alb->affiche(cout);
 cout<<"--------------"<<endl;

 ObjSign Joc(3, "La Joconde","Leo");
 Joc.affiche(cout);

 cout<<"---------------"<<endl;

 ObjSign* Ven=new ObjSign(4,"Venus avec bras", "Mimile");
 Ven->affiche(cout);

 ObjMus* x; x=new ObjSign(10, "Tournesols","Auguste");
 x->affiche(cout);

 cout<<"----------------------"<<endl;

 ObjLeg Ren(5,"renard empaille","M.Laglu",1925);
 Ren.affiche(cout); 

 ObjLeg* Laj=new ObjLeg(6,"portrait du genereux donateur","M.Lajoie",1919);
 Laj->affiche(cout);


 cout<<"-----------------------------"<<endl;
 cout<<"########################################"<<endl;
 cout<<" Essai de la classe SalleExpo "<<endl;
 cout<<" ---------------------------- "<<endl;
 SalleExpo s;
 s.affiche(cout);
 s.ajoute(0,x);s.ajoute(1,Ven);s.ajoute(2,Laj);
 s.affiche(cout);
 ObjMus* r=s.enleve(3);cout<<(void*)r<<endl;
 r=s.enleve(1);cout <<"objet enleve :"<<endl;;r->affiche(cout);
 cout<<"____"<<endl;
 s.affiche(cout);
}

/*
########################################
Essai des classes objets du musee
1 vase a vin
2 Le Grand Albert
--------------
3 La Joconde
 auteur: Leo
---------------
4 Venus avec bras
 auteur: Mimile
10 Tournesols
 auteur: Auguste
----------------------
5 renard empaille
 donateur: M.Laglu date du don: 1925
6 portrait du genereux donateur
 donateur: M.Lajoie date du don: 1919
-----------------------------
########################################
 Essai de la classe SalleExpo 
 ---------------------------- 
contenu de la salle:
- - - - - - - - - - - - - - - 
contenu de la salle:
place 0 : 
10 Tournesols
 auteur: Auguste

place 1 : 
4 Venus avec bras
 auteur: Mimile

place 2 : 
6 portrait du genereux donateur
 donateur: M.Lajoie date du don: 1919

- - - - - - - - - - - - - - - 
0
objet enleve :
4 Venus avec bras
 auteur: Mimile
____
contenu de la salle:
place 0 : 
10 Tournesols
 auteur: Auguste

place 2 : 
6 portrait du genereux donateur
 donateur: M.Lajoie date du don: 1919

- - - - - - - - - - - - - - - 

 */
