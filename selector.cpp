#include <iostream>
#include <stdlib.h>
#include "Minigames/numberGuessingGame.h"
#include "numberGuessingGame.cpp"
void selector(){
    system("CLS");
    std::cout<<"Choose the minigame you want to play!\n";
    std::cout<<"1. Number guessing game\n";
    std::cout<<"2. Rock Paper Scissors\n";
    std::cout<<"3. Tic-Tac-Toe\n";
    std::cout<<"4. Hangman\n";
    std::cout<<"5. Snake\n";
    std::cout<<"6. Minesweeper\n";
    std::cout<<"7. Sudoku\n";
    std::cout<<"8. Chess\n\n";
    std::cout<<"(Note: To select use numbers from 1-8!)\n\n";
    int chooseMinigame;
    std::cin>>chooseMinigame;
    switch(chooseMinigame){
        case 1:
            numberGuessingGame();
            break;
    }
}