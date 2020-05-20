#ifndef LESSON_6_H
#define LESSON_6_H
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>
#include "lesson_3.h"
#include <cstdio>

/*
 * Многопоточное программирование
 * mutex
 * защита разделяемых данных
 * синхронизация потоков
 *
*/
namespace lesson_6 {




    std::list<int> shared_mem;

    void Print(char ch){
        for (int i = 0; i < 5; ++i) {
            for (int i = 0; i < 10; i++) {
                std::cout<< ch;
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
            }
             std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }
    void run_example(){
        auto start = std::chrono::high_resolution_clock::now();

        lesson_3::Sum_r(123,123);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> duration = end - start;
        //printf("time duration = %f \n", duration.count());
        Print('*');
        Print('#');
    }
}

#endif // LESSON_6_H
