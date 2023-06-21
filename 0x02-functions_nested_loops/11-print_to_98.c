#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the integer to start printing from
 *
 * Description: If n is greater than 98, print in decreasing order
 * If n is less than 98, print in increasing order
 * If n is equal to 98, just print 98
 *
 */
void print_to_98(int n)
{
    if (n > 98)
    {
        for (; n > 98; n--)
        {
            printf("%d, ", n);
        }
    }
    else if (n < 98)
    {
        for (; n < 98; n++)
        {
            printf("%d, ", n);
        }
    }
    
    printf("98\n");
}
