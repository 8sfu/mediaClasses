#ifndef MOVIE_H
#define MOVIE_H
#include <cstring>
#include "media.h"

class Movie : public Media {
 public:
  char* director = new char[20];
  float duration;
  float rating;
  void createMedia();
  void print(int n);
};

#endif
