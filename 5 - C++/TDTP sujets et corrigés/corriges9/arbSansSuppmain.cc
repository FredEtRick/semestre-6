#include<iostream>
using namespace std;
#include"ArbreRech.h"
#include "PeignePlein.h"

int main()
{ 
 PeignePlein P;
 P.insere(4); P.insere(8); P.insere(3); P.insere(7); P.insere (2);
 P.insere(6); P.insere(1);

 cout <<"peigne plein P"<<endl;
 cout << P;
 cout << endl;
 cout<<"affichage arbre general pour P"<<endl;
 P.Arbre::imprimeContenu(cout);
cout<<endl;

 ArbreRech R; R.insere(9); R.insere(5); R.insere(2); R.insere(6); R.insere(12); 
R.insere(10); R.insere(11); R.insere(15);

 cout<<"arbre de recherche R"<<endl;
 cout << R << endl;
 cout<<"affichage arbre general pour R"<<endl;
 R.Arbre::imprimeContenu(cout);
cout<<endl<<"---------------"<<endl;


 cout <<"----------------- copie d'arbre de recherche "<< endl;
 ArbreRech R2(R);
 cout<<"arbre de recherche R2 copie de R par ArbreRech R2(R)" <<endl;
 cout << R2<<endl;
 cout<<"affichage arbre general pour R2"<<endl;
 R2.Arbre::imprimeContenu(cout);cout<<endl;

 cout <<"----------------- affectation d'arbre de recherche "<< endl;
 ArbreRech R3;
 R3=R;
 cout<<"arbre de recherche R3 copie de R par R3=R"<<endl;
 cout <<R3<<endl;
 cout<<"affichage arbre general pour R3"<<endl;
 R3.Arbre::imprimeContenu(cout);cout<<endl<<"---------------"<<endl;


 cout <<"----------------- copie de peigne "<< endl;
 PeignePlein P2(P);
 cout<<"peigne plein P2 copie de P par PeignePlein P2(P)"<<endl;
 cout << P2<<endl;
 cout<<"affichage arbre general pour P2"<<endl;
 P2.Arbre::imprimeContenu(cout);cout<<endl<<"---------------"<<endl;


 cout <<"----------------- affectation de peigne "<< endl;
 PeignePlein P3;
 P3=P;
 cout<<"peigne plein P3 copie de P par P3=P"<<endl; 
 cout <<P3<<endl;
 cout<<"affichage arbre general pour P3"<<endl;
 P3.Arbre::imprimeContenu(cout);cout<<endl<<"---------------"<<endl;

} 


