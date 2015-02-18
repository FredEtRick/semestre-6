#ifndef SalleExpo_h
#define SalleExpo_h
#include "ObjMus.h"

/* Ne pas faire de methode saisie dans cette classe (pb du type du new!!):
     on remplit la salle avec la methode ajoute.
   Ne pas faire non plus de constructeur par copie (même pb que saisie
     + dynamic_cast)
*/

class SalleExpo
{
 private:
  int capa;//capacite de la salle
  int rempl;//nb d'objets actuellement exposes
  ObjMus** t;// tableau dynamique de pointeurs sur les objets exposés

 public:
  SalleExpo();//salle de capcite 10 par defaut
  SalleExpo(int c);//salle de capacite c
  virtual ~SalleExpo();
  virtual int getCapa() const;
  virtual int getRempl()const;
  virtual bool ajoute(int , ObjMus*);
  virtual ObjMus* enleve(int);
  virtual void affiche(ostream&) const;
  
};

#endif
