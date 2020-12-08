//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printft.h"

char    *process_arg(char *s, va_list ap)
{
    t_param   params;

    initiate_param(&params);
    s = parse(s, ap, &params);   // process error case
    s = print(ap, &params);           // process error case
    return (s);
}