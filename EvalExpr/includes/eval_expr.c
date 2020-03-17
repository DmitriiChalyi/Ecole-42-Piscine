/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:33:55 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:41:40 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"
#include "star.h"
#include "sum.h"
#include "functions.h"
#include "eval_expr.h"

int			eval_expr(char *val)
{
	return (ft_sum(&val));
}
