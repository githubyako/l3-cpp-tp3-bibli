#include "periodique.h"


Periodique::Periodique(const string& _titre, const string& _nomauteur, unsigned int _nbpages, unsigned int _numeroperiodique)
: Docpapier(false, _titre, _nomauteur,_nbpages),numeroperiodique(_numeroperiodique)
{
  cout << "built vid from specifier\n";
}

Periodique::Periodique(const Periodique& _periodique)
: Docpapier(false,_periodique.getTitre(),_periodique.getNomauteur(),_periodique.getNbpages()),numeroperiodique(_periodique.getNumperiodique())
{
  cout << "built vid from copy\n";
}

Periodique::~Periodique()
{

}

float Periodique::calculercost()
{
  return Docpapier::calculercost();
}

unsigned int Periodique::getNumperiodique() const
{
  return numeroperiodique;
}
