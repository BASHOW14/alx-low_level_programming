#include "main.h"
/**
 * main - starting point of the program
 * Return: Returns 0 (success);
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
