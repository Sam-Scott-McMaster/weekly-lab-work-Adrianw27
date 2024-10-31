/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

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