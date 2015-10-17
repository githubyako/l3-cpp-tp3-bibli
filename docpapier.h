#ifndef PAPIER_H
#define PAPIER_H
#include "document.h"

class Docpapier:public Document
{
private:
  unsigned int nbpages;
  static const float costperpage = 0.5;
  
public:
  Docpapier(bool _empruntable, const string& _titre, const string& _nomauteur,int _nbpages);
  Docpapier(Docpapier const & _docpapier);
  virtual ~Docpapier();
  unsigned int getNbpages() const;
  float getCostperpage() const;
  
  float calculercost();
};







#endif