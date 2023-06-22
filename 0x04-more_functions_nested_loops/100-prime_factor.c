#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: void
 */
void largest_prime_factor(void)
{
    unsigned long num = 612852475143;
    unsigned long divisor = 2;

    while (divisor <= sqrt(num))
    {
        if (num % divisor == 0)
            num /= divisor;
        else
            divisor++;
    }
    printf("%lu\n", num);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    largest_prime_factor();
    return (0);
}
