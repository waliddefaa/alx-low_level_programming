#ifndef header_dog
#define header_dog

/**
 * struct dog - the  dogs info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 */



struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
