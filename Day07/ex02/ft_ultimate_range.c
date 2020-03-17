/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:00:58 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/05 22:16:01 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*val;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	val = (int*)malloc(sizeof(*val) * (max - min));
	i = 0;
	while (min < max)
	{
		val[i] = min;
		i++;
		min++;
	}
	*range = val;
	return (i);
}
