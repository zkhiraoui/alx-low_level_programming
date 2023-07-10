#include "main.h"
#include <stdlib.h>

/**
 * wordcount - count words in a string
 * @str: string
 *
 * Return: number of words in the string
 */
int wordcount(char *str)
{
    int count = 0, i = 0;

    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
        i++;
    }

    return (count + 1);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j = 0, k = 0, wc, len;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    wc = wordcount(str);
    words = malloc((wc + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    while (str[i])
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            len = 0;
            while (str[i + len] != ' ' && str[i + len])
                len++;

            words[j] = malloc((len + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                while (j >= 0)
                    free(words[j--]);
                free(words);
                return (NULL);
            }

            k = 0;
            while (k < len)
            {
                words[j][k] = str[i + k];
                k++;
            }
            words[j][k] = '\0';
            j++;
        }
        i++;
    }

    words[j] = NULL;

    return (words);
}
