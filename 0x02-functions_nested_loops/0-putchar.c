#include "stdio.h"

/**
 * main - print _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {95,111,85,84,67,104,65,114};
int count, sz;

sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
putchar(str[count]);
}
putchar('\n');
return (0);
}
