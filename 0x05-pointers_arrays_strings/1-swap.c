#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first argument
 * @b: second argument
 */
void swap_int(int *a, int *b)
{
	int tmp;
	int tmp2;

	tmp = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp;


}
