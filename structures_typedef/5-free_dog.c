#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: pointer to the dog_t structure to be freed
 *
 * Description: This function takes a pointer to a dog_t structure
 * and deallocates all memory associated with it, including the
 * memory for the name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
