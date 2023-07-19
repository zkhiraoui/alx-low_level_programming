#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: function to use on array
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
