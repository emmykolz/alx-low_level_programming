#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *dog - inits a variable of
 *@d: dog identification
 *@name: name of dog
 *@age: age of dog
 *@owner: owner's name
 */

struct dog *d(char *name, float age, char *owner)
{
  struct dog *d;
  
  d = malloc(sizeof(struct dog));
  if (d == NULL)
    return(NULL);
  d->name = name;
  d->age = age;
  d->owner = owner;
  return d;
}
