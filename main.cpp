#include "TicTacToeGame.h"
#include<iostream>

using namespace std;

int main(){

    char input;
    bool isDone = false;
    TicTacToeGame game;

    //Outer Game Loop
    while (isDone == false) {
        game.playGame();
        // We have to see if they want to play again!
        cout << "Would you like to play again? (Y/N): ";
        cin >> input;
        if (input == 'N' || input == 'n') {
            isDone = true;
        }
        if(input == 'Y' || input == 'y'){
        }
        else{
            cout<<"invalid input, game ends";
        }
    }

    system("PAUSE");
    return 0;
}