#include <iostream>
#include<vector>
using namespace std;
#include "Suit.h"
#include "SuitArith.h"
#include "SuitConst.h"


main()
{
//Suits arithmetiques
SuitArith sa1(7,2);SuitArith sa2;
cout << "SUITES ARITHMETIQUES\n";
 cin>>sa2;
cout <<"sa1 "<<sa1 <<"\n";cout <<"sa2 "<<sa2 <<"\n";
cout << "8eme terme de sa1 " <<sa1(7) <<endl;
cout << "somme des 10 premiers termes de sa1 " <<sa1.S(10)<<endl;
cout << "somme des 10 premiers termes de sa2 " <<sa2.S(10)<<endl;

//suites constantes a partir d'un certain rang
SuitConst sc1,sc2,sc3(5);
cout << "SUITES CONSTANTES A PARTIR D'UN CERTAIN RANG\n";
 cin >>sc1;cout <<"sc1 "<<sc1 <<"\n";
cin>>sc2;cout <<"sc2 "<<sc2 <<"\n";
cout <<"sc3"<<sc3 <<"\n";

cout << "8eme terme de sc1 " <<sc1(7) <<"\n";

cout << "somme des 10 premiers termes de sc1 " <<sc1.S(10)<<endl;
cout << "somme des 10 premiers termes de sc2 " <<sc2.S(10)<<endl;
cout << "somme des 10 premiers termes de sc3 " <<sc3.S(10)<<endl;

}
/*
SUITES ARITHMETIQUES
5 3
sa1 terme initial = 7   raison = 2

sa2 terme initial = 5   raison = 3

8eme terme de sa1 21
somme des 10 premiers termes de sa1 160
somme des 10 premiers termes de sa2 185
SUITES CONSTANTES A PARTIR D'UN CERTAIN RANG
rang 
6
valeurs 
 7 5 3 4 8 9
valeur constante finale
1
sc1 (7 5 3 4 8 9 1 ...)

rang 
2
valeurs 
17
7
valeur constante finale
9
sc2 (17 7 9 ...)

sc3(5 ...)

8eme terme de sc1 1
somme des 10 premiers termes de sc1 40
somme des 10 premiers termes de sc2 96
somme des 10 premiers termes de sc3 50

*/

