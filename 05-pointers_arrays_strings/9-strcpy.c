#include "main.h"
/**
 **_strcpy - function that copies the string pointed to by src,
 *	including the terminating null byte (\0),to the buffer pointed to by dest
 *@dest:pointer to dest
 *@src:pointer to source
 *Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
	return (dest);
}
