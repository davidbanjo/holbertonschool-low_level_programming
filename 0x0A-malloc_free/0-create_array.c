#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *@size: size of the array
 *@c: characters in the array
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = (char*) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
	if (s == NULL)
		return (NULL);
}