#ifndef INTERESTING_THINGS_H
#define INTERESTING_THINGS_H
#include <cstdio>

namespace example_task {
    void swap_number(int a, int b){
        int x = a, y = b;
        y = x ^ y;
        x = x ^ y;
        printf("x = %d, y = %d \n", x, y);
    }

    void swap_string(char* sub_s1, char* sub_s2){
        sub_s1 += 2 * (sub_s2 - sub_s1);
        sub_s2 -= sub_s1 - sub_s2;
        sub_s1 -= (sub_s1 - sub_s2)/2;
        printf("sub_s1 = %s, sub_s2 = %s \n", sub_s1, sub_s2);
    }
}


#endif // INTERESTING_THINGS_H
