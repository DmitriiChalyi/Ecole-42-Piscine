/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:18:55 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:39:51 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		number = 47483648;
	}
	if (number < 0)
	{
		number = number * (-1);
		ft_putchar('-');
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}

int			ft_atoi(char **str)
{
	int		minus;
	int		result;

	minus = 1;
	result = 0;
	while ((**str > 8 && **str < 14) || **str == 32)
		*str = *str + 1;
	if (**str == '-')
	{
		minus = -1;
		*str = *str + 1;
	}
	else if (**str == '+')
		*str = *str + 1;
	while (**str <= '9' && **str >= '0' && **str)
	{
		result = result * 10 + **str - '0';
		*str = *str + 1;
	}
	return (result * minus);
}
