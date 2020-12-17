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
	int		neg;

	if (params->type == 'c')
		len = 1;
	else
		len = ft_strlen(res);
	bufflen = ABS(params->width) - len;
	if (bufflen < 1)
		return (res);
	tmp = res;
	res = ft_calloc(ABS(params->width) + 1, 1);
	c = ' ';
	if ((params->flags & F_MINUS) || params->width < 0)
	{
		len = *tmp ? len : 0;
		ft_memcpy(res, tmp, len); // potential for error
		ft_memset(res + len, c, bufflen);
	}
	else
	{
		if ((params->flags & F_ZERO) && (!(params->flags & F_PRECISION) || params->precision_val < 0))
			c = '0';
		neg = *tmp == '-' && c == '0' ? 1 : 0;
		if (neg)
			res[0] = '-';
		ft_memset(res + neg, c, bufflen);
		ft_memcpy(res + bufflen + neg, tmp + neg, len); // potential for error
	}
	return (res);
}