#include "main.h"
/**
 *_printf-implementation of printf function
 *@format: pointer to arguments
 *Return: arguments from each format specifiers
 *
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format && format[count])
		count++;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					get_char(va_arg(ptr, int));
					break;
				case 's':
					get_string(va_arg(ptr, char *));
					break;
				case '%':
					write(1, &format[i], 1);
					break;
				case ' ': case '\0':
					return (-1);
				default:
					i++;
					continue;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ptr);
	return(count);
}
