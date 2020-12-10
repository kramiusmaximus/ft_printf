//
// Created by Prestayn Felipa on 12/9/20.
//

#include "ft_printf.h"

char *add_width(char *res, t_param *params)
{
	char	*tmp;
	int		len;
	int		bufflen;
	char	c;

	len = ft_strlen(res);
	bufflen = params->width - len;
	if (bufflen < 1)
		return (res);
	tmp = res;
	res = ft_calloc(params->width + 1, 1);
	c = ' ';
	if (params->minus)
	{
		ft_memcpy(res, tmp, len); // potential for error
		ft_memset(res + len, c, bufflen);
	}
	else
	{
		if (params->zero)
			c = '0';
		ft_memset(res, c, bufflen);
		ft_memcpy(res + bufflen, tmp, len); // potential for error
	}
	return (res);
}