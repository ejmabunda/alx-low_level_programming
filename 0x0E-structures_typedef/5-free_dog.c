#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: the dog to free up
 *
 * Return: this function does return any value
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
