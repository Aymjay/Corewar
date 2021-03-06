/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_chrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadam <cadam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/09 14:07:23 by cadam             #+#    #+#             */
/*   Updated: 2015/10/09 14:07:25 by cadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_chrchr(char ***str)
{
	char	**tmp;
	int		i;

	tmp = *str;
	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(*str);
}
