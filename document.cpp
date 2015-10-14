#include "document.h"

Document::Document(bool _empruntable, const string& _titre, const string& _nomauteur):empruntable(_empruntable),titre(_titre),nomauteur(_nomauteur)
{
  cout << "specifierdocbuilder invoked\n";
}


Document::Document(const Document& _doc):empruntable(_doc.empruntable), titre(_doc.titre), nomauteur(_doc.nomauteur)
{
  cout << "copydocbuilder invoked\n";
}

float Document::calculercost()
{
  
}

