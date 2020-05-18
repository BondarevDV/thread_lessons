#include <iostream>
#include <thread>
#include <chrono>
#include <lesson_1.h>

#include <lesson_2.h>
#include <lesson_3.h>
#include <lesson_4.h>
#include <lesson_5.h>
#include <lvalue_rvalue.h>
#include <cstdio>



int main()
{
    std::cout<< "start" <<std::endl;
    //lesson_ref::runExample();
    //lesson_1::run_example();
    //lesson_2::run_example();
    //lesson_3::run_example();
    //lesson_4::run_example();
    lesson_5::run_example();
    std::cout<< "stop" <<std::endl;
    return 0;
}
