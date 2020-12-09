//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printft.h"

char	*print_main(va_list ap, t_param *params)
{
	char *res;

	switch (params->type)
	{
		case ('%'):  // just prints % without any flags
			res = process_percent(params);
			break ;
		case ('d'):
		case ('i'):
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
			break ;
		case ('o'):
			break ;
		case ('s'):
			break ;
		case ('c'):
			break ;
		case ('p'):
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