#include "main.h"
/**
 * print_square - print a square on the terminal
 * @size:the size of a square
 */
void print_square(int size)
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
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}

			_putchar(10);
		}

		_putchar(10);
	}
}
