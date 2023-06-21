#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line.
 * 
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int i, j, next, sum;

    i = 0;
    j = 1;
    sum = 0;

    for (unsigned long int k = 0; k < 32; k++)
    {
        next = i + j;
        i = j;
        j = next;
        if (next % 2 == 0)
        {
            sum += next;
        }
    }

    printf("%lu\n", sum);

    return (0);
}
