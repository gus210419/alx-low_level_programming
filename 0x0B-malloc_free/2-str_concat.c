#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	s = 0;
	q = 0;

	if (s1)
	{
		while (s < len1)
		{
			s3[q] = s1[q];
			q++;
		}
	}

	if (s2)
	{
		while (q < (len1 + len2))
		{
			s3[q] = s2[q];
			q++;
			s++;
		}
	}
	s3[q] = '\0';

	return (s3);
}
