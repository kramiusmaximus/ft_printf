//
// Created by Prestayn Felipa on 12/10/20.
//

#include "ft_printf.h"

char *process_i(va_list ap, t_param *params)
{
	char *res;

	res = ft_itoa(va_arg(ap, int));
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}