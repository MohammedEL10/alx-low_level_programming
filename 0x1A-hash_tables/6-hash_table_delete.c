/**
 * File: 6-hash_table_delete.c
 * author : Mohammed EL - HATHOUT
 */
#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_delete : deletes a hash table
 * @ht: delete a pointer of hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
