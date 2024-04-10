#include "search_algos.h"


/* function that searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * @return: EXIT VALUE
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if(array == NULL)
		return -1;
	for (i = 0; i < (int)size; i++)
	{
		if(array == 



