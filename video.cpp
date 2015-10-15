#include "video.h"


Video::Video(bool _empruntable, const string& _titre, const string& _nomauteur, supportvid _supportvid)
: Document(_empruntable, _titre, _nomauteur),support(_supportvid)
{
  cout << "built vid from specifier\n";
}


Video::Video(const Video& _vid): Document(_vid.getEmpruntable(), _vid.getTitre(), _vid.getNomauteur())
{
  cout << "built vid from copy\n";
}

Video::~Video()
{

}

float Video::calculercost()
{
  return 70;
}

supportvid Video::getSupport()
{
  return support;
}
