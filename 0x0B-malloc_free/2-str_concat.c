#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*  str_concat-snmsad
* @s1:dsa
* @s2:Zxf
* Return:adad
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned long i = 0;
	unsigned long j = 0;

	s = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		return ("");
	}

	while (i <  sizeof(s1))
	{
		s[i] = s1[i];
		i++;
	}

	if (s2 == NULL)
	{
		/*s[i] = "";*/
		return (s);
	}

	while (j < sizeof(s2))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
