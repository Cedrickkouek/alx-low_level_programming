#include "dog.h"
/**
 * init_dog - this function initialize a dog structure
 * @d: the dog's structure
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
