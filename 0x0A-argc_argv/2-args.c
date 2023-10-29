#include <stdio.h>
#include "main.h"

/**
 * main - A function to return agruments list
 * @argc: number of agruments
 * @argv: array  Arguments
 *
 * Return: Always 0 on Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
