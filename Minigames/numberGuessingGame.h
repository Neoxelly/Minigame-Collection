#include <iostream>
#include <stdlib.h>
#include <ctime>
void humanGuesser(){
    srand(time(NULL));
    int number, answer, tries(0);
    std::cout<<"Pick a number between 1-100!\n";
    again:std::cin>>number;
    if(number < 1 || number > 100){
        std::cout<<"Incorrect input. Pick a number between 1-100\n";
        goto again;
    }
    answer = rand()% 100 + 1;
    do{
        if(number < answer){
            std::cout<<"Guess too low!\n";
            std::cin>>number;
        }
        else if(number > answer){
            std::cout<<"Guess too high!\n";
            std::cin>>number;
        }
        tries++;
    }while(number != answer);
    std::cout<<"You got it! The number was "<<answer<<"!\n";
    std::cout<<"Amount of tries: "<<tries<<'\n';
}
void computerGuesser(){
    srand(time(NULL));
    int number, answer, tries(0);
    std::cout<<"Pick a number between 1-100!\n";
    std::cin>>answer;
    do{
        number = rand() % 100 +1;
        tries++;
    }while(answer != number);
    std::cout<<"The computer took "<<tries<<" tries to guess the number "<<answer<<'\n';
}
void numberGuessingGame(){
    system("CLS");
    int computerOrPlayer;
    std::cout<<"***********************"<<'\n';
    std::cout<<"*Number guessing game!*"<<'\n';
    std::cout<<"***********************"<<'\n';
    std::cout<<"Would you like to guess the number or would you like the computer to guess your number?\n";
    std::cout<<"1. I want to guess the number!\n";
    std::cout<<"2. I want the computer to guess my number!\n";
    again:std::cin>>computerOrPlayer;
    switch(computerOrPlayer){
        case 1:
            humanGuesser();
            break;
        case 2:
            computerGuesser();
            break;
        default:
            std::cout<<"Please use numbers from 1-2:\n";
            goto again;
    }
}