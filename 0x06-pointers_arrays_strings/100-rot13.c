#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    int i = 0, j;
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (str[i])
    {
        for (j = 0; alpha[j]; j++)
        {
            if (str[i] == alpha[j])
            {
                str[i] = rot[j];
                break;
            }
        }

        i++;
    }

    return (str);
}
