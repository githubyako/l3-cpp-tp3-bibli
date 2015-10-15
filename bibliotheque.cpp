#include "bibliotheque.h"


Bibliotheque::Bibliotheque()
{}

Bibliotheque::~Bibliotheque()
{
  for(vector<Document*>::iterator i=m_bibli.begin();i!=m_bibli.end();++i){
    delete *i;
  }
}

void Bibliotheque::addLivre(const Livre& liv)
{
m_bibli.push_back(new Livre(liv));
}

void Bibliotheque::addPeriodique(const Periodique& per)
{
m_bibli.push_back(new Periodique(per));
}

void Bibliotheque::addVideo(const Video& vid)
{
m_bibli.push_back(new Video(vid));
}


unsigned int Bibliotheque::getnbDVDs() 
{
  unsigned int count=0;
  for(vector<Document*>::iterator i=m_bibli.begin();i!=m_bibli.end();++i){
      (*i)->getSupport();
      count++;
  }
  return count;
}
