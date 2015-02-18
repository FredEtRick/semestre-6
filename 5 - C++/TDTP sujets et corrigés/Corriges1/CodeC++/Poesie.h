
class Poesie
{
private:
	string genre;
	Strophe **suiteStrophes;
	int nbStrophes;
public:
	Poesie();
	Poesie(string g);
	Poesie(const Poesie&);
	virtual ~Poesie();
	virtual string getGenre()const;
	virtual void setGenre(string g);
	virtual void saisie(istream&);
	virtual void affiche(ostream&)const;
	virtual Poesie& operator=(const Poesie&);
};

ostream& operator<<(ostream&,const Poesie&);
istream& operator>>(istream&,Poesie&);
