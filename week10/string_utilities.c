/* Adrian Winter, 400495595, Nov. 19, 2024
*
* String utilities functions to convert letters to upper and lowercase, find first and last non-whitespace characters, and trim whitespaces.
*/

#include <stdio.h>
#include <stdlib.h>
#include "string_utilities.h"

/* to upper
*
* Parameters: pointer to string
* Loops through an array converts lowercase characters to upper
*/
void to_upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

/* to lower pure
*
* Parameters: pointer to string
* Loops through an array converts uppercase characters to lower
* Returns: Copy of converted string as a pointer
*/
char *to_lower_pure(const char *str) {
    int length = strlen(str);
    char *lower_str = malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + ('a' - 'A');
        } else {
            lower_str[i] = str[i];
        }
    }
    lower_str[length] = '\0'; // Null-terminate the new string

    return lower_str;
}

/* find content
*
* Parameters: string pointer, double pointers to first and last character
* Loops through a string and finds first and last non-whitespace characters
*/
void find_content(const char *str, char **first, char **last) {
    *first = NULL;
    *last = NULL;

    if (!str || *str == '\0') { // Handle empty or NULL strings
        *first = *last = str;
        return;
    }

    const char *start = str;
    const char *end = str + strlen(str) - 1;

    // Move `start` to the first non-whitespace character
    while (*start && (*start == ' ' || *start == '\t' || *start == '\n')) {
        start++;
    }

    // If no content, all characters are whitespace
    if (*start == '\0') {
        *first = *last = start;
        return;
    }

    // Move `end` to the last non-whitespace character
    while (end > start && (*end == ' ' || *end == '\t' || *end == '\n')) {
        end--;
    }

    *first = start;
    *last = end;
}

/* trim
*
* Parameters: pointer to string
* Uses the above function to trim leading and trailing whitespace from a string
*/
void trim(char *str) {
    if (!str || *str == '\0') return; // Handle empty or NULL strings

    char *first, *last;
    find_content(str, &first, &last);

    if (first == last && *first == '\0') {
        // All whitespace: empty the string
        str[0] = '\0';
        return;
    }

    int length = last - first + 1; // Calculate the new length of the trimmed string
    for (int i = 0; i < length; i++) {
        str[i] = first[i];
    }

    str[length] = '\0'; // Null-terminate the string
}