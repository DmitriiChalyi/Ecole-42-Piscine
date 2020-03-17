/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:32:04 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/02 12:25:03 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr.c"
#include "ft_putchar.c"

void ft_putnbr(int nb);

int	main(void)
{
	int nb;

	nb = -25000000;
	ft_putnbr(nb);

	return (0);
}
