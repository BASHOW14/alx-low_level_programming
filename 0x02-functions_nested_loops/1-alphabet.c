#include "main.h"
/**
 * print_alphabet - prints english lowercase letters from a-z
 *Return: Returns 0 (success)
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
