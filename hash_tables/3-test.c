#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	if (hash_table_s(ht, "hetairas", "hetairas_value_1") == 0)
		printf("Failed to add\n");
	else
		printf("added");

return (0);
}
