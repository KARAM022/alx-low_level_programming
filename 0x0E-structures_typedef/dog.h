#ifndef DOG_H
#define DOG_H

/**
 * struct dog - jjh
 * @name: kfkf
 * @age: kfkfkf
 * @owner: jhjhj
 * 
 * Description: jgjgjg
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
