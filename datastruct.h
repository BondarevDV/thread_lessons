#ifndef DATASTRUCT_H
#define DATASTRUCT_H
/*
 * Класические структуры данных
 * двухсвязный список
 *
*/
struct data{
    char* user;
    int id;
};

struct dLinkedList{
    dLinkedList* pNext;
    dLinkedList* pPrev;
    int data;
};

#endif // DATASTRUCT_H
