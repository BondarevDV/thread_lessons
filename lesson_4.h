#ifndef LESSON_4_H
#define LESSON_4_H
#include <iostream>
#include <thread>
#include <chrono>
#include "lesson_3.h"

namespace lesson_4 {

//    void Sum(int a, int b , int &result){
//        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//        result = a + b;
//    }

    void run_example(){
        int result_1;
        int result_2;
        std::thread tr_task_1(lesson_1::DoWorkSlave);
        auto f = [&result_2](int a, int b){ result_2 = lesson_3::Sum_r(a,b);};
        std::thread tr([&result_1](int a, int b){ result_1 = lesson_3::Sum_r(a,b);}, 2, 5);
        std::thread tr_lambda(f, 23, 5);


        std::thread tr_task_2(lesson_1::DoWorkMaster);
        tr.join();
        tr_task_1.join();
        tr_task_2.join();
        tr_lambda.join();
        std::cout<<"result = "<<result_1<<std::endl;
        std::cout<<"result = "<<result_2<<std::endl;
    }



}


#endif // LESSON_4_H
