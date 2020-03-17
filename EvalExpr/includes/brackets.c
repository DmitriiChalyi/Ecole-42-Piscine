/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 21:06:28 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:39:12 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "sum.h"

int		ft_bracket(char **val)
{
	int k;

	while (**val == ' ')
		*val = *val + 1;
	if (**val == '(')
	{
		*val = *val + 1;
		k = ft_sum(val);
		if (**val == ')')
			*val = *val + 1;
		return (k);
	}
	return (ft_atoi(val));
}
