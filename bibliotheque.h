#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include "livre.h"
#include "video.h"
#include "periodique.h"
#include "docpapier.h"
#include "document.h"
#include <vector>

class Bibliotheque{
  
private:
vector<Document*> m_bibli;
public:
  Bibliotheque();
  void addLivre(Livre const & liv);
  void addVideo(Video const & vid);
  void addPeriodique(Periodique const & per);
  unsigned int getnbDVDs();
  
  ~Bibliotheque();
  
};


#endif