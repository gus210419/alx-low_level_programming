#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y to be returned
 * @x: raise value
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	int x = '0';

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
