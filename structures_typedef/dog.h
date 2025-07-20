#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure that defines the properties of a dog.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a floating-point number.
 * @owner: Pointer to a character string for the owner's name.
 *
 * Description: This structure is used to store information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
