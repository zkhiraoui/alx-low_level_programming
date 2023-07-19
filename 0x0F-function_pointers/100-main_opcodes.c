#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of this function
 * @argc: the number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 if successful, or exit status of 1 if number of arguments is not
 * correct, or exit status of 2 if number of bytes is negative.
 */
int main(int argc, char *argv[])
{
    int n, i;
    unsigned char *p = (unsigned char *)main;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    n = atoi(argv[1]);

    if (n < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < n; i++)
    {
        printf("%02x", p[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return (0);
}
