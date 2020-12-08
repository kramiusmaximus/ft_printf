//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printft.h"

char	*print(va_list ap, t_param *params)
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
	}
}