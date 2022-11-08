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
/**
 *_itoa-convert integers to string
 *@num: numbers
 *@str: pointer to string
 *@base: numbers base
 */
char* _itoa(int num, char *str, int base)
{
	int i = 0, rem;
	bool neg = false;
	/*A zero is same "0" string in all base*/
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	/*negative numbers are only handled if base is 10 otherwise considered unsigned number*/
	if (num <0 && base == 10)
	{
		neg = true;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem - 10) + 'A' ; rem + '0';
		num = num / base;
	}
	/*Append negative sign for negative numbers*/
	if (neg)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	return (str);
}
