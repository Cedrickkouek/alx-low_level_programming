#ifndef DOGHEADER
#define DOGHEADER
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - this is a dog's structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
