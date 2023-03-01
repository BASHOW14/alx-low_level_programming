#include<stdio.h>
#include<unistd.h>
/**
 * main - entry point for our program
 * Return: Returns 0 (success)
 */
int main(void)
{
	char *s;

	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, &s, 58);
	return (1);
}
