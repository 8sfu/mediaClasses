#ifndef MUSIC_H
#define MUSIC_H
#include <cstring>


class Music : public Media {
 public:
  char* artist;
  double duration;
  char* publisher;
  void createMedia();
};

#endif
