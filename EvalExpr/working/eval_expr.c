/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 17:33:55 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 20:23:15 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "eval_expr.h"

int				ft_bracket(char **val)
{
	int			k;

	while (**val == ' ')
		(*val)++;
	if (**val == '(')
	{
		(*val)++;
		k = ft_sum(val);
		if (**val == ')')
			(*val)++;
		return (k);
	}
	return (ft_atoi(val));
}

int				ft_star(char **val)
{
	int			arg1;
	int			arg2;
	char		s;

	arg1 = ft_bracket(val);
	while (**val)
	{
		while (**val == ' ')
			(*val)++;
		s = **val;
		if (s != '*' && s != '%' && s != '/')
			return (arg1);
		(*val)++;
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

int				ft_sum(char **val)
{
	int			arg1;
	int			arg2;
	char		s;

	arg1 = ft_star(val);
	while (**val)
	{
		while (**val == ' ')
			(*val)++;
		s = **val;
		if (s != '+' && s != '-')
			return (arg1);
		(*val)++;
		arg2 = ft_star(val);
		if (s == '+')
			arg1 = arg1 + arg2;
		else if (s == '-')
			arg1 -= arg2;
	}
	return (arg1);
}

int				eval_expr(char *val)
{
	return (ft_sum(&val));
}
