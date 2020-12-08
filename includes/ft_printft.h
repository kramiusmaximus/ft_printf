//
// Created by Prestayn Felipa on 12/7/20.
//

#ifndef FT_PRINTF_FT_PRINTFT_H
#define FT_PRINTF_FT_PRINTFT_H
#define MAX(a, b) a >= b ? a : b
#include "libft.h"
#include <stdarg.h>
typedef struct  s_param
{
    char		minus;
    char		plus;
    char		space;
    char		zero;
    char		apostrophe;
    char		hash;
    int			width;
    char		precision;
    int			precision_val;
    char		*length;
    char		type;
}				t_param;

int     ft_printf(const char *s, ...);
char    *process_arg(char *s, va_list ap);
int     initiate_param(t_param *obj);
char    *parse(char *s, va_list ap, t_param *params);
char 	*print(va_list ap, t_param *params);
char	*process_percent(t_param *params);



#endif
