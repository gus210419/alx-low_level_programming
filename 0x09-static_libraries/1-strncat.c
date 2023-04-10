#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int q;
	int j;


	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[q] = src[j];
	q++;
	j++;
	}
	dest[q] = '\0';
	return (dest);
}
