#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: The string to evaluate
 * @accept: The string containing the list of characters to match in s
 *
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, f = 0, flag;

	while (s[a] != '\0')
	{
		flag = 0;
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				f++;
				flag = 1;
			}
			b++;
		}
		if (flag == 0)
			return (f);
		a++;
	}
	return (0);
}
