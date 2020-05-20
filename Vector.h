#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <vector>

namespace lesson_STLvector {


    void run_example(){
        std::vector<int> myVector;
        myVector.push_back(1);
        myVector.push_back(2);
        myVector.push_back(3);
        myVector.push_back(4);
        myVector.push_back(5);
        myVector.pop_back();
        for (auto& elem : myVector) {
            std::cout<<elem<<std::endl;
        }
    }

}

#endif // VECTOR_H
