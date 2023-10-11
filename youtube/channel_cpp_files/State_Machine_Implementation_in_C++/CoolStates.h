#ifndef CoolStates
#define CoolStates

#include"State.h"
#include<iostream>
#include "ACoolStateMachine.h"

class StartState:public State<class ACoolStateMachine>{
public:
    void Enter(ACoolStateMachine*pOwner){
        std::cout<<"Enter Start State\n";
    }
    void Execute(ACoolStateMachine*pOwner);
    void Exit(ACoolStateMachine*pOwner){
        std::cout<<"Exit from Start State\n";
    }
};

class State1:public State<class ACoolStateMachine>{
public:
    void Enter(ACoolStateMachine*pOwner){
        std::cout<<"Enter Start State1\n";
    }
    void Execute(ACoolStateMachine*pOwner);
    void Exit(ACoolStateMachine*pOwner){
        std::cout<<"Exit from Start State1\n";
    }
};

class State2:public State<class ACoolStateMachine>{
public:
    void Enter(ACoolStateMachine*pOwner){
        std::cout<<"Enter Start State2\n";
    }
    void Execute(ACoolStateMachine*pOwner);
    void Exit(ACoolStateMachine*pOwner){
        std::cout<<"Exit from Start State2\n";
    }
};

class StateN:public State<class ACoolStateMachine>{
public:
    void Enter(ACoolStateMachine*pOwner){
        std::cout<<"Enter Start StateN\n";
    }
    void Execute(ACoolStateMachine*pOwner);
    void Exit(ACoolStateMachine*pOwner){
        std::cout<<"Exit from Start StateN\n";
    }
};

#endif
