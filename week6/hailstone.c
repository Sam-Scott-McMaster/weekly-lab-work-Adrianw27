/* Adrian, 400495595, Oct. 26, 2024
 *
 * Finds all terms in a hailstone sequence using a recursive function.
 */

#include <stdio.h>

/* hailstone
*
* Parameters: A long n
* Recursive function to loop through values in a hailstone function.
* Returns: in the base cases of invalid input, and 1
*/
void hailstone(long n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("%ld ", n);

    if (n == 1) {
        printf("\n"); // End the sequence with a newline when reaching 1
        return;
    }

    if (n % 2 == 0) {
        hailstone(n / 2);  // Recursive call for even numbers
    } else {
        hailstone(3 * n + 1);  // Recursive call for odd numbers
    }
}

/* main function
*
* Parameters: none
* Takes input and calls hailstone
* Returns: 0 after execution
*/
int main() {
    long n;
    printf("Enter a positive integer: ");
    scanf("%ld", &n);
    hailstone(n);
    return 0;
}
