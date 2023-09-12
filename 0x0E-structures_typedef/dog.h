#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents basic information about a dog
 * @name: string with dog's name
 * @age: a floating-point number with dog's age
 * @owner: string with owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - creates a typedef for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
