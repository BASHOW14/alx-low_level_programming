#include "main.h"
/**
 *_islower - checks wether a character is lower
 * Return: Returns 1 (success) 0 (otherwise)
 *@c: the letter to check if its lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

