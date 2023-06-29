#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", b[i + j] & 0xff);
            else
                printf("  ");

            if (j % 2)
                putchar(' ');
        }

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                char c = b[i + j];

                if (c < ' ' || c > '~') /* if not printable */
                    c = '.';

                putchar(c);
            }
        }

        putchar('\n');
    }
}
