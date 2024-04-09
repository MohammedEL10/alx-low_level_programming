#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <stdlib.h>
/*
 * struct listint_s - singly linked list
 * @n: integer.
 * @index: of the node in the list
 * @next: pointer to the next node
 */
typedef struct listint_t
{
	int n;
	size_t index;
	struct listint_t *next;
}listint_t;
/*
 * struct skiplist_s - singly linked list with an express lane
 * @n: integer.
 * @index: index of the node in the list
 * @next: pointer to the next node
 * @express: pointer to the next node in the next lane
 */
typedef struct skiplist_t
{
	int n;
	size_t index;
	struct skiplist_t *next;
	struct skiplist_t *express;
}skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif
