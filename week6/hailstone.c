/* Adrian, 400495595, Oct. 26, 2024
 *
 * Finds all terms in a hailstone sequence using a recursive function.
 */

#include <stdio.h>

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

int main() {
    long n;
    printf("Enter a positive integer: ");
    scanf("%ld", &n);
    hailstone(n);
    return 0;
}
