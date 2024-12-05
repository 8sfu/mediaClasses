#ifndef MUSIC_H
#define MUSIC_H
#include <cstring>
#include "media.h"

class Music : public Media {
 public:
  char* artist = new char[20];
  double duration;
  char* publisher = new char[20];
  void createMedia();
  void print(int n);
};

#endif
