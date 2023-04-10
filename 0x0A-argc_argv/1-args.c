#include <stdio.h>

#include "main.h"

/**
 * main - The number of arguments passed to the program print
 * @argc: No of arguments
 * @argv: array of arguments
 * Return: Return Always 0 (Success)
 */

int main(int argc, char *argv[])

{

(void) argv;

	printf("%d\n", argc - 1);

	return (0);

}
