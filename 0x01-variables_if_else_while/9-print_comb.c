#include<stdio.h>
/**
 * main - entry point of the program
 * Return: Returns 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
