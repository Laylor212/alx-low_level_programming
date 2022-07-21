#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size) /*While for array*/
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
