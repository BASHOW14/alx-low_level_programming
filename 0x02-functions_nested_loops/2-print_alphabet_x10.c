#include "main.h"
/**
 * print_alphabet_x10 - prints english lowercase letters from a-z 10 times
 *Return: Returns 0 (success)
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	int j;

	j = 0

	i = 0;
	while (j < 9)
	{
		while (i < 26)
		{
			_putchar(c[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
