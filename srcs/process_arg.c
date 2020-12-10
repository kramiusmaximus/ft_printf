//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printf.h"

char    *process_arg(char *s, va_list ap)
{
    t_param   params;

    initiate_param(&params);
    s = parse(s, ap, &params);
    if (s)
		process_params(ap, &params);           // process error case
    return (s);
}