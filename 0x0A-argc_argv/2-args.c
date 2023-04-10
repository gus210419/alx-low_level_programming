#include <stdio.h>

#include "main.h"

/**
 * main -All arguments it receives Prints
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Return Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int q;


	for (q = 0; q < argc; q++)

	{
		printf("%s\n", argv[q]);
	}

	return (0);
}
