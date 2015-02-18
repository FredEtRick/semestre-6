
class Suit{
public:
  Suit();
virtual ~Suit();  
virtual float operator()(int)const=0;
virtual float S(int)const;  
virtual ostream& Affiche(ostream& os)const=0;
virtual istream& Saisie(istream& is)=0;
              
};

ostream& operator<< (ostream&, const Suit&);
istream& operator>> (istream&, Suit&);



