/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:48:30 by tmatlena          #+#    #+#             */
/*   Updated: 2018/08/14 15:53:15 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				n_func(va_list ap, wchar_t *str, wchar_t **arg)
{
	int *g;

	g = va_arg(ap, void *);
	*g = wstr_len(str);
	if (!arg)
		exit(-1);
	free(*arg);
}
