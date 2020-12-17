//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printf.h"

const char    *parse(t_param *params)
{
    const char    *ptr;
    int     len = 0;

    while (ft_strchr("-+ 0'#", *params->s))
    {
        switch (*params->s)
        {
            case ('-'):
                params->flags = params->flags | F_MINUS;
                break;
            case ('+'):
                params->flags = params->flags | F_PLUS;
                break;
            case (' '):
                params->flags = params->flags | F_SPACE;
                break;
            case ('0'):
                params->flags = params->flags | F_ZERO;
                break;
            case ('\''):
                params->flags = params->flags | F_APOSTROPHE;
                break;
            case ('#'):
                params->flags = params->flags | F_HASH;
                break;
        }
		(params->s)++;
    }
    ptr = params->s;
    while (ft_isdigit(*params->s))
    {
        len++;
		(params->s)++;
    }
    if (len > 0)
        params->width = ft_atoi(ft_substr(ptr, 0, len));
    else if (*params->s == '*')
	{
		params->width = va_arg(params->ap, int);
		(params->s)++;
	}
    if (*params->s == '.')
    {
        params->flags = params->flags | F_PRECISION;
		(params->s)++;
        ptr = params->s;
        len = 0;
		while (ft_isdigit(*params->s))
		{
			len++;
			(params->s)++;
		}
		if (len > 0)
			params->precision_val = ft_atoi(ft_substr(ptr, 0, len));
		else if (*params->s == '*')
		{
			params->precision_val = va_arg(params->ap, int);
			params->s++;
		}
    }
    while (ft_strchr("hlLzjt", *params->s))
    {
		params->s++;	// bonus
    }
    if (ft_strchr("cspdiuxX%nfge", *params->s))
        params->type = *(params->s)++;
    return (params->s);
}
