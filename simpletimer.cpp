#include "simpletimer.h"

SimpleTimer::SimpleTimer()
{
    start = std::chrono::steady_clock::now();

}

SimpleTimer::~SimpleTimer()
{
    end = std::chrono::steady_clock::now();
    std::chrono::duration<float> duration = end - start;
    std::cout<<"Duration time "<< duration.count()<<std::endl;
}
