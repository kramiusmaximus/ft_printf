//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *process_p(va_list ap, t_param *params)
{
	char *res;

	res = ft_itoa_base(va_arg(ap, long), "0123456789ABCDEF");
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}