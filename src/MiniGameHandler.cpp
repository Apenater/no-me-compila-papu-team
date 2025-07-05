#include "MiniGameHandler.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Declaraciones anticipadas de los minijuegos que ya tienes hechos
bool playTicTacToe();
bool playHangman();
bool playCrossword();
bool playRockPaperScissors();

bool MiniGameHandler::playRandomMiniGame() {
    srand(time(0));
    int choice = rand() % 4;

    cout << "\n Starting a mini-game challenge!\n";

    switch (choice) {
        case 0:
            cout << "\n Tic Tac Toe:\n";
            return playTicTacToe();
        case 1:
            cout << "\n Hangman:\n";
            return playHangman();
        case 2:
            cout << "\n Crossword:\n";
            return playCrossword();
        case 3:
            cout << "\n Rock, Paper, Scissors:\n";
            return playRockPaperScissors();
        default:
            return false;
    }
}