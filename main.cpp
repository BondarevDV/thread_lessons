#include <iostream>
#include <thread>
#include <chrono>
#include <lesson_1.h>

#include <lesson_2.h>
#include <lesson_3.h>
#include <lesson_4.h>
#include <lesson_5.h>
#include <lesson_6.h>
#include <lvalue_rvalue.h>
#include <cstdio>
#include "List.h"
#include "Vector.h"
#include "simpletimer.h"



int main()
{
    SimpleTimer* t = new SimpleTimer();
    ios::sync_with_stdio(false); // ускоряет cin cout ds


    std::cout<< "start" <<std::endl;

    //lesson_ref::runExample();
    //lesson_1::run_example();
    //lesson_2::run_example();
    //lesson_3::run_example();
    //lesson_4::run_example();
    //lesson_5::run_example();
    lesson_6::run_example();
    //Lesson_STLList::run_example();
    //lesson_STLvector::run_example();

    std::cout<< "stop "<<std::endl;
    delete t;

    return 0;
}
