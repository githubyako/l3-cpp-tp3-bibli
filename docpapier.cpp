#include "docpapier.h"

Docpapier::Docpapier(bool _empruntable, const string& _titre, const string& _nomauteur, int _nbpages)
: Document(_empruntable, _titre, _nomauteur),nbpages(_nbpages)
{
  cout << "constructeur specifier de document papier appelé\n";
}



Docpapier::Docpapier(const Docpapier& _docpapier):
Document(_docpapier.getEmpruntable(), _docpapier.getTitre(),_docpapier.getNomauteur()),nbpages(_docpapier.getNbpages())
{
  cout << "constructeur par recopie de doc papier appelé\n";
}

Docpapier::~Docpapier()
{

}


float Docpapier::calculercost()
{
  return (nbpages*costperpage);
}

float Docpapier::getCostperpage() const
{
  return costperpage;
}


unsigned int Docpapier::getNbpages() const
{
  return nbpages;
}
