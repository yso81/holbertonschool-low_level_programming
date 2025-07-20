#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog variable
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name to assign to the dog.
 * @age: The age to assign to the dog.
 * @owner: The owner's name to assign to the dog.
 *
 * Description: This function takes a pointer to a struct dog
 *              and initializes its members with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
