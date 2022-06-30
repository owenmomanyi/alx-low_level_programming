#include<stdio.h>

/**
*malloc_checked - function that allocates memory using malloc
*@b: sizeof int
*Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void c;
	
	c = malloc(b);
	if (c== NULL)
		exit(98);
	else
		return (c);
}
