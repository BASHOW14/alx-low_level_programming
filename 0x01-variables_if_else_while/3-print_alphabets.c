#include<stdio.h>
/**
 * main - entry pont of our program
 * Return: Returns 0 (success)
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}

