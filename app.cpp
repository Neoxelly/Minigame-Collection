#include <iostream>
#include <conio.h>
#include "Minigames/selector.h"
#include "selector.cpp"
// Author: Danin Sadzak (@Neoxelly)
int main(){
    std::cout<<"************************************\n";
    std::cout<<"*   Danin's Minigame Collection!   *\n";
    std::cout<<"*                                  *\n";
    std::cout<<"*   Press Any Button To Continue   *\n";
    std::cout<<"************************************\n";
    if(getch()){
        selector();
    }
    return 0;
}