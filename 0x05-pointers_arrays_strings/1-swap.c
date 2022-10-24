#include "main.h"

/**
 * swap_int: swaps numbers a and b
 * a: first integer
 * b: second integer
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;

}
