#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include "stdarg.h"
# include "libft/libft.h"

int     ft_printf(const char * restrict format, ...);
int     type_check(const char * restrict *format, va_list arg_list);
# endif