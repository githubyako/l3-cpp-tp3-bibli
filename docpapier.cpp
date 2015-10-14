#include "docpapier.h"

Docpapier::Docpapier(bool _empruntable, const string& _titre, const string& _nomauteur, int _nbpages)
: Document(_empruntable, _titre, _nomauteur),nbpages(_nbpages)
{
  cout << "constructeur specifier de document papier appelé\n";
}



Docpapier::Docpapier(const Docpapier& _docpapier):
Document(_docpapier.empruntable, _docpapier.titre,_docpapier.nomauteur),nbpages(_docpapier.nbpages)
{
  cout << "constructeur par recopie de doc papier appelé\n";
}


float Docpapier::calculercost()
{
  return (nbpages*costperpage);
}
