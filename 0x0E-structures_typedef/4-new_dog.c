#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog;
    newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
        return (NULL);

    newDog->name = strdup(name);
    if (newDog->name == NULL)
    {
        free(newDog);
        return (NULL);
    }

    newDog->age = age;

    newDog->owner = strdup(owner);
    if (newDog->owner == NULL)
    {
        free(newDog->name);
        free(newDog);
        return (NULL);
    }

    return (newDog);
}
