//#include "Suit.h"
class SuitArith: virtual public Suit{
private:
float u0, //terme initial
      r;  //raison

public:
SuitArith(float init=0,float raison=0);
virtual ~SuitArith();
virtual float operator()(int)const;
virtual float S(int)const;
virtual float raison()const;
virtual ostream& Affiche(ostream& os)const;
virtual istream& Saisie(istream& is);

};

