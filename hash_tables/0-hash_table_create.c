#include "hash_tables.h"

/**
 * hash_table_create - This function will create a hash table
 * @size: The size for the table
 *
 * Return: A pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == 0)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
		table->array[i++] = 0;
	return (table);
}
