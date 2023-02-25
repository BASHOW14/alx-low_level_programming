#include<stdio.h>
/**
 * main - entry point of the program
 * Return: Returns 0 (success)
 */
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		for (int j = i + 1; j <= 57; j++)
		{
			for (int k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
}

