//
// Created by Prestayn Felipa on 12/7/20.
//
#include "ft_printf.h"

int     initiate_param(t_param *obj)
{
    if (!obj)
        return (1); // null pointer arg error
    obj->minus = 0;
    obj->plus = 0;
    obj->space = 0;
    obj->zero = 0;
    obj->apostrophe = 0;
    obj->hash = 0;
    obj->width = 0;
    obj->precision = 0;
    obj->precision_val = 0;
    /*if (obj->length)
    	free(obj->length);*/
    obj->length = NULL;
    obj->type = 0;
    return (0);
}