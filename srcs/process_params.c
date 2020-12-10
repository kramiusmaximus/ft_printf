//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printf.h"

int	process_params(va_list ap, t_param *params)
{
	char *res;

	switch (params->type)
	{
		case ('%'):  // just prints % without any flags
			res = convert_percent(params);
			break ;
		case ('d'):
		case ('i'):
			res = convert_i(ap, params);
			break ;
		case ('u'):
			res = convert_u(ap, params);
			break ;
		case ('f'):
		case ('F'):
			break ;
		case ('e'):
		case ('E'):
			break ;
		case ('g'):
		case ('G'):
			break ;
		case ('x'):
			res = convert_x(ap, params);
			break;
		case ('X'):
			res = convert_xx(ap, params);
			break ;
		case ('s'):
			res = convert_s(ap, params);
			break ;
		case ('c'):
			res = convert_c(ap, params);
			break ;
		case ('p'):
			res = convert_p(ap, params);
			break ;
		default:
			return (1);
	}
	if (!res)
		return (1);
	ft_putstr_fd(res, 1);
	return (0);
}