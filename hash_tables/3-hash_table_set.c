#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value), node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[i], ht->array[i] = node;
	return (1);
}