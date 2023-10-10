#ifndef _DOG_H_
#define _DOG_H_


/**
* init_dog - the new dog struct whose variable is to be initialized
*
* @d: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
	return (NULL);
		d->name = name;
		d->age = age;
		d->owner = owner;
}
