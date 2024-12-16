#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music() {
  cout << "Enter in the following details..." << endl;
  cout << "Title - ";
  cin >> title;
  cin.ignore();
  cout << "Year - ";
  cin >> year;
  cin.ignore();
  cout << "Artist - ";
  cin >> artist;
  cin.ignore();
  cout << "Duration - ";
  cin >> duration;
  cin.ignore();
  cout << "Publisher - ";
  cin >> publisher;
  cin.ignore();
}

void music::print() {
  cout << "Title - "<< title << endl << "Year - "<< year << endl << "Artist - " << artist << endl << "Duration - " << duration << endl << "Publisher - " << publisher << endl << endl;
}
