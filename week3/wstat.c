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