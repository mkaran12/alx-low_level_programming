C - Structures, typedef TASKS 0. Poppy Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
Prototype: void print_dog(struct dog *d);
Prototype: dog_t *new_dog(char *name, float age, char *owner);
Prototype: void free_dog(dog_t *d);