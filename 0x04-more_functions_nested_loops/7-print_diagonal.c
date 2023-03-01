#include "main.h"
/**
 * print_diagonal - prints n number of backslash at diagonal
 * @n: number of backslash to be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}

