#include "main.h"
/**
 * _strcat - concatenate two given string
 * Return:Returns a pointer forthe new array
 * @dest:the destination array
 * @src:the source array
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = s[j];
	}

	dest[j + 1] = '\0';
	return (dest);
}




