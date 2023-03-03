#include "main.h"
/**
 * reverse_array - reverse an element of the array
 * @n:number of element in the array
 * @a:a pointer to the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int j;

	j = n - 1;

	i = 0;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
