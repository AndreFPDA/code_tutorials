#ifndef EventGenerator
#define EventGenerator

#include<iostream>

#define MAX_COUNTER 5

class EventGenerator{
    int m_counter;
    EventGenerator(){
        //Initial Value
        m_counter = rand()%MAX_COUNTER+1;
    }
    public:

        //thi clas is a Singleton
        static EventGenerator*GetInstance();
        void CleanUp(){}

        int Generate(int eventNum);

};

#ifndef