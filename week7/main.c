// main.c
#include <stdio.h>
#include "array_utilities.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Test cases
    int keys[] = {3, 5, 9}; // Test for an existing element, a unique element, and a non-existing element
    for (int i = 0; i < 3; i++) {
        int index = find_index(arr, size, keys[i]);
        if (index != -1) {
            printf("Key %d found at index %d\n", keys[i], index);
        } else {
            printf("Key %d not found in the array\n", keys[i]);
        }
    }

    // Edge cases
    int empty_arr[] = {};
    int empty_size = 0;
    int edge_key = 1;
    int edge_index = find_index(empty_arr, empty_size, edge_key);
    printf("Key %d in empty array: %s\n", edge_key, edge_index == -1 ? "not found" : "found");

    return 0;
}
