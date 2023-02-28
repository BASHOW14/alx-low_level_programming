#include "main.h"
/**
 * _isdigit - checks if a character is digit
 * Return:Returns 1 (success) 0 otherwise
 * @c:a character to check.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
