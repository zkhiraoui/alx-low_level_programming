#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is to be found
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar('0' + lastDigit);
	return (lastDigit);
}
