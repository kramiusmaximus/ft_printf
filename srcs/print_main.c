//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printf.h"

int	print_main(va_list ap, t_param *params)
{
	char *res;

	switch (params->type)
	{
		case ('%'):  // just prints % without any flags
			res = process_percent(params);
			break ;
		case ('d'):
		case ('i'):
			res = process_i(ap, params);
			break ;
		case ('u'):
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
		case ('X'):
			res = add_precision_x(ap, params);
			break ;
		case ('o'):
			break ;
		case ('s'):
			res = process_s(ap, params);
			break ;
		case ('c'):
			res = process_c(ap, params);
			break ;
		case ('p'):
			res = process_p(ap, params);
			break ;
		case ('a'):
		case ('A'):
			break ;
		case ('n'):
			break ;
		default:
			return (1);
	}
	if (!res)
		return (1);
	ft_putstr_fd(res, 1);
	return (0);
}