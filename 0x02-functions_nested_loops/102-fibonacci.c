#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	printf("%ld, %ld", j, k);
	for (i = 3; i <= 50; i++)
	{
		next = j + k;
		printf(", %ld", next);
		j = k;
		k = next;
	}
	printf("\n");

	return (0);
}
