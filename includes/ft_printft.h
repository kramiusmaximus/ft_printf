//
// Created by Prestayn Felipa on 12/7/20.
//

#ifndef FT_PRINTF_FT_PRINTFT_H
#define FT_PRINTF_FT_PRINTFT_H
#include "libft.h"
#include <stdarg.h>
typedef struct  s_param
{
    char        minus;
    char        plus;
    char        space;
    char        zero;
    char        apostrophe;
    char        hash;
    char        width;
    char        precision;
    int         precision_val;
    char        *length;
    char        type;
}               t_param;

int     ft_printf(const char *s, ...);
char    *process_arg(char *s, va_list ap);
int     initiate_param(t_param *obj);



#endif
