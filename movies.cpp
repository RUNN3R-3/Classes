#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

movies::movies() {
  cout << "Enter in the following details..." << endl;
  cout << "Title - ";
  cin >> title;
  cin.ignore();
  cout << "Year - ";
  cin >> year;
  cin.ignore();
  cout << "Director - ";
  cin >> director;
  cin.ignore();
  cout << "Duration - ";
  cin >> duration;
  cin.ignore();
  cout << "Rating - ";
  cin >> rating;
  cin.ignore();
}

void movies::print() {
  cout << "Title - "<< title << endl << "Year - "<< year << endl << "Director - " << director << endl << "Duration - " << duration << endl << "Rating - " << rating << endl << endl;
}
