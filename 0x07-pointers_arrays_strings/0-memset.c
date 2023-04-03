#include "main.h"

/**
 * _memset - this function fills the first byte
 * @s: Returns the memory area
 * @b: the char to be copied
 * @n: No. of times to copy b
 * Return: pointer to be returned to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;
		for (q = 0;  q <  n; q++)
		{
			s[q] = b;
		}
	return (s);
}
