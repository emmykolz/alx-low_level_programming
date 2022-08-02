#ifndef DOG
#define DOG

/**
 * struct dog - new data type containg name, age , amd owner
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Description: describes the above lol
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
