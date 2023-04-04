#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: search string
 * @accept: measured prefix
 * Return: Always bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
			bytes++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
