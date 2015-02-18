#include<iostream>
#include<string>
using namespace std;
#include"Vers.h"
#include"Strophe.h"

Strophe::Strophe(){suiteVers=NULL; nbVers=0;}
Strophe::Strophe(const Strophe& autreStrophe)
{
	/*
	nbVers=autreStrophe.nbVers;
	suiteVers=new Vers*[nbVers];
	for (int i=0; i<nbVers; i++) 
		suiteVers[i]=autreStrophe.suiteVers[i];
	*/
	*this=autreStrophe; 
}
Strophe::~Strophe(){if (suiteVers) delete[] suiteVers;}

Vers* Strophe::vers(int i)const
{if (i>=0 && i<nbVers) return suiteVers[i]; else return NULL;}

void Strophe::saisie(istream& is)
{
  if (suiteVers) delete[] suiteVers;
  cout << "Entrer le nombre de vers : " << endl;
  is>>nbVers; suiteVers = new Vers*[nbVers];
  for (int i=0; i<nbVers; i++)
    {
      Vers *v=new Vers(); v->saisie(is); suiteVers[i]=v;
    }
}
void Strophe::affiche(ostream& os)const
{
  for (int i=0; i<nbVers; i++)
    {
      suiteVers[i]->affiche(os); os << endl;
    }  
}

Strophe& Strophe::operator=(const Strophe& s)
{
cout << "passage par affectation" << endl;
	if (this != &s) // pour le cas x=x
	{
		if (suiteVers) delete[] suiteVers; // effacer l'ancienne strophe
		nbVers=s.nbVers; // copier le champ entier
		suiteVers=new Vers*[nbVers]; // copie profonde du tableau de vers
		for (int i=0; i<nbVers; i++) // les vers restent partagŽs
			suiteVers[i]=s.suiteVers[i];
	}
	return *this; // pour autoriser x=y=z
}

Vers*& Strophe::operator[](int i)
{return suiteVers[i];}

ostream& operator<<(ostream& flotSortie, const Strophe& s)
{s.affiche(flotSortie); return flotSortie;}

istream& operator>>(istream& flotEntree, Strophe& s)
{s.saisie(flotEntree); return flotEntree;}

int* Strophe::calculeSchemaCode(string schemaRimique)
{
  int *structAux=new int[nbVers];
  for (int i=0; i<nbVers; i++)
    structAux[i]=-1;
  for (int i=0; i<nbVers; i++)
    {
      if (structAux[i]==-1)
		for (int j=i+1; j<nbVers; j++)
			if (schemaRimique[j]==schemaRimique[i]) structAux[j]=i;
    }
	//pour tester uniquement
	cout << "structure auxiliaire" << endl;
  for (int i=0; i<nbVers; i++)
    {
      cout << structAux[i] << " "; 
    }  
  cout << endl;
	return structAux;
}

bool Strophe::verifieSchema(string schemaRimique)
{
	if (nbVers != schemaRimique.length())
		return false;
  int *structAux=calculeSchemaCode(schemaRimique);
  for (int i=0; i<nbVers; i++)
  {
	if (structAux[i]!=-1 && !(suiteVers[i]->getRime()==(suiteVers[structAux[i]])->getRime()))
		return false;
	}
	return true;
}


