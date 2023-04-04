#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals
 * @a: matrix of integers
 * @size: matrix size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, index;

	sum1 = 0;
	sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 = sum1 + a[index * size + index];
	}

	for (index = size - 1; index >= 0; index--)
	{
		sum2 += a[index * size + (size - index - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
