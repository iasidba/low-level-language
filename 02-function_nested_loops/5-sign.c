#include "main.h"
/**
 *print_sign -function to print sign of a num
 *@n:num to checked its sign
 *Return:1 if +ve, 0 if zero
 * and -1 if -ve.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
