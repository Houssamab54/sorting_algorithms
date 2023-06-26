#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: number of elements in @array
 */
void bubble_sort(int *array, size_t size) {
    int temp;
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            // Print array after each swap
            for (size_t k = 0; k < size; k++) {
                printf("%d ", array[k]);
            }
            printf("\n");
        }
    }
}
