// array_utilities.c
#include "array_utilities.h"

int find_index(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}
