/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:23:09 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/02 12:54:09 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str <= '9' && *str >= '0' && *str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minus);
}
