#ifndef LIVRE_H
#define LIVRE_H
#include "docpapier.h"

class Livre: public Docpapier
{
  
public:
  Livre(bool _empruntable, string const & _titre, string const & _nomauteur, unsigned int _nbpages);
  Livre(Livre const & _livre);
  
  
  
  float calculercost();
};





#endif