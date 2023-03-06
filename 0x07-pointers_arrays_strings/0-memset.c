#include "main.h"
/**
 * _memset - fills first n byte of memory with constant byte
 * Return: Returns a pointer to the beginning of the array.
 * @s: a pointer to the first byte.
 * @b: the byte to be written
 * @n : the number of bytes to be written.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
