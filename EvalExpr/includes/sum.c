/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 21:06:48 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:40:20 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "brackets.h"
#include "star.h"

int		ft_sum(char **val)
{
	int		arg1;
	int		arg2;
	char	s;

	arg1 = ft_star(val);
	while (**val)
	{
		while (**val == ' ')
			*val = *val + 1;
		s = **val;
		if (s != '+' && s != '-')
			return (arg1);
		*val = *val + 1;
		arg2 = ft_star(val);
		if (s == '+')
			arg1 = arg1 + arg2;
		else if (s == '-')
			arg1 = arg1 - arg2;
	}
	return (arg1);
}
