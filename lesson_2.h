#ifndef LESSON_2_H
#define LESSON_2_H

#include <iostream>
#include <thread>
#include <chrono>
#include "lesson_1.h"
/*
 * многозадачное программирование
 * передача параметров в поток
 *
 * */

namespace lesson_2 {

    void DoWork(int a, int b){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout<< "========== DoWork start ============="<<std::endl;
        std::cout<< "           DoWork result: "<< a + b <<std::endl;
        std::cout<< "========== DoWork stop  ============="<<std::endl;

    }


    void run_example(){
        std::thread tr(DoWork, 2, 3);
        std::thread tr1(lesson_1::DoWorkMaster);
        std::thread tr2(lesson_1::DoWorkSlave);
        tr1.join();
        tr2.join();
        tr.join();
    }

}
#endif // LESSON_2_H
