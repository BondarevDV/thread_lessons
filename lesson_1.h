#ifndef LESSON_1_H
#define LESSON_1_H
#include <iostream>
#include <thread>
#include <chrono>

namespace lesson_1 {

    void DoWorkMaster(){
        for (size_t i = 0; i < 10; i++){

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            std::cout<< "DoWork master id thread = "<< std::this_thread::get_id()<< " task = "<< i <<std::endl;
        }
    }

    void DoWorkSlave(){
        for (size_t i = 0; i < 10; i++){

            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            std::cout<< "DoWork slave id thread = "<< std::this_thread::get_id()<< " task = "<< i  <<std::endl;
        }
    }

    void run_example(){
        std::thread tr1(lesson_1::DoWorkMaster);
        std::thread tr2(lesson_1::DoWorkSlave);
        tr1.join();
        tr2.join();
    }

}
#endif // LESSON_1_H
