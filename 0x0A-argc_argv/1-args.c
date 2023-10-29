#include <stdio.h>
#include "main.h"

/**
 * main - A function to pass number of argments
 * @argc: argument counter
 * @argv: arguments array
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
(void) argv; /*This it ingore the usage of @argv paramater*/
	printf("%d\n", argc - 1);

	return (0);
}
