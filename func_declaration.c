#include "main.h"
/**
 *get_char-print given string
 *@c: pointer to string
 *Return: character
 */
int get_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 *get_string-find string length
 *@s: pointer to string
 *Return: string length
 */
int get_string(char *s)
{
	int len;

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
