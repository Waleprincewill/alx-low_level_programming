#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array-function creates an array of
* chars and initializes it with a specific char
* @size: size of the array
* @c: specific chaar to initialize array with
* Return:array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
