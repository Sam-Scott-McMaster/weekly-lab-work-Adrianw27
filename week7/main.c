/* Adrian Winter, 400495595, Oct. 31, 2024
*
* Main function for testing array_utilities
*/

#include <stdlib.h>
#include <stdio.h>
#include "array_utilities.h"

/* Main function. Runs test cases for the  function.
 * Returns 0 upon completion.
 */

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Test cases
    int keys[] = {3, 5, 9}; // Test for an existing element, a unique element, and a non-existing element
    for (int i = 0; i < 3; i++) {
        // Test find_index function
        int index = find_index(arr, size, keys[i]);
        if (index != -1) {
            printf("find_index: Key %d found at index %d\n", keys[i], index);
        } else {
            printf("find_index: Key %d not found in the array\n", keys[i]);
        }

        // Test find_pointer function
        int* ptr = find_pointer(arr, size, keys[i]);
        if (ptr != NULL) {
            printf("find_pointer: Key %d FOUND %d\n", keys[i], *ptr);
        } else {
            printf("find_pointer: Key %d NOT FOUND\n", keys[i]);
        }

        int occurrences = count(arr, size, keys[i]);
        printf("count: Key %d occurs %d times in the array\n", keys[i], occurrences);
    }

    // Edge cases
    int empty_arr[] = {};
    int empty_size = 0;
    int edge_key = 1;

    // Test find_index with empty array
    int edge_index = find_index(empty_arr, empty_size, edge_key);
    printf("find_index with empty array: Key %d %s\n", edge_key, edge_index == -1 ? "NOT FOUND" : "FOUND");

    // Test find_pointer with empty array
    int* edge_ptr = find_pointer(empty_arr, empty_size, edge_key);
    printf("find_pointer with empty array: Key %d %s\n", edge_key, edge_ptr == NULL ? "NOT FOUND" : "FOUND");

    // Test count with empty array
    int occurrences = count(empty_arr, empty_size, edge_key);
    printf("count: Key %d occurs %d times in the empty array\n", edge_key, occurrences);
    
    int arr2[][4] = {
        {1, 2, 3, 4},
        {5, 3, 3, 8},
        {9, 3, 2, 7}
    };
    int rows = sizeof(arr2) / sizeof(arr2[0]);
    int cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);

    // Test count2d
    int key = 3;
    int total_occurrences = count2d(arr2, rows, cols, key);
    printf("count2d: Key %d occurs %d times in the 2D array\n", key, total_occurrences);
}

