#ifndef _main_h_
#define _main_h_

/**
 * dog - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure definition of a dog
 * @name: character string.
 * @age: integer
 * @owner: character string
 *
 * Description: struct called "dog" that stores its name, its age and
 *the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
