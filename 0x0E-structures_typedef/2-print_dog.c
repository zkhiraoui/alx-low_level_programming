#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog to print
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
    if (d)
    {
        printf("Name: ");
        d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
        printf("Age: %.6f\n", d->age);
        printf("Owner: ");
        d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
    }
}
