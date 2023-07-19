#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to compare values
 * Return: the index of the first match, -1 if size <= 0 or no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}
