#ifndef SIMPLETIMER_H
#define SIMPLETIMER_H
#include <chrono>
#include <iostream>


using namespace std;

class SimpleTimer
{
public:
    SimpleTimer();
    ~SimpleTimer();
private:
    std::chrono::steady_clock::time_point start, end;
    //std::chrono::time_point start, end;
};

#endif // SIMPLETIMER_H
