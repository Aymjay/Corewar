/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_conv_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadam <cadam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 20:09:15 by cadam             #+#    #+#             */
/*   Updated: 2015/05/11 20:09:18 by cadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pf_conv_n(va_list *args, char c, int *n, int ret)
{
	if (c == 'n')
	{
		n = va_arg(*args, int *);
		if (n == NULL)
			return (0);
		*n = ret;
		return (1);
	}
	return (0);
}
