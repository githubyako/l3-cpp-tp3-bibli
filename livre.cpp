#include "livre.h"

Livre::Livre(bool _empruntable, const string& _titre, const string& _nomauteur, unsigned int _nbpages)
:Docpapier(_empruntable,_titre,_nomauteur,_nbpages)
{
  cout << "livre specifier builder appelé\n";
}

Livre::Livre(const Livre& _livre)
:Docpapier(_livre.empruntable,_livre.titre,_livre.nomauteur,_livre.nbpages)
{
  cout << "livre copy builder appelé\n";
}


float Livre::calculercost()
{
  Docpapier::calculercost();
}
