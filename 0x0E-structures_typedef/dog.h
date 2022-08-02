#ifndef DOG
#define DOG

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores different datatypes of a dog info
 * @name: holds the name of the dog
 * @age: holds the age of the dog
 * @owner: holds the owner of the dog
 *
 * Description: struct called dog that stores its name, its age and owner
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
