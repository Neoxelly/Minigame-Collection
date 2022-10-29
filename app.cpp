#include <iostream>
#include <conio.h>
#include <windows.h>
#include "selector.cpp"
// Author: Danin Sadzak (@Neoxelly)
int main(){
    std::cout<<"************************************\n";
    std::cout<<"*   Danin's Minigame Collection!   *\n";
    std::cout<<"*                                  *\n";
    std::cout<<"*   Press Any Button To Continue   *\n";
    std::cout<<"************************************\n";
    if(getch()){
        Beep(200, 200);
        selector();
    }
    return 0;
}