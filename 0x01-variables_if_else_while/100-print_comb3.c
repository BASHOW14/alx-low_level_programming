#include<stdio.h>
/**
 * main - entry point of the program
 * Return: Returns 0 (success)
 */
int main(void)
{
	int i;

	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
