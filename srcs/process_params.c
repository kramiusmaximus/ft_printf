//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printf.h"



int process_params(t_param *params)
{
	char *res;

	switch (params->type)
	{
		case ('%'):
			res = convert_percent(params);
			break ;
		case ('d'):
		case ('i'):
			res = convert_i(params);
			break ;
		case ('u'):
			res = convert_u(params);
			break ;
		case ('x'):
			res = convert_x(params);
			break;
		case ('X'):
			res = convert_xx(params);
			break ;
		case ('s'):
			res = convert_s(params);
			break ;
		case ('c'):
			res = convert_c(params);
			break ;
		case ('p'):
			res = convert_p(params);
			break ;
		default:
			return (1);
	}
	if (!res)
		return (1);
	params->out += ft_strlen(res);
	ft_putstr_fd(res, 1);
	return (0);
}