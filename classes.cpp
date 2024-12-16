#include "media.h"
#include "music.h"
#include "movies.h"
#include "videogames.h"
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;


int main() {

  /*
    Classes - Ethan Chesire
    12/16/2024
    This code is a storage system taking in three types of
    media (Videogames, Music, and Movies). This program uses
    a vector to store all of the entries, which you can search
    out previously entered files and delete them as well. I
    also divided the diffrent media types into diffrent classes
    that all fall under a media parent class (all public). 
   */
  
  int option = 0;
  bool done = false;
  char search[50];
  int select = 0;
  
  vector<media*> storage;
  vector<media*>::iterator a;

  while (done == false){
    cout << "Chose action" << endl << "1-ADD   2-SEARCH   3-DELETE   4-QUIT_PROGRAM" << endl;
    cin >> option;
    cin.ignore();
    if (option == 1){
      int choice = 0;
      cout << "What type of media class do you want to add" << endl << "1-Videogame   2-Music   3-Movie" << endl;
      cin >> choice;
      if (choice == 1){
	videogames* v = new videogames();
	storage.push_back(v);
      }
      else if (choice == 2){
	music* m = new music();
	storage.push_back(m);
      }
      else if (choice == 3){
	movies* m = new movies();
	storage.push_back(m);
      }
      else {
	cout << "ERROR: NOT AN ACTION" << endl;
      }

    }
    else if (option == 2){
      cout << "Enter media Title:  ";
      cin >> search;
      cin.ignore();
      for (a = storage.begin(); a != storage.end(); a++) {
	if (0 == strcmp(search,(*a)->title)){
	  (*a)->print();
        }
	else {
	  cout << "There is no Media under that title" << endl;
	}
      }
    }
    else if (option == 3){
      cout << "Enter media Title:";
      cin >> search;
      cin.ignore();
      for (int i = 0; i < storage.size(); i++) {
        if (!strcmp(search,storage[i]->title)){
	  storage.erase( std::next(storage.begin(),i));
          i--;
        }
        else {
          cout << "There is no Media under that title" << endl;
        }
      }
    }
    else if (option == 4){
      done = true;
    }
    else
      cout << "ERROR: NOT AN ACTION" << endl;
  }
  
  return 0;
}
