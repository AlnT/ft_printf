#include "printf.h"

int		ft_printf(const char * restrict format, ...)
{
	va_list	arg_list;
	int		i;
	char	*str;
	int		d;

	i = -1;
	va_start(arg_list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (type_check(&format, arg_list))
				exit(1);
		}
		else
		{
			ft_putchar(*format);
			format++;
		}
	}
	va_end(arg_list);
	return (0);
}