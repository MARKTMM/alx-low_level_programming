#ifndef MARKTMM
#define MARKTMM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Member two
 * @owner: Member Three
 *
 * Description:-l description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
