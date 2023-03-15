#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 *
 * @size: size of array
 * @c: character to init the array with
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(sizeof(char) * size);

	if (size == 0 || !p)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
