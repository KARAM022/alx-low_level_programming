#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - khkhhkhkhk
 * @d: khkhhkhkhk
 * @name: khkhhkhkhk
 * @age: khkhhkhkhk
 * @owner: khkhhkhkhk
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
