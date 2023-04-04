#include "main.h"
/**
 * _strchr - function that locate character
 * @s: string  to search for
 * @c: character to be located
 * Return: char 0
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s ++[i]);
	}
	return (0);
}
