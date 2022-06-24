#include "main.h"

/**
  * _strcat - concatenates string pointed to by @src,
  * plus the terminating null byte,
  * to the end of the string pointed to by @dest
  * @dest: pointer to string to be concatenated upon
  * @src: the source string to be appended to @dtest
  * Return: a pointer to the destination string @dtest
  */

char *_strcat(char *dest, char *src)
{
int count = 0, count2 = 0;
while (*(dest + count) != '\0')
{
count++;
}
while (count2 >= 0)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}
