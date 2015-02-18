#ifndef Strophe_h
#define Strophe_h
class Strophe
{
private:
  Vers ** suiteVers;
  int nbVers;
  virtual int* calculeSchemaCode(string schemaRimique);
public:
  Strophe();
  Strophe(const Strophe&);
  virtual ~Strophe();
  virtual void saisie(istream& is);
  virtual Vers* vers(int i)const;
  virtual void affiche(ostream& os)const;
  virtual Strophe& operator=(const Strophe&);
  virtual Vers*& operator[](int);
  virtual bool verifieSchema(string schemaRimique);
};

ostream& operator<<(ostream& flotSortie, const Strophe& s);
istream& operator>>(istream& flotEntree, Strophe& s);
#endif