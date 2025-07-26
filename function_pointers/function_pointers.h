#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to the function to be used for printing
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
