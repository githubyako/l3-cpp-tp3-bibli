#include "livre.h"

Livre::Livre(bool _empruntable, const string& _titre, const string& _nomauteur, unsigned int _nbpages)
:Docpapier(_empruntable,_titre,_nomauteur,_nbpages)
{
  cout << "livre specifier builder appelé\n";
}

Livre::Livre(const Livre& _livre)
:Docpapier(_livre.getEmpruntable(),_livre.getTitre(),_livre.getNomauteur(),_livre.getNbpages())
{
  cout << "livre copy builder appelé\n";
}
Livre::~Livre()
{

}


float Livre::calculercost()
{
  return Docpapier::calculercost();
}
