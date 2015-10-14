#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>

using namespace std;

class Document
{
protected:
  bool empruntable;
  string titre;
  string nomauteur;
  
public:
  Document(bool _empruntable, string const & _titre, string const & _nomauteur);
  Document(Document const & _doc);
  
  virtual float calculercost() = 0;
  

  
};





#endif