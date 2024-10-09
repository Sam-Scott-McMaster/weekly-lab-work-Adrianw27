/* Adrian Winter, 400495595, Oct. 8
*
* A simple program that prints a calender based on the user input of
* amount of days and first day of the month.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int number_of_days;
    int first_day;
    int current_day;

    // Prompt user input
    printf("How many days this month?\n");
    scanf("%d", &number_of_days);
    printf("What's the starting day (1=Monday, 7=Sunday)?\n");
    scanf("%d", &first_day);
    current_day = first_day-1;

    // Calendar header
    printf(" M  T  W  T  F  S  S\n");

    // Print empty spaces until first day is reached
    for (int i=1; i<first_day; i++){
        printf("   ");
    }

    // Loop through every day
    for (int i=1; i<=number_of_days; i++){
        current_day++;

        // Condition to print new line on Sundays
        if (current_day == 8){
            printf("\n");
            current_day = 1;
        }

        printf("%2d ", i);
    }

    printf("\n");
    return EXIT_SUCCESS;
}