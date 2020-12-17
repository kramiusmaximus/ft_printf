//
// Created by Mark Artyukh on 09/12/2020.
//

#include "ft_printf.h"

char *convert_s(t_param *params)
{
	char *res;
	char *s;

	if ((s = va_arg(params->ap, char *)))
		res = ft_strdup(s);
	else
		res = ft_strdup("(null)");
	res = add_precision_main(res, params);
	res = add_width(res, params);
	return (res);
}