#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers,followed by a new line
 *		followed by a new line
 *	Numbers must be separated by comma, followed by a space
 *	The numbers should be displayed in the same order as they are stored in the array
 *@a:int array
 *@n:numbers of elements of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
