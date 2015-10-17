#ifndef VIDEO_H
#define VIDEO_H
#include "document.h"

enum supportvid {DVD, BluRay, BluRay3D};

class Video: public Document
{
private:
  supportvid support;
public:
  Video(bool _empruntable, string const & _titre, string const & _nomauteur, supportvid _supportvid);
  Video(Video const & _vid);
  
  supportvid getSupport() const;
  ~Video();
  float calculercost();  
  
};




#endif