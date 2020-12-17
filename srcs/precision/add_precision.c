//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printf.h"

char	*add_precision_main(char *res, t_param *params)
{
	if (!(params->flags & F_PRECISION))
		return (res);
	if (params->type == 's')
		res = add_precision_s(res, params->precision_val);
	else if (params->type == 'i' || params->type == 'd' || params->type == 'x' || params->type == 'X' || params->type == 'u')
		res = add_precision_i(res, params->precision_val);
	else if (params->type == 'f' || params->type == 'F')
	{}
	else if (params->type == '%')
		res = add_precision_o(res, params->precision_val);
	return (res);
}