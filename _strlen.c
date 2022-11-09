#include "main.h"
/**
 *_strlen-find string length
 *@s: pointer to string
 *Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
