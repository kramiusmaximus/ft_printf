//
// Created by Prestayn Felipa on 12/10/20.
//

#include "ft_printf.h"

char 	*add_precision_i(char *res, int precision)
{
	int len;
	char *tmp;
	char neg;
	char c;

	// when precision flag is included,'0' spaces turn to ' ' for the zero flag
	len = ft_strlen(res);
	if ((neg = *res == '-' ? 1 : 0))
		len--;
	if (precision > len)
	{
		tmp = res;
		res = ft_calloc(precision + neg + 1, 1);
		if (neg)
			res[0] = '-';
		ft_memset(res + neg, '0', precision - len);
		ft_memcpy(res + precision + neg - len, tmp + neg, len);
	}
	return (res);
}
