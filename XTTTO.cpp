#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
using namespace std;

 /*Tic Tac Toe for cmd*/

 /**
 * \Created by Bilal Bouamer;
 * \With GNU GCC Compiler;
 * \With Vim text Editor;
 * \All only in console;
 */

void color(int col)///Set text color:
{
   HANDLE hConsole;
   hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hConsole, col); //Set text color
}

 string grid1 = "..."; string grid2 = "..."; string grid3 = "...";
 int Mode = 0;
 bool bot = false;

bool GameIsRunning = true, screen_refresh = false;
string color_sys = "normal";

int main()
{
for(;;)
{
  cout << "(C) Bilal Bouamer 2020, all rights reserved\n";
  color(15);cout << "X_";color(12); cout << "Tic";color(11);cout << " Tac";color(10);cout << " Toe";color(15);cout << "_O\n";color(15);cout << endl;
  color(7);
  cout << "1-Play\n" << "2-About\n" << "3-Exit\n";
  cout << "Choice >> ";
  cin >> Mode;


  if(Mode == 2)
  {
      color(7);
      cout << "X_Tic Tac Toe_O is a free game create by Bilal Bouamer for the cmd\n";
      cout << "Created in C++ console with Vim code editor and GNU GCC Compiler\n";
      cin.get(); cin.get();
      main();
  }
  if(Mode == 3)
  {
      return 0; /**< Exit the game **/
  }
  if(Mode == 1)
  {
    cout << endl << "0-PvP\n" << "1-PvB\n";
    cout << "Choice >> ";
    cin >> bot; cout << "\n"; color(15);
    if(!bot) //Player vs Player mode
      {
  while(GameIsRunning)
  {
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 " << grid3 << endl << endl;
    cout << "  012\n" << endl;

    int Pos1InputA = 0; int Pos2InputA = 0;
    int Pos1InputB = 0; int Pos2InputB = 0;

    cout << "Player 1 (line): "; cin >> Pos1InputA; Beep(1200, 150);
    cout << "Player 1 (col): "; cin >> Pos1InputB;(1200, 150);
    cout << endl;
    if(Pos1InputA == 1){if(grid1[Pos1InputB] != 'O'){grid1[Pos1InputB] = 'X';}}
    if(Pos1InputA == 2){if(grid2[Pos1InputB] != 'O'){grid2[Pos1InputB] = 'X';}}
    if(Pos1InputA == 3){if(grid3[Pos1InputB] != 'O'){grid3[Pos1InputB] = 'X';}}
    Beep(1200, 100);Beep(1200, 100);
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 " << grid3 << endl << endl;
    cout << "  012\n" << endl;
    if(grid1[0] == 'X' && grid1[1] == 'X' && grid1[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'X' && grid2[0] == 'X' && grid3[0] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid2[0] == 'X' && grid2[1] == 'X' && grid2[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[0] == 'X' && grid3[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'X' && grid2[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[2] == 'X' && grid2[1] == 'X' && grid1[0] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[1] == 'X' && grid2[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[2] == 'X' && grid2[2] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    if(GameIsRunning){
    cout << "Player 2 (line): "; cin >> Pos2InputA; Beep(1200, 150);
    cout << "Player 2 (col): "; cin >> Pos2InputB; Beep(1200, 150);
    cout << endl;
    if(Pos2InputA == 1){if(grid1[Pos2InputB] != 'X'){grid1[Pos2InputB] = 'O';}}
    if(Pos2InputA == 2){if(grid2[Pos2InputB] != 'X'){grid2[Pos2InputB] = 'O';}}
    if(Pos2InputA == 3){if(grid3[Pos2InputB] != 'X'){grid3[Pos2InputB] = 'O';}}
     Beep(1200, 100); Beep(1200, 100);
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 "  << grid3 << endl << endl;
    cout << "  012\n" << endl;
    if(grid1[0] == 'O' && grid1[1] == 'O' && grid1[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false;  }
    else if(grid1[0] == 'O' && grid2[0] == 'O' && grid3[0] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false;  }
    else if(grid2[0] == 'O' && grid2[1] == 'O' && grid2[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[0] == 'O' && grid3[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'O' && grid2[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[2] == 'O' && grid2[1] == 'O' && grid1[0] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[1] == 'O' && grid2[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[2] == 'O' && grid2[2] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    }
  }
      }
      else if(bot) //Player vs Bot mode
      {

    while(GameIsRunning)
  {
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 " << grid3 << endl << endl;
    cout << "  012\n" << endl;

    int Pos1InputA = 0; int Pos2InputA = 0;
    int Pos1InputB = 0; int Pos2InputB = 0;

    cout << "Player 1 (line): "; cin >> Pos1InputA; Beep(1200, 150);
    cout << "Player 1 (col): "; cin >> Pos1InputB;(1200, 150);
    cout << endl;
    if(Pos1InputA == 1){if(grid1[Pos1InputB] != 'O'){grid1[Pos1InputB] = 'X';}}
    if(Pos1InputA == 2){if(grid2[Pos1InputB] != 'O'){grid2[Pos1InputB] = 'X';}}
    if(Pos1InputA == 3){if(grid3[Pos1InputB] != 'O'){grid3[Pos1InputB] = 'X';}}
    Beep(1200, 100);Beep(1200, 100);
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 " << grid3 << endl << endl;
    cout << "  012\n" << endl;
    if(grid1[0] == 'X' && grid1[1] == 'X' && grid1[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'X' && grid2[0] == 'X' && grid3[0] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid2[0] == 'X' && grid2[1] == 'X' && grid2[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[0] == 'X' && grid3[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'X' && grid2[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[2] == 'X' && grid2[1] == 'X' && grid1[0] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[1] == 'X' && grid2[1] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[2] == 'X' && grid2[2] == 'X' && grid3[2] == 'X') {cout << "Player 1 Win!\n"; Sleep(1000); GameIsRunning = false; }
    if(GameIsRunning){
    srand(time(NULL)); /**< For random number */

    cout << endl;

    if(Pos2InputA == 1){if(grid1[Pos2InputB] != 'X'){}}     else{Pos2InputA = rand() % 3;Pos2InputB = rand() % 3;}
    if(Pos2InputA == 2){if(grid2[Pos2InputB] != 'X'){}}     else{Pos2InputA = rand() % 3;Pos2InputB = rand() % 3;}
    if(Pos2InputA == 3){if(grid3[Pos2InputB] != 'X'){}}     else{Pos2InputA = rand() % 3;Pos2InputB = rand() % 3;}

    if(Pos2InputA == 1){if(grid1[Pos2InputB] != 'X'){grid1[Pos2InputB] = 'O';}}
    if(Pos2InputA == 2){if(grid2[Pos2InputB] != 'X'){grid2[Pos2InputB] = 'O';}}
    if(Pos2InputA == 3){if(grid3[Pos2InputB] != 'X'){grid3[Pos2InputB] = 'O';}}

     Beep(1200, 100); Beep(1200, 100);
    cout << "1 " << grid1 << endl << "2 " << grid2 << endl << "3 "  << grid3 << endl << endl;
    cout << "  012\n" << endl;
    if(grid1[0] == 'O' && grid1[1] == 'O' && grid1[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false;  }
    else if(grid1[0] == 'O' && grid2[0] == 'O' && grid3[0] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false;  }
    else if(grid2[0] == 'O' && grid2[1] == 'O' && grid2[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[0] == 'O' && grid3[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[0] == 'O' && grid2[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid3[2] == 'O' && grid2[1] == 'O' && grid1[0] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[1] == 'O' && grid2[1] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    else if(grid1[2] == 'O' && grid2[2] == 'O' && grid3[2] == 'O') {cout << "Player 2 Win!\n"; Sleep(1000); GameIsRunning = false; }
    }
  }
}
}
}
}


