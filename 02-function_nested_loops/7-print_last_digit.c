#include "main.h"
/**
 *print_last_digit -function to print last digit
 *@n:last digt int
 *Return:last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit =  n % 10;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
