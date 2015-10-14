#ifndef PERIODIQUE_H
#define PERIODIQUE_H
#include "docpapier.h"

class Periodique:public Docpapier
{
private:
  unsigned int numeroperiodique;
  
public:
  Periodique(string const & _titre, string const & _nomauteur, unsigned int _nbpages, unsigned int _numeroperiodique);
  Periodique(Periodique const & _periodique);
  
  float calculercost();
};





#endif