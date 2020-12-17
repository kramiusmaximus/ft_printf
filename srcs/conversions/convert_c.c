//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *convert_c(t_param *params)
{
	char *res;

	res = ft_calloc(2, 1);
	res[0] = va_arg(params->ap, int);
	if (!res[0])
		params->out++;
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}