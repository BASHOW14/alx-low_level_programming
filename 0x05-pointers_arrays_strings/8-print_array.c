#include<stdio.h>
#include "main.h"
/**
 * print_array - prints n array element
 * @a: array to be printed
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n <= 0)
	{
		printf("%s", "  ");
	}
	else
	{

		while (i < n)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
			i++;
		}

	}
}
