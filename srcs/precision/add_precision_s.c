//
// Created by Prestayn Felipa on 12/10/20.
//

#include "ft_printf.h"

char *add_precision_s(char *res, int precision)
{
	if (!res)
		return (NULL);
	if (precision < ft_strlen(res))
		res[precision] = 0;
	return (res);
}