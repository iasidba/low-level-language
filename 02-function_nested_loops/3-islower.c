#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *@c: the character to be checked
 *
 *Return:1 if lowercase, else 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
