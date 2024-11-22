/* Adrian Winter, 400495595, Nov. 19, 2024
*
* Main function to test find content and trim functions
*/

#include <stdio.h>
#include "string_utilities.h"

/* main
*
* Tests find and trim functions
* Returns: 0 if successful
*/
int main() {
    char test_cases[][100] = {
        "   hello friend   ",
        "\t\n   \n\t", // All whitespace
        "no leading or trailing spaces",
        "",
        "   content   here   ",
        "tabs\tand\nnewlines\n"
    };

    // Test find_content
    printf("Testing find_content:\n");
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        char *first, *last;
        find_content(test_cases[i], &first, &last);
        if (first && last && first <= last) {
            printf("Test case %d: '%s'\n", i + 1, test_cases[i]);
            printf("First: '%c', Last: '%c'\n", *first, *last);
        } else {
            printf("Test case %d: '%s' contains only whitespace.\n", i + 1, test_cases[i]);
        }
    }

    // Test trim
    printf("\nTesting trim:\n");
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        char str[100];
        strcpy(str, test_cases[i]); // Copy to avoid modifying original
        trim(str);
        printf("Test case %d: '%s' trimmed to '%s'\n", i + 1, test_cases[i], str);
    }

    return 0;
}