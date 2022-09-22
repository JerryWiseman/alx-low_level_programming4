#include "main.h"

/**
**_strcat - function to concatenate two strings
*@dest: is the destination string
*@src: is the source string
*Return: returns pointer to destination string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;
	int src_len = 0;

	while (dest[i] != '\n')
	{
		dest_len++;
		i++;
	}
	while (src[i] != '\n')
	{
		src_len++;
		i++;
	}

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
