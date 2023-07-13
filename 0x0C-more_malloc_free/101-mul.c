#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - check if the string contains only digits.
 * @s: input string.
 * Return: 1 if string contains only digits, 0 otherwise.
 */
int _isdigit(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
            return (0);
    }
    return (1);
}

/**
 * print_error - print error message and exit with status 98.
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - program to multiply two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 on success, otherwise exit with status 98.
 */
int main(int argc, char *argv[])
{
    long num1, num2, product;

    if (argc != 3)
        print_error();

    if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
        print_error();

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    product = num1 * num2;

    printf("%ld\n", product);
    return (0);
}
