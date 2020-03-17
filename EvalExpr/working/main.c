/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:29:24 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 20:24:04 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "eval_expr.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(eval_expr(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
