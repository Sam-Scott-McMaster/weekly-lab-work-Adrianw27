/* Adrian Winter, 400495595, Oct. 8
*
* A simple program that uses a do loop to get dates from the user
* and terminates and prints the earliest date when 0/0/0 is entered.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int earliest_day, earliest_month, earliest_year,
    current_day, current_month, current_year;
    int counter = 0;
    bool loop_condition;

    printf("End with input 0/0/0\n");

    do {
        // Prompt user input
        printf("Enter a date (mm/dd/yyyy):");
        scanf("%d /%d /%d", &current_month, &current_day, &current_year);
        
        // If it is a valid date
        if (current_day > 0 && current_day <= 31 && current_month > 0 && current_month <= 12){
            // If it is the first valid date, or it is earlier than the previous earliest date
            if (counter == 0 || (current_year < earliest_year) ||
                (current_year == earliest_year && current_month < earliest_month) ||
                (current_year == earliest_year && current_month == earliest_month && current_day < earliest_day)){
                // Then the entered date is set as the new earliest date
                earliest_day = current_day;
                earliest_month = current_month;
                earliest_year = current_year;
            }
        }
        else if (!(current_day == 0 && current_month == 0 && current_year == 0)) {
            // Reject the date if it is not valid or 0/0/0
            printf("Date Rejected\n");
        }
        counter++;
        loop_condition = !(current_day == 0 && current_month == 0 && current_year == 0); // End the loop if the input is 0/0/0
    } while (loop_condition);

    if (counter > 1){ // If a valid date was given, output the earliest date
        printf("The earliest valid date is %d/%d/%d.\n", earliest_month, earliest_day, earliest_year);
    }
    else { // If no date was entered other than 0/0/0, run this
        printf("No dates entered\n");
    }
    return EXIT_SUCCESS;
}