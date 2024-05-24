#include "quicksort.h"
#include "swap.h"
int partition(int array[], int lb, int up) {
    int pivot = array[lb];
    int start = lb;
    int end = up;

    while (start < end) {
        while (array[start] <= pivot) {
            start++;
        }
        while (array[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(&array[start], &array[end]);
        }
    }
    swap(&array[lb], &array[end]);
    return end;
}

void quicksort(int array[], int lb, int up) {
    int low;
    if (lb < up) {
        low = partition(array, lb, up);
        quicksort(array, lb, low - 1);
        quicksort(array, low + 1, up);
    }
}

