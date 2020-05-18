#ifndef LESSON_5_H
#define LESSON_5_H
#include <iostream>
#include <thread>
#include <chrono>

namespace lesson_5 {
    class MyThread
    {
       public:
        MyThread();
        void DoWorkMaster();
        void DoWorkSlave();
        int Sum(int a, int b );
        void Sum(int a, int b , int &result);

    };

    int MyThread::Sum(int a, int b ){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        int result = a + b;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        return result;
    }


    void MyThread::Sum(int a, int b , int &result){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        result = a + b;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }


    MyThread::MyThread()
    {

    }

    void MyThread::DoWorkMaster(){
        for (size_t i = 0; i < 10; i++){

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            std::cout<< "DoWork master id thread = "<< std::this_thread::get_id()<< " task = "<< i <<std::endl;
        }
    }

    void MyThread::DoWorkSlave(){
        for (size_t i = 0; i < 10; i++){

            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            std::cout<< "DoWork slave id thread = "<< std::this_thread::get_id()<< " task = "<< i  <<std::endl;
        }
    }

    void run_example(){
        MyThread tasker;
        std::thread t1(&MyThread::DoWorkSlave, tasker);
        int a = 4, b = 5, result = 111;
        std::thread t2([&](int a, int b){
                result = tasker.Sum(a, b);
        }, a, b);

        std::thread t3(&MyThread::DoWorkMaster, tasker);
        t1.join();
        t2.join();
        t3.join();
        std::cout<< "result = "<< result <<std::endl;

    }
}


#endif // LESSON_5_H
