/* Adrian Winter, 400495595, Oct. 24, 2024
*
* Contains the test case for digits
*/

#include <stdio.h>
#include <stdlib.h>
#include "digits.h"


/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */
int main() {
    int min, max, sum;
    long n;

    n = 1234;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 10) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    n = 12;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 2 && min == 1 && sum == 3) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    n = 12345;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 5 && min == 1 && sum == 15) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}