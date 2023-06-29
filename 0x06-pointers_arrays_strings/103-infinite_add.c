#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result, or 0 if it can't be done
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i, j;

    /* check if the buffer size is large enough for the result */
    if (size_r <= len1 || size_r <= len2 || size_r < len1 + len2)
        return (0);

    /* make sure the result is terminated properly */
    r[size_r] = '\0';

    /* start adding digits from right to left */
    for (i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0; --i, --j, --size_r)
    {
        int sum = (n1[i] - '0') + (n2[j] - '0') + carry;
        r[size_r - 1] = (sum % 10) + '0';
        carry = sum / 10;
    }

    /* if n1 has more digits than n2 */
    while (i >= 0)
    {
        int sum = (n1[i] - '0') + carry;
        r[size_r - 1] = (sum % 10) + '0';
        carry = sum / 10;
        --i;
        --size_r;
    }

    /* if n2 has more digits than n1 */
    while (j >= 0)
    {
        int sum = (n2[j] - '0') + carry;
        r[size_r - 1] = (sum % 10) + '0';
        carry = sum / 10;
        --j;
        --size_r;
    }

    /* if there's a carry from the last addition */
    if (carry > 0)
    {
        if (size_r <= 0)
            return (0); /* no space for the additional digit */
        r[size_r - 1] = carry + '0';
    }

    return (r + size_r - 1);
}
