#include <stdlib.h>
#include "dog.h"


/**
* init_dog - Initializes a struct dog variable.
* @d: Pointer to a struct dog.
* @name: Pointer to a character string for the dog's name.
* @age: Float value for the dog's age.
* @owner: Pointer to a character string for the dog's owner.
*
* Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

