#include "main.h"
/**
 * _strcat - concatenate two given string
 * Return:Returns a pointer forthe new array
 * @dest:the destination array
 * @src:the source array
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	i = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}




