/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 21:07:05 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:40:07 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "brackets.h"

int		ft_star(char **val)
{
	int		arg1;
	int		arg2;
	char	s;

	arg1 = ft_bracket(val);
	while (**val)
	{
		while (**val == ' ')
			*val = *val + 1;
		s = **val;
		if (s != '*' && s != '%' && s != '/')
			return (arg1);
		*val = *val + 1;
		arg2 = ft_bracket(val);
		if (s == '*')
			arg1 = arg1 * arg2;
		else if (s == '%')
			arg1 = arg1 % arg2;
		else if (s == '/')
			arg1 = arg1 / arg2;
	}
	return (arg1);
}
