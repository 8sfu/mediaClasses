#ifndef MEDIA_H
#define MEDIA_H


class Media {
 public:
  char* title = new char[20];
  int year;
  void fixInput();
  virtual void createMedia(); //MAKE VIRTUAL AGAIN
  virtual void print();
  virtual ~Media();
};

#endif

