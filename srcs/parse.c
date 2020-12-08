//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printft.h"

char    *parse(char *s, va_list ap, t_param *params)
{
    char    *ptr;
    int     len = 0;

    while (ft_strchr("-+ 0'#", *s))
    {
        switch (*s)
        {
            case ('-'):
                params->minus = 1;
                break;
            case ('+'):
                params->plus = 1;
                break;
            case (' '):
                params->space = 1;
                break;
            case ('0'):
                params->zero = 1;
                break;
            case ('\''):
                params->apostrophe = 1;
                break;
            case ('#'):
                params->hash = 1;
                break;
        }
        s++;
    }
    ptr = s;
    while (ft_isdigit(*s))
    {
        len++;
        s++;
    }
    if (len > 0)
        params->width = ft_atoi(ft_substr(ptr, 0, len));
    if (*s == '.')
    {
        params->precision = 1;
        s++;
        ptr = s;
        len = 0;
        if (*s == '*')
		{
        	params->precision_val = va_arg(ap, int);
			s++;
        }
        else
        {
            while (ft_isdigit(*s))
            {
                len++;
                s++;
            }
            if (len > 0)
                params->precision_val = ft_atoi(ft_substr(ptr, 0, len));
        }
    }
    while (ft_strchr("hlLzjt", *s))
    {
        s++;	// bonus
    }
    if (ft_strchr("cspdiuxX%nfge", *s))
        params->type = *s++;
    return (s);
}
