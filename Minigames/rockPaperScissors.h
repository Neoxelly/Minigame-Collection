#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
char getUserChoice(){
    char player;
    cout<<"Rock-Paper-Scissors Game!"<<endl;
    cout<<"*************************"<<endl;
    do{
    cout<<"Choose one of the following:"<<endl;
    cout<<"*************************"<<endl;
    cout<<"'r' for rock"<<endl;
    cout<<"'p' for paper"<<endl;
    cout<<"'s' for scissors"<<endl;
    cin>>player;
    }while(player!='r' && player!='p' && player!='s');
    return player;
}

char getComputerChoice(){
    srand(time(NULL));
    int choice = rand()% 3 + 1;
    switch(choice){
        case 1: 
            return 'r'; 
            break;
        case 2: 
            return 'p'; 
            break;
        case 3: 
            return 's'; 
            break;
    }
}

void showChoice(char choice){
    switch(choice){
        case 'r':
            cout<<"Rock\n";
            break;
        case 'p':
            cout<<"Paper\n";
            break;
        case 's':
            cout<<"Scissors\n";
            break;
    }
}

void showWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){
                cout<<"It's a tie!\n";
            }
            else if(computer == 'p'){
                cout<<"You lose!\n";
            }
            else{
                cout<<"You win!\n";
            }
            break;
        case 'p':
            if(computer == 'r'){
                cout<<"You win!\n";
            }
            else if(computer == 'p'){
                cout<<"It's a tie!\n";
            }
            else{
                cout<<"You lose!\n";
            }
            break;
        case 's':
            if(computer == 'r'){
                cout<<"You lose!\n";
            }
            else if(computer == 'p'){
                cout<<"You win!\n";
            }
            else{
                cout<<"It's a tie!\n";
            }
            break;
    }
}

void rockPaperScissors(){
    system("CLS");
    char player, computer;
    player = getUserChoice();
    computer = getComputerChoice();
    cout<<"Your choice: ";
    showChoice(player);
    cout<<"Computer's choice: ";
    showChoice(computer);
    showWinner(player, computer);
}