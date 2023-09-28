#include "main.h"

/**
 * factoriel - returns the factoriel of a number
 * @n: number to return the factoriel from
 *
 * Return: factoriel of n
 */
int factoriel(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factoriel(n - 1));
}
