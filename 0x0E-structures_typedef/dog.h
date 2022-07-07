#ifndef DOG_FILE
#define DOG_FILE

/**
 * struct dog - the biodata of a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this data type stores a comprehensive info
 * about dogs. e.g their names, age, and owner's name.
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
#endif
