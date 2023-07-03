#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to modify
 * @to: the pointer to copy
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}
