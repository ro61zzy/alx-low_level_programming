#include <stdio.h>
#include "main.h"
/**
  * print_numbers - prints numbers 0 to 9, with a new line
  * Return: void
  */
void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}