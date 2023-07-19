#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for the calculator program.
 * @argc: the number of command line arguments.
 * @argv: array containing the program command line arguments.
 *
 * Return: 0 on success, or one of 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
    int a, b;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (!operation)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", operation(a, b));

    return (0);
}
