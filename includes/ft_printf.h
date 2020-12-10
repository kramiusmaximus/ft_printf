//
// Created by Prestayn Felipa on 12/7/20.
//

#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H
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
int 	process_params(va_list ap, t_param *params);

char	*convert_percent(t_param *params);
char	*convert_s(va_list ap, t_param *params);
char	*convert_c(va_list ap, t_param *params);
char	*convert_p(va_list ap, t_param *params);
char	*convert_i(va_list ap, t_param *params);
char	*convert_x(va_list ap, t_param *params);
char	*convert_xx(va_list ap, t_param *params);
char	*convert_u(va_list ap, t_param *params);

char	*add_precision_main(char *res, t_param *params);
char	*add_precision_s(char *res, int precision);
char 	*add_precision_i(char *res, int precision);
char	*add_precision_o(char *res, int precision);

char	*add_width(char *res, t_param *params);
char	*ft_itoa_x(unsigned int n);
char	*ft_itoa_xx(unsigned int n);
char	*ft_itoa_u(unsigned int i);
char	*ft_itoa_p(long n);







#endif
