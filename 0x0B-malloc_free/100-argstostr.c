#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * 
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
    char *s;
    int i, j, k, len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* count the number of chars in each string */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            j++;
            len++;
        }
        len++;
    }
    len++;

    /* allocate memory for total number of chars */
    s = malloc(sizeof(char) * len);
    if (s == NULL)
        return (NULL);

    /* copy the strings */
    k = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            s[k] = av[i][j];
            j++;
            k++;
        }
        s[k] = '\n';
        k++;
    }
    s[k] = '\0';

    return (s);
}
