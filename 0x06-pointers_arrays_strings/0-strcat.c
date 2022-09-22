#include "main.h"

/**
 *strcat -concatenates the stringpointrd b @src, including the terminal
 *null byte, to the end of the string pointed by @dest
 *Return: 0
 */

char *_strcat(char *dest,const char *src);
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
