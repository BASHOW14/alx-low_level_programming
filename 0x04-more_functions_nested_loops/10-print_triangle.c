#include "main.h"
/**
 * print_triangle - print a square on the terminal
 * @size:the size of a square
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n; j > i; j--)
			{
				putchar(32);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
		_putchar(10);
	}
}
