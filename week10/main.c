/* Adrian Winter, 400495595, Nov. 19, 2024
*
* Main function to test string utility functions
*/

#include <stdio.h>
#include "string_utilities.h"

#define INPUT_SIZE 100

/* main
*
* Test string utilities functions by calling them
* Returns: 0 when successful
*/
int main() {
    char input[INPUT_SIZE + 1];
    
    while (fgets(input, INPUT_SIZE, stdin)) {
        // Trim input
        trim(input);

        // Convert to upper case
        to_upper(input);
        printf("Uppercase: %s\n", input);

        // Convert to lower case using to_lower_pure
        char *lower_str = to_lower_pure(input);
        if (lower_str) {
            printf("Lowercase: %s\n", lower_str);
            free(lower_str); // Free the allocated memory
        } else {
            fprintf(stderr, "Memory allocation failed!\n");
        }
    }
    
    return 0;
}