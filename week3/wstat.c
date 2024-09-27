/* Adrian Winter, 400495595, Sept. 24, 2024
*
* A simple program that finds the average amount of characters for all lines of the input. The program will return a stderr if the given arguments are invalid.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    double lines, words, chars;

    while (true)
    {
        int result = scanf("%lf %lf %lf", &lines, &words, &chars);
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;

        double averageLineLength = chars / lines - 1;
        printf("Average word length: %.1f\n", averageLineLength);
    }
    return EXIT_SUCCESS;
}
