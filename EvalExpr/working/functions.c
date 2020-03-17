/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:18:55 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 20:24:20 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		nb = 47483648;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int			ft_atoi(char **str)
{
	int		minus;
	int		result;

	minus = 1;
	result = 0;
	while ((**str > 8 && **str < 14) || **str == 32)
		(*str)++;
	if (**str == '-')
	{
		minus = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
	while (**str <= '9' && **str >= '0' && **str)
	{
		result = result * 10 + **str - '0';
		(*str)++;
	}
	return (result * minus);
}
