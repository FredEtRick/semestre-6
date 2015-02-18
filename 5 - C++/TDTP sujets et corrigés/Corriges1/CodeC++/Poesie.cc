#include<iostream>
#include<string>
using namespace std;
#include"Vers.h"
#include"Strophe.h"
#include"Poesie.h"

Poesie::Poesie()
{
	nbStrophes=0; suiteStrophes=NULL;
}

Poesie::Poesie(string g)
{
	genre=g; nbStrophes=0; suiteStrophes=NULL;
}

Poesie::Poesie(const Poesie& p)
{
	*this=p;
}

Poesie::~Poesie()
{
if (suiteStrophes) delete[] suiteStrophes;
}

string Poesie::getGenre()const
{
	return genre;
}

void Poesie::setGenre(string g)
{
	genre=g;
}

void Poesie::saisie(istream& is)
{
 if (suiteStrophes) delete[] suiteStrophes;
  cout << "Entrer le nombre de strophes : " << endl;
  is>>nbStrophes; suiteStrophes = new Strophe*[nbStrophes];
  for (int i=0; i<nbStrophes; i++)
    {
      Strophe *s=new Strophe(); s->saisie(is); suiteStrophes[i]=s;
    }

}

void Poesie::affiche(ostream& os)const
{
 for (int i=0; i<nbStrophes; i++)
    {
      suiteStrophes[i]->affiche(os); os << endl;
    }  

}

Poesie& Poesie::operator=(const Poesie& p)
{
if (this != &p) // pour le cas x=x
	{
		if (suiteStrophes) delete[] suiteStrophes; // effacer l'ancienne strophe
		nbStrophes=p.nbStrophes; // copier le champ entier
		suiteStrophes=new Strophe*[nbStrophes]; // copie profonde du tableau de ptr de strophes
		for (int i=0; i<nbStrophes; i++) // les strophes restent partagŽes
			suiteStrophes[i]=p.suiteStrophes[i];
	}
	return *this; // pour autoriser x=y=z

}

ostream& operator<<(ostream& flotSortie,const Poesie& p)
{
	p.affiche(flotSortie); return flotSortie;
}

istream& operator>>(istream& flotEntree,Poesie& p)
{
	p.saisie(flotEntree); return flotEntree;
}
