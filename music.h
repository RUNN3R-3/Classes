#ifndef MUSIC_H
#define MUSIC_H
#include "media.h"
#include <cstring>

class music: public media {
public:
  char* artist = new char[50];
  char* duration = new char[50];
  char* publisher = new char[50];
  music();
  virtual void print();
};

#endif
