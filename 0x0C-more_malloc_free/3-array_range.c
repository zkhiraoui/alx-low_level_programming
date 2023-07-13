#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First integer in the array
 * @max: Last integer in the array
 *
 * Return: Pointer to the newly created array (success) or NULL if min > max or
 * if malloc fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, len;

    if (min > max)
        return (NULL);

    len = max - min + 1;

    arr = malloc(len * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        arr[i] = min + i;

    return (arr);
}

