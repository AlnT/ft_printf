# include "printf.h"

void    number_manage(const char restrict format, va_list arg_list)
{
    
}


int     type_check(const char * restrict *format, va_list arg_list)
{
    if (**format == 'd')
        ft_putnbr(va_arg(arg_list, int));
    
    ++*format;
    return (0);
}