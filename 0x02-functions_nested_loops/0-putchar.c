#include "main.h"
#include <stdio.h>
/*
 * main - Entry point
 * Description: prints out putchar followed be a new line
 * return : always (0) success
 *
 */

int main(void)

{
char ch[8] = "_putchar";
int i;
for (i = 0; i < 8 ; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return (0);
}
