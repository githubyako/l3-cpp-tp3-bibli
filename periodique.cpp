#include "periodique.h"


Periodique::Periodique(const string& _titre, const string& _nomauteur, unsigned int _nbpages, unsigned int _numeroperiodique)
: Docpapier(false, _titre, _nomauteur,_nbpages),numeroperiodique(_numeroperiodique)
{
  cout << "built vid from specifier\n";
}

Periodique::Periodique(const Periodique& _periodique)
: Docpapier(false,_periodique.titre,_periodique.nomauteur,_periodique.nbpages),numeroperiodique(_periodique.numeroperiodique)
{
  cout << "built vid from copy\n";
}


float Periodique::calculercost()
{
  Docpapier::calculercost();
}
