#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate the string to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int s, q = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;

	aaa = malloc(sizeof(char) * (s + 1));

	if (aaa == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		aaa[q] = str[q];

	return (aaa);
}
