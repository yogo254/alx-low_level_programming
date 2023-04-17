#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free memory allocated to a dog struct
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
