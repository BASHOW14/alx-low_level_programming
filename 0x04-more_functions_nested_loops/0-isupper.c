#include "main.h"
/**
 *_isupper - checks if a given character is upper
 *Return:Returns 1 if true and 0 otherwise
 *@c:a character to be checked.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
