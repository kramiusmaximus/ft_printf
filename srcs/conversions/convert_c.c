//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *convert_c(va_list ap, t_param *params)
{
	char *res;

	res = ft_calloc(2, 1);
	res[0] = va_arg(ap, int);
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}