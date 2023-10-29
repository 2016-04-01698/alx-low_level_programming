#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @string: A string to be converted
 *
 * Return: an interger value from string
 */
int _atoi(char *string)
{
	int i, d, n, length, f, digit;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (string[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (string[i] == '-')
			++d;
		if (string[i] >= '0' && string[i] <= '9')
		{
			digit = string[i] - '0';
				if (d % 2)
					digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (string[i + 1] < '0' || string[i + 1] > '9')
				break;
			f = 0;
		}
	i++;
}
	if (f == 0)
	return (0);

	return (n);
}
/**
 * main - A fuction to take multiplication of two numbers
 * @argc: nunmber of arguments
 * @argv: arguments array
 *
 * Return: Always 0 on succes and 1 on failure
 */
int main(int argc, char *argv[])
{
	int numberOne, numberTwo, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error \n");
		return (1);
	}

	numberOne = _atoi(argv[1]);
	numberTwo = _atoi(argv[2]);
	result = numberOne * numberTwo;

	printf("%d\n", result);

	return (0);
}
