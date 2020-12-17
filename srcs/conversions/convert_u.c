//
// Created by Prestayn Felipa on 12/10/20.
//

#include "ft_printf.h"

char *convert_u(t_param *params)
{
	char *res;

	res = ft_itoa_u(va_arg(params->ap, unsigned int));
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}