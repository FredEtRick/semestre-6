
class SuitConst : virtual public Suit{
private:
vector<float> u; // valeurs des rg termes precedant les termes constants
int  rg;//rang a partir duquel la suite est constante (et longueur de u)
float a;  //valeur commune des termes de la suite a partir du rang rg
          

public:
 SuitConst(int val=0); // cree la suite constante de valeur val
 virtual ~SuitConst();
 virtual float operator()(int)const;
 virtual int rang() const;
 virtual ostream& Affiche(ostream& os)const;
 virtual istream& Saisie(istream& is);
};


