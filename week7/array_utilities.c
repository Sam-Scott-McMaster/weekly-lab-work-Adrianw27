/* Adrian Winter, 400495595, Oct. 31, 2024
*
* A brief, high level description of what is in this file.
*/

#include "array_utilities.h"
#include <stddef.h>

/* find index
*
* Parameters: Array, its size, and key of array item
* Loops through an array and checks if any item in the array matches the key
* Returns: index of item if it is in the array, -1 if not
*/
int find_index(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}

/* find pointer
*
* Parameters: Array, its size, and key of array item
* Loops through an array and checks if any item in the array matches the key
* Returns: index of item if it is in the array, -1 if not
*/
int* find_pointer(int* array, int size, int key) {
    for (int* ptr = array; ptr < array + size; ++ptr) {
        if (*ptr == key) {
            return ptr;  // Return pointer to the first occurrence of the key
        }
    }
    return NULL;  // Key not found
}

/* count
*
* Parameters: Array, its size, and key of array item
* Loops through an array and checks if any item in the array matches the key
* Returns: index of item if it is in the array, -1 if not
*/
int count(int arr[], int size, int key) {
    int count = 0;
    int* current_ptr = arr;

    while (size > 0) {
        int* result = find_pointer(current_ptr, size, key);
        if (result == NULL) {
            break;  // No more occurrences found
        }
        count++;
        
        // Update current_ptr and size for the next search
        size -= (result - current_ptr) + 1;  // Reduce the size by the distance traveled + 1
        current_ptr = result + 1;  // Move to the element after the found occurrence
    }

    return count;
}

/* count 2D
*
* Parameters: Array, its size, and key of array item
* Loops through an array and checks if any item in the array matches the key
* Returns: index of item if it is in the array, -1 if not
*/
int count2d(int arr[][4], int rows, int cols, int key) {
    int total_count = 0;
    for (int i = 0; i < rows; i++) {
        total_count += count(arr[i], cols, key);  // Call count on each row
    }
    return total_count;
}