#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *r = needle;


		while (*j == *r && *r != '\0')
		{
			j++;
			r++;
		}


		if (*r == '\0')
			return (haystack);
	}


	return (0);
}
