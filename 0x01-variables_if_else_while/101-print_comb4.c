#include<stdio.h>
/**
 * main - entry point of the program
 * Return: Returns 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
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

