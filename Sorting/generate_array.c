#include "generate_array.h"
#include <stdlib.h>
#include <time.h>
void generate_array(int length, int lower, int upper, int array[]) {
    int rand_num;
    for(int i = 0; i < length; i++) {
        rand_num = rand() % (upper - lower + 1) + lower;
        array[i] = rand_num;
    }
}
