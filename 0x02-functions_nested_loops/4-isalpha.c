#include "main.h"
/**
 * _isalpha - checks if the argument is alphapet
 * Return: Returns if it's a letter 0 otherwise
 * @c: contains the number to be processed;
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
