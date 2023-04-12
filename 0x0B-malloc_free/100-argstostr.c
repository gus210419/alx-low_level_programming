#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, q, s = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (q = 0; av[i][q]; q++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (q = 0; av[i][q]; q++)
	{
		str[s] = av[i][q];
		s++;
	}
	if (str[s] == '\0')
	{
		str[s++] = '\n';
	}
	}
	return (str);
}
