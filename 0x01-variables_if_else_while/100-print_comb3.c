#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;

for (d = 1; d < 100; d++)
{
putchar((d / 5) + '1');
putchar((d % 5) + '1');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
