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

for (d = 1; d < 90; d++)
{
putchar((d / 10) + '1');
putchar((d % 10) + '1');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
