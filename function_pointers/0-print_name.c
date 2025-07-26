#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a function pointer
 * @name: string for the name
 * @f: pointer to the function that will do the printing
 *
 * Description: This function takes a name and a pointer to another
 * function. It then calls the other function, passing the name
 * to it.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
