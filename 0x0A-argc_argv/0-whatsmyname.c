#include <stdio.h>
#include "main.h"

/**
 * main - A main fuction to print name of prgram
 * @argc: number of agruments
 * @argv: array of arguments
 *
 * Return: Always 0 on Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
