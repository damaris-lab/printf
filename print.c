#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output aacording to format
 * @format: the first arguement 
 * @c:character to display on the output
 * Returns:returns number of character printed
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int count = 0;

	va_start(ptr, format);
	while (*format)
	{
		if (*format != '\0')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1' format, 1)
					count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(ptr, ch);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ptr, char *);
				int str_len = 0;
				while (str[st_len] != '\0')
					s_len++;
				write(1, s, s_len);
				count += s_len;
			}
			format++;
		}
	}
	va_end(ptr);
	return(count);
}
