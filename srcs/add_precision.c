//
// Created by Prestayn Felipa on 12/8/20.
//

#include "ft_printf.h"

char	*add_precision_main(char *res, t_param *params)
{
	char *tmp;
	int bufflen;

	if (!params->precision)
		return (res);
	if (params->type == 's')
		res = add_precision_s(res, params->precision_val);
	else if (params->type == 'i' || params->type == 'd')
		res = add_precision_i(res, params->precision_val);
	else if (params->type == 'f' || params->type == 'F')
	{}
	else
	{
		bufflen = params->precision_val - ft_strlen(res);    // need to process negative numbers
		if (bufflen > 0)
		{
			tmp = res;
			res = ft_calloc(bufflen + ft_strlen(res) + 1, 1);
			res = ft_memset(res, '0', bufflen);
			res = ft_memcpy(res + bufflen, tmp, ft_strlen(res));
			free(tmp);
		}
	}
	return (res);
}