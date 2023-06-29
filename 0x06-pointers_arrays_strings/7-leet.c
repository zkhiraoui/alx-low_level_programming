#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
    int i = 0, j;
    char leet[11] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
    char num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

    while (str[i])
    {
        for (j = 0; j <= 10; j++)
        {
            if (str[i] == leet[j])
                str[i] = num[j];
        }

        i++;
    }

    return (str);
}
