#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup -  function
* @str:string
* Return: pointer
*/

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(str));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
