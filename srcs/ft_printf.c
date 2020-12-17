//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printf.h"

int     ft_printf(const char *s, ...)
{
	t_param	params;

	ft_bzero(&params, sizeof(params));
	params.s = s;
	params.out = 0;
    if (!s)
        return (0); // output error
    va_start(params.ap, s);
    while (*params.s)
    {
        if (*params.s == '%')
        {
        	params.s++;
            if (!(params.s = process_arg(&params))) // + 1 to skip the initial %
                return (1); // output error
        }
        else
		{
        	params.out++;
			ft_putchar_fd(*params.s++, 1);
		}
    }
    va_end(params.ap);
    return (params.out);
}