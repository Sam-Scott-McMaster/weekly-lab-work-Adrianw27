/* Adrian Winter, 400495595, Oct. 31, 2024
*
* Contains the digits function
*/

#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

/* digits
*
* Parameters: A number, a pointer to max, and a pointer to min
* Loops through the digits of n, sets the max and min pointers if the digit is a max or min,
* then finds sum of digits.
* Returns: sum of digits
*/
int digits(int n, int* max, int* min){
    int digit;
    int sum = 0;
    *max = 0;
    *min = 9;

    for(int i = n; i > 0; i /= 10){
        digit = i % 10;
        sum += digit;
        if(*max<digit){
            *max = digit;
        }
        else if(*min>digit){
            *min = digit;
        }
    }
    return sum;
}