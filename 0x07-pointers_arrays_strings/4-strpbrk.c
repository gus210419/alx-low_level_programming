#include "main.h"
/**
 * _strpbrk - string for any set of bytes
 * @s: string searched
 * @accept: bytes searched
 * Return: Always return 0
 */
char *_strpbrk(char *s, char *accept)
{
		int index;

		while (*s)
		{
			for (index = 0; accept[index]; index++)
			{
			if (*s == accept[index])
			return (s);
			}
		s++;
		}

	return ('\0');
}
