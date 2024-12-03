#ifndef MOVIE_H
#define MOVIE_H
#include <cstring>

class Movie : public Media {
 public:
  char* director;
  float duration;
  float rating;
  void createMedia();
};

#endif
