#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

class media {
public:
  char* title = new char[50];
  int year;
  virtual void print();
};

#endif
