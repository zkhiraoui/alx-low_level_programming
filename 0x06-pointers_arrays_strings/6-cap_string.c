#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
    int i = 0;

    /* Convert the first character of the sentence to uppercase */
    if (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }

    /* Convert the first character of each word to uppercase */
    while (str[i])
    {
        if (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n' || str[i-1] == ',' || 
            str[i-1] == ';' || str[i-1] == '.' || str[i-1] == '!' || str[i-1] == '?' || 
            str[i-1] == '"' || str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{' || 
            str[i-1] == '}')
        {
            str[i] = toupper(str[i]);
        }

        i++;
    }

    return str;
}
