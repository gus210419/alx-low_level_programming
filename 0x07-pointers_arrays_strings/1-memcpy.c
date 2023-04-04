#include "main.h"

/**
 * _memcpy  - function that copies memory area
 * @n: functions
 * @src: Bytes from memory area
 * @dest: memory area
 * Return: Returns a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int i = n;

	for (; q < i; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
