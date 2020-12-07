//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printft.h"

int     ft_printf(const char *s, ...)
{
    va_list ap;

    if (!s)
        return (1); // output error
    va_start(ap, s);
    while (*s)
    {
        if (*s == '%')
        {
            if (!(s = process_arg(s + 1, ap))) // + 1 to skip the initial %
                return (1); // output error
        }
        else
            s++;
    }
    va_end(ap);
    return (0);
}