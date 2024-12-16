#include <iostream>
#include <cstring>
#include "videogames.h"

using namespace std;

videogames::videogames() {
  cout << "Enter in the following details..." << endl;
    cout << "Title - ";
    cin >> title;
    cin.ignore();
    cout << "Year - ";
    cin >> year;
    cin.ignore();
    cout << "Publisher - ";
    cin >> publisher;
    cin.ignore();
    cout << "Rating - ";
    cin >> rating;
    cin.ignore();
}

void videogames::print() {
  cout << "Title - "<< title << endl << "Year - "<< year << endl << "Publisher - " << publisher << endl << "Rating - " << rating << endl << endl;
}
