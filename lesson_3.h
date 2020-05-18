#ifndef LESSON_3_H
#define LESSON_3_H
#include <iostream>
#include <thread>
#include <chrono>
#include "lesson_1.h"
/*
 * многозадачное программирование
 * Получение результатов работы функции из потока
 *
 * */

namespace lesson_3 {
    int Sum_r(int a, int b ){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        int result = a + b;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        return result;
}
    void Sum(int a, int b , int &result){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        result = a + b;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }


    void run_example(){
        int result;
        std::thread tr(Sum, 2, 3, std::ref(result));
        std::thread tr1(lesson_1::DoWorkMaster);
        std::thread tr2(lesson_1::DoWorkSlave);
        tr.join();
        tr1.join();
        tr2.join();
        std::cout<< result<< std::endl;
    }

}
#endif // LESSON_3_H
