#include "main.h"
/**
 *print_rev - function that prints a string, in reverse, followed by a new line
 *@s: char string
 */
void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
