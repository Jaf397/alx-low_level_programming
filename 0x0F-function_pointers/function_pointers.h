#ifndef FUCTION_POINTERS_H
#define FUCTION_POINTERS_H
#include <stddef.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar();

#endif

