#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The variable to initialize
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
