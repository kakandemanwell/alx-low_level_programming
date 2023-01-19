#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog variable from memory
 * @d: dog variable
 */

void free_dog(dog_t *d)
{
	free(d);
}
