//
// Created by Prestayn Felipa on 12/8/20.
//
#include "ft_printft.h"

char *process_percent(t_param *params)
{
	char *res;

	res = malloc(sizeof(char) * 2); //     % + \0
	ft_strlcpy(res, "%", 2);
	res = add_precision(res, params);
	res = add_width(res, params);
	return (res);
}