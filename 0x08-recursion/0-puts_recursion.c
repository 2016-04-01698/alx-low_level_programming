#include "main.h"
/**
 * _puts_recursion - A pointer function to return a string
 * @s : a value to hold a string
 *
 * return: Always 0 on Success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
