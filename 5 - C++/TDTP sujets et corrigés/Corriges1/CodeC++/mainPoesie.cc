#include<iostream>
#include<string>
using namespace std;
#include"Vers.h"
#include"Strophe.h"
#include"Poesie.h"

//Exemple cours sur les modes de passage de paramètres
void f(int fi, int* fpi, int &fri)
{
	fi++; // incremente fi, copie locale du premier parametre reel
	(*fpi)++; // incremente le contenu de la zone pointee par le deuxième paramètre réel
	fri++; // incremente le troisième parametre reel
}

main()
{
/*
//Exemple cours sur les modes de passage de paramètres
	int i = 4; 
	int *pi = new int; 
	*pi = 4;
	int j=4; 
	cout << "i=" << i << "  *pi=" << *pi << "  j=" << j << endl; // i=4  *pi=4  j=4
	f(i, pi, j);
	cout << "i=" << i << "  *pi=" << *pi << "  j=" << j << endl; // i=4  *pi=5  j=5

//Exemple cours sur les vers et les strophes
  Vers *pv1=new Vers();
  cout << typeid(*pv1).name() << endl;
  
  //pv1->saisie(cin);
  cin >> *pv1;
 // pv1->affiche(cout);
  cout << *pv1;
  

  Vers *pv2=new Vers();
  pv2->saisie(cin);
  pv2->affiche(cout);  cout << endl;
 
   Vers *pv3=new Vers("vienne la nuit, sonne l'heure","eur");
   Vers *pv4=new Vers("les jours s'en vont, je demeure","eur");
   pv3->affiche(cout);  cout << endl;
   pv4->affiche(cout);  cout << endl;
   
   delete pv3;
*/
/*
   Strophe *s = new Strophe();
   //s->saisie(cin);
   cout << "saisie de s" << endl;
   cin >> *s;
   //s->affiche(cout);
   cout << *s;
   
   Strophe *s2 = new Strophe(*s);
   //*s2 = *s; // pas s2=s qui ne copierait que les pointeurs
   cout << "s2 apres copie de s dans s2" << endl;
   s2->affiche(cout);
   cout << "saisie de s2" << endl;
   s2->saisie(cin);
   cout << "s2 apres copie puis saisie" << endl;
   s2->affiche(cout);
   cout << "s apres copie dans s2" << endl;
   s->affiche(cout);
   
   int i;
   cout << "quel numero de vers dans s ?" << endl; cin >> i;
   if (s->vers(i))
		 {s->vers(i)->affiche(cout); cout << endl;}
   else cout << "pas de vers a cet indice" << endl;
   
   
	Strophe S;
	S.saisie(cin); // hypothèse : saisie de 8 vers
	cout << *S[0] << endl; // affiche le premier vers
	S[1]=new Vers("comme je descendais des fleuves impassibles","ible");
	cout << "nouvelle strophe" << endl << S << endl;
	
	Strophe *pS=new Strophe();
	pS->saisie(cin); // hypothèse : saisie de 8 vers
	cout << *((*pS)[0]) << endl; // affiche le premier vers
	(*pS)[1]=new Vers("comme je descendais des fleuves impassibles","ible");
	cout << "nouvelle strophe" << endl << *pS << endl;
	
	
	Poesie *pp = new Poesie("ballade");
	cin >> *pp;
	cout << "poesie saisie" << endl << *pp;
	*/
	
	Strophe *ppS=new Strophe();
	ppS->saisie(cin); 
	cout << "Entrer le schema rimique a verifier" << endl;
	string schema;
	cin >> schema;
	cout << ppS->verifieSchema(schema) <<endl;

}
