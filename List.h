#ifndef LIST_H
#define LIST_H
#include <list>
#include <iostream>
/*
 * Библиотека стандартных шаблонов
 * List
 *
*/

namespace Lesson_STLList {

    /*
     * Разница в использовании префиксного и постфиксного инкремента/декремента
     * для итераторов в том, что в случае префиксного итератора,
     * в теории, просто изменяется состояние объекта, и потом он возвращается,
     * а при использовании постфиксного инкремента, состояние также изменяется,
     * но возвращается объект с предыдущим состоянием, т.е. для этого компилятору
     * необходимо создать ещё 1 объект. Это влияет на скорость работы.
     * Но, вроде как современные компиляторы уже могут сами оптимизировать подобные случаи,
     * и скорость работы не отличается. Но для себя я всё же сделал вывод,
     * что если использование префиксного и постфиксного инкремента не влияет
     * на правильность ответа, то предпочтительно использовать префиксный инкремент.
     */

    template<typename T>
    void PrintList(const std::list<T> &lst){
        std::cout<<"=== BEGIN  size = "<<lst.size()<< " ==="<<std::endl;
        for (auto it = lst.cbegin(); it != lst.cend(); ++it) {
            std::cout<<*it<<std::endl;
        }
        std::cout<<"=== END ==="<<std::endl;

    }

    void run_example(){
        std::list<int> myList = {11,12,13,14, 1, 1, 1};
        myList.push_back(1);
        myList.push_back(2);
        myList.push_back(3);
        myList.push_back(4);
        myList.push_front(111);
        //std::list<int>::iterator it = myList.begin();
        //auto it = myList.begin();
        myList.sort();
        //PrintList<int>(myList);
        myList.pop_back();
        myList.pop_front();
        //PrintList<int>(myList);

        myList.reverse();
        //PrintList(myList);
        auto it = myList.begin();

        //PrintList(myList);

        std::advance(it, 1);
        std::cout<<"it 3 = "<<*it<<std::endl;
        PrintList(myList);
        myList.erase(it);
        myList.remove(1);
        PrintList(myList);
        myList.clear();
        myList.assign(3, 222);
        PrintList(myList);

        std::list<int> myList1 = {1,2,3,4,5,6,7};
        std::list<int> myList2 = {11,21,31,41,51,61,71};
        myList1.assign(myList2.begin(), myList2.end()); // данные из контейнера list2 записываются list1
        PrintList(myList1);
        PrintList(myList2);
        std::list<int> myList3 = {1,2,3,4,5,6,7};
        std::list<int> myList4 = {11,21,31,41,51,61,71};
        myList3 = std::move(myList4); // семантика перемещения
        PrintList(myList3);
        PrintList(myList4);
    }
}

#endif // LIST_H
