#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Declare all your variables at the start of the block */
    int cents, coins = 0;
    int values[] = {25, 10, 5, 2, 1};
    size_t i = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    while (cents > 0 && i < 5)
    {
        while (cents >= values[i])
        {
            cents -= values[i];
            coins++;
        }
        i++;
    }

    printf("%d\n", coins);

    return (0);
}

