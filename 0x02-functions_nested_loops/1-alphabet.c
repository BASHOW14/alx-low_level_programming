#include "main.h"
/**
 * main - Starting point of our program
 *Return: Returns 0 (success)
 */
int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 27)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
