#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates all the memory associated with a struct dog
 * @d: pointer to the memory
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
