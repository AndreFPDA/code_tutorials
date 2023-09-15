#include <iostream>
#include "ACoolStateMachine.h"
#include <ctime>

int main(){
    srand(time(0));
    std::cout<<"Hello State Machine\n";

    ACoolStateMachine stateMachine;
    while ((!stateMachine.HasDone())){
        stateMachine.Update();
        /* code */
    }
    
    return 0;
}