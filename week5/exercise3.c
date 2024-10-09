/* Adrian Winter, 400495595, Oct. 8
 *
 * A simple program that uses a do loop to get dates from the user
 * and terminates and prints the earliest date when 0/0/0 is entered.
 * This program also uses switch statements to validate dates and print output.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int earliest_day, earliest_month, earliest_year,
        current_day, current_month, current_year;
    int counter = 0;
    char* month;
    bool loop_condition;

    printf("End with input 0/0/0\n");

    do {
        // Prompt user input
        printf("Enter a date (mm/dd/yyyy):");
        scanf("%d /%d /%d", &current_month, &current_day, &current_year);

        switch(current_month){ // Date validity check
            case 2: // If the month is February
                if (current_day <= 28 && current_day > 0){ // Make sure there is 28 days or less
                    // If it is the first entry, or the earliest date entered
                    if (counter == 0 || (current_year < earliest_year) ||
                        (current_year == earliest_year && current_month < earliest_month) ||
                        (current_year == earliest_year && current_month == earliest_month && current_day < earliest_day)) {
                        // Then the entered date is set as the new earliest date
                        earliest_day = current_day;
                        earliest_month = current_month;
                        earliest_year = current_year;
                    }
                }
                else { // Otherwise reject the date
                    printf("Date Rejected\n");
                }
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (current_day <= 31 && current_day > 0){ // Make sure there is 31 days or less
                    // If it is the first entry, or the earliest date entered
                    if (counter == 0 || (current_year < earliest_year) ||
                        (current_year == earliest_year && current_month < earliest_month) ||
                        (current_year == earliest_year && current_month == earliest_month && current_day < earliest_day)) {
                        // Then the entered date is set as the new earliest date
                        earliest_day = current_day;
                        earliest_month = current_month;
                        earliest_year = current_year;
                    }
                }
                else { // Otherwise reject the date
                    printf("Date Rejected\n");
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (current_day <= 30 && current_day > 0){ // Make sure there is 30 days or less
                    // If it is the first entry, or the earliest date entered
                    if (counter == 0 || (current_year < earliest_year) ||
                        (current_year == earliest_year && current_month < earliest_month) ||
                        (current_year == earliest_year && current_month == earliest_month && current_day < earliest_day)) {
                        // Then the entered date is set as the new earliest date
                        earliest_day = current_day;
                        earliest_month = current_month;
                        earliest_year = current_year;
                    }
                }
                else { // Otherwise reject the date
                    printf("Date Rejected\n");
                }
                break;
            default: // If it is not a valid month, reject the date
                if (!(current_day == 0 && current_month == 0 && current_year == 0)){
                    printf("Date Rejected\n");
                }
                break;
        }
        counter++;
        loop_condition = !(current_day == 0 && current_month == 0 && current_year == 0); // End the loop if the input is 0/0/0
    } while (loop_condition);

    if (counter > 1) { // If a valid date was given, output the earliest date
        // Using the earliest month value, use a switch to convert month to a string
        switch (earliest_month) {
            case 1:
                month = "January";
                break;
            case 2:
                month = "February";
                break;
            case 3:
                month = "March";
                break;
            case 4:
                month = "April";
                break;
            case 5:
                month = "May";
                break;
            case 6:
                month = "June";
                break;
            case 7:
                month = "July";
                break;
            case 8:
                month = "August";
                break;
            case 9:
                month = "September";
                break;
            case 10:
                month = "October";
                break;
            case 11:
                month = "November";
                break;
            default:
                month = "December";
                break;
        }
        printf("The earliest valid date is %d %s, %d.\n", earliest_day, month, earliest_year);
    }
    else { // If no date was entered other than 0/0/0, run this
        printf("No dates entered\n");
    }
    return EXIT_SUCCESS;
}