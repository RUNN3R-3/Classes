#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include "media.h"
#include <cstring>

class videogames : public media{
 public:
  char* publisher = new char[20];
  int rating;
  videogames();
  virtual void print();
};

#endif
