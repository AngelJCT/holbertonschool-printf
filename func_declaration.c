#include "main.h"
/**
 *get_string-print given string
 *@c: pointer to string
 */
int get_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 *get_string-find string length
 *@s: pointer to string
 */
int get_string(char *s)
{
	int len;

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
