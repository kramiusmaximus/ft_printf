//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *process_s(va_list ap, t_param *params)
{
	char *res;

	res = ft_strdup(va_arg(ap, char *)); //
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}