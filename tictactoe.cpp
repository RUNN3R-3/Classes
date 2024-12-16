#include <iostream>
#include <cstring>

using namespace std;

/*
  Tic Tac Toe
  By: Ethan Chesire
*/

void printArray(char boardParam[][4]);
void move(char array[][4], char place[2], bool xmove = true);
void checkwin(char array[][4], bool xmove = true);

int main()
{
  char incord[2];
  char board[4][4];
  bool playing = true;
  bool xmove = true;

  //setting up the board
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++) {
      board[a][b] = '-';

      board[1][0] = '1';
      board[2][0] = '2';
      board[3][0] = '3';

      board[0][1] = 'a';
      board[0][2] = 'b';
      board[0][3] = 'c';
    }
  }
  
  printArray(board);
  cout << "X goes first" << endl;
  cout << "Enter a coorinate (ex. 1a)" << endl;
  while (playing == true){
    cout << "Move - ";
    cin >> incord;
    move(board, incord, xmove);
    checkwin(board);
  }
  
}

void printArray(char boardParam[][4]) {
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++) {
      cout << boardParam[a][b] << " ";
    }
    cout << endl;
  }
}

void checkwin(char array[][4]){
  if (array [0][0] =){
    
  }

}

void move(char array[][4], char place[2], bool xmove){
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++){
      //ROW 1
      if (place[0] == '1') {
	if (place[1] == 'a') {
	  if (xmove == true){
	    array[1][1] = 'X';
	    xmove = false;
	  }
	  else {
	    array[1][1] = 'O';
	    xmove = false;
	  }
	}
	else if (place[1] == 'b') {
	  if (xmove == true){
            array[1][2] = 'X';
            xmove = false;
          }
          else {
            array[1][2] = 'O';
            xmove = false;
          }
	}
	else if (place[1] == 'c') {
	  if (xmove == true){
            array[1][3] = 'X';
            xmove = false;
          }
          else {
            array[1][3] = 'O';
            xmove = false;
          }
	}
      }
      //ROW 2
      else if (place[0] == '2') {
	if (place[1] == 'a') {
	  if (xmove == true){
            array[2][1] = 'X';
            xmove = false;
          }
          else {
            array[2][1] = 'O';
            xmove = false;
          }
	}
	else if (place[1] == 'b') {
	  if (xmove == true){
            array[2][2] = 'X';
            xmove = false;
          }
          else {
            array[2][2] = 'O';
            xmove = false;
          }
	}
	else if (place[1] == 'c') {
	  if (xmove == true){
            array[2][3] = 'X';
            xmove = false;
          }
          else {
            array[2][3] = 'O';
            xmove = false;
          }
	}
      }
      //ROW 3
      else if (place[0] == '3') {
	if (place[1] == 'a') {
	  if (xmove == true){
            array[3][1] = 'X';
            xmove = false;
          }
          else {
            array[3][1] = 'O';
            xmove = false;
          }
	}
	else if (place[1] == 'b') {
	  if (xmove == true){
            array[3][2] = 'X';
            xmove = false;
          }
          else {
            array[3][2] = 'O';
            xmove = false;
          }
	}
	else if (place[1] == 'c') {
	  if (xmove == true){
            array[3][3] = 'X';
            xmove = false;
          }
          else {
            array[3][3] = 'O';
            xmove = false;
          }
	}
      }
    }
  }
  
  return;
}

