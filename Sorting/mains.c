#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "generate_array.h"
#include "quicksort.h"
#include "Binarysearch.h"
#include "swap.h"

int main() {
    int length, lower = 1, upper = 10000;
    srand(time(NULL));
    printf("Enter the length: ");
    scanf("%d", &length);
    int array[length];
    generate_array(length, lower, upper, array);

    printf("Generated Array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
    printf("\n");

    quicksort(array, 0, length - 1);
    printf("Sorted Array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }

    int data;
    printf("Enter the number to search: ");
    scanf("%d", &data);
    int search_result = binary_search(data, array, length);

    if (search_result == -1) {
        printf("The number is not present in the array.\n");
    } else {
        printf("Array has the number at index %d.\n", search_result);
    }

    return 0;
} 
