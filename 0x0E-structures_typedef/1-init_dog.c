#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog *init_dog(char *name, float age, char *owner)
{
	struct dog *d;
	
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
	return d;
}
