#include "main.h"

/**
  * print_line - draws a line using _
  * @n: number of times printed
  * Return: void
  */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
