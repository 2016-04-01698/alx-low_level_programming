#include "main.h"
/**
 * _print_rev_recursion - A function to return a reversed string
 * @s: Pass paremeter to hold a value
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
