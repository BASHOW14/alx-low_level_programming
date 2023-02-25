#include<stdio.h>
/**
 * main-entry point of the program.
 *
 * Return: Returns 0 (success)
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar(\n);
	return (0);
}
