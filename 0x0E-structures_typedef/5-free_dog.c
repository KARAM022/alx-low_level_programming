#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - jsjjss
 * @d: kfkfgj
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
