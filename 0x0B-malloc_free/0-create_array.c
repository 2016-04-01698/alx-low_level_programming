#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function to return array filled
 * @size: size of memory requested
 * @c: size of character to fill an aray
 *
 * Return: Array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
