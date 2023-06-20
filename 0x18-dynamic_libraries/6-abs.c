#include "main.h"

/**
 * _abs - compute absolute value of digit
 * @c: number to be computed
 * Return: absolute value of num or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
