#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include <cstring>
#include "media.h"

class VideoGame : public Media {
 public:
  char* publisher = new char[20];
  double rating;
  void createMedia();
  void print();
};

#endif
