#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    char value[100];

    while (true)
    {
        int result = scanf("%s", value);

        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }

        if (result == EOF)
            break;

        printf("%s\n", value);
    }
    return EXIT_SUCCESS;
}