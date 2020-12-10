//
// Created by Prestayn Felipa on 12/10/20.
//
#include "ft_printf.h"

char *add_precision_o(char *res, int precision)
{
	int bufflen;
	char *tmp;

	bufflen = precision - ft_strlen(res);    // need to process negative numbers
	if (bufflen > 0)
	{
		tmp = res;
		res = ft_calloc(bufflen + ft_strlen(res) + 1, 1); // protect failed allocation
		ft_memset(res, '0', bufflen);
		ft_memcpy(res + bufflen, tmp, ft_strlen(res));
		free(tmp);
	}
	return (res);
}