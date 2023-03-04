#include "main.h"
/**
 * print_line - print line on the screen.
 * @n:the length of a line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int l;

		l = 1;

		while (l <= n)
		{
			_putchar(95);
			l++;
		}
		_putchar(10);
	}
}
