//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *convert_p(t_param *params)
{
	char *res;

	res = ft_itoa_p(va_arg(params->ap, long));
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}