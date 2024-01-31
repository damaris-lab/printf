#include "main.h"
#include <stdarg.h>
/**
 * _printf - outputs character on the console
 * @format: the first arguement supplied
 * Return:return the no of outputted character
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);
	while (*format)
	{
		if (*format == % && *(format + 1) != '\0')
		{
			format++;
			switch(*format)
			{
				case 'c'
				{
					char c = va_arg(ap, int);
					write(1, &c, 1);
					count++;
				}
				break;
				case 's'
				{
					char *str = va_arg(ap, char *);
					while (*str)
					{
						write(1, str, 1);
						count++;
						str++;
					}
				}
				break;
				case '%':
				{
					write(1, "%", 1);
					count++;
					break;
				}
				default:
				write(1, invalid, 1);
				return -1;
			}
			format++;
		}
		va_end(ap);
		return(count);
	}
}


					


