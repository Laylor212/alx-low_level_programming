#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elemnts
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index first element cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int flag;

if (array && size && cmp)
{
if (size <= 0)
{
flag = -1;
}
else
{
while (i < size)
{
																					    		if ((*cmp)(array[i]) != 0)
																							{
																							flag = i; 
																							break;
}
else
{
flag = -1;
}
i++;
}
}
}

return (flag);
}
