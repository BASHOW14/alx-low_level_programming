#include "main.h"
/**
 *_islower - checks wether a character is lower
 * Return: Returns 1 (success) 0 (otherwise)
 *@c: the letter to check if its lower case
 *@res - stores return an integer value of _putchar function
 */
int _islower(int c)
{
	int res;

	res = _putchar(c);
	if (res >= 97 && res <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

