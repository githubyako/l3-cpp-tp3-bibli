#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include "livre.h"
#include "video.h"
#include "periodique.h"
#include "docpapier.h"
#include "document.h"

class Bibliotheque{
  
private:
  Document * bibli = new Document[250];
public:
  void addDocument(Bibliotheque & _bibli, Document const & _doc);
  
};


#endif