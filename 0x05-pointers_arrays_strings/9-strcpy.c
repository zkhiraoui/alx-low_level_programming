#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: pointer to the destination buffer where the content is to be copied
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* don't forget to append the null character at the end! */
    dest[i] = '\0';

    return dest;
}
