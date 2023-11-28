#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: This function does not return any value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	// check if the pointers are not NULL before assigning values
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
