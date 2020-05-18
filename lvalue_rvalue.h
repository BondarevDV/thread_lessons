#ifndef LVALUE_RVALUE_H
#define LVALUE_RVALUE_H
#include <iostream>
#include <string>

namespace lesson_ref{
    int x = 0;
    int& getLValue(){
        return x;
    }

    int getRValue(int x){
        return x;
    }

    template <typename T>
    void print( T&& x){
        std::cout<<"Rv: "<<++x<<std::endl;
    }


    std::string  getStr(){
        std::string str= "BigData";
        std::string& lnk = str;
        return lnk;
    }

    void runExample(){
        print<int> (45);
        //print<std::string> (getStr());
        getLValue() = getRValue(2);
        print<int> (34);
    }

}





#endif // LVALUE_RVALUE_H
