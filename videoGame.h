#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include <cstring>


class VideoGame : public Media {
 public:
  char* publisher;
  double rating;
  void createMedia();
};

#endif
