#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>

using namespace std;

class Document
{
private:
  bool empruntable;
  string titre;
  string nomauteur;
  
public:
  Document(bool _empruntable, string const & _titre, string const & _nomauteur);
  Document(Document const & _doc);
  virtual float calculercost() = 0;
  
  virtual ~Document();
  bool getEmpruntable() const;
  string getTitre() const;
  string getNomauteur() const;

  
};





#endif