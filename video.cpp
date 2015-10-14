#include "video.h"


Video::Video(bool _empruntable, const string& _titre, const string& _nomauteur, supportvid _supportvid)
: Document(_empruntable, _titre, _nomauteur),support(_supportvid)
{
  cout << "built vid from specifier\n";
}


Video::Video(const Video& _vid): Document(_vid.empruntable, _vid.titre, _vid.nomauteur)
{
  cout << "built vid from copy\n";
}


float Video::calculercost()
{
  return 70;
}
