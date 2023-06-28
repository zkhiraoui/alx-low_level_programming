#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int started = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;

        if (s[i] >= '0' && s[i] <= '9')
        {
            result *= 10;
            result += sign * (s[i] - '0');
            started = 1;
        }
        else if (started)
            break;

        i++;
    }

    return result;
}
