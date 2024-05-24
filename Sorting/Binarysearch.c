#include "Binarysearch.h"

int binary_search(int data, int array[], int length) {
    int l = 0;
    int r = length - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (array[mid] == data)
            return mid;
        else if (array[mid] < data)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
