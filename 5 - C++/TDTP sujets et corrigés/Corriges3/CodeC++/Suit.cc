#include <iostream>
using namespace std;
#include "Suit.h"

Suit::Suit(){}
Suit::~Suit(){}

float Suit::S(int n)const
{float som=0;
 for (int i=0;i<n;i++) som += (*this)(i);
 return som;}

ostream& operator<< (ostream& os, const Suit& s) {s.Affiche(os);return os;}
istream& operator>> (istream& is, Suit& s){s.Saisie(is);return is;}



