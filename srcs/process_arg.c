//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printf.h"

const char    *process_arg(t_param *params)
{
    initiate_param(params);
    params->s = parse(params);
    if (params->s)
        process_params(params);           // process error case
    return (params->s);
}