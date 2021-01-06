/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfelipa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:42:45 by pfelipa           #+#    #+#             */
/*   Updated: 2020/09/02 18:56:32 by pfelipa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

const char	*process_arg(t_param *params)
{
	char	*res;
	char	nc;
	int		out_len;

	nc = 0;
	initiate_params(params);
	parse(params);
	if (!(res = process_params(params)))
		return (NULL);
	if (!*res && params->type == 'c')
		nc++;
	out_len = ft_max(ft_max(params->width, nc), ft_strlen(res));
	put_str_pft(res, out_len);
	params->out += out_len;
	free(res);
	return (params->s);
}
