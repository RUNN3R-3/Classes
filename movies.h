#ifndef MOVIES_H
#define MOVIES_H
#include "media.h"
#include <cstring>

class movies: public media {
public:
  char* director = new char[20];
  char* duration = new char[20];
  char* rating = new char[20];
  movies();
  virtual void print();
};

#endif
