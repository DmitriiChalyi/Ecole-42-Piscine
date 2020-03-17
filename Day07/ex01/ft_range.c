/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:56:55 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/05 22:15:03 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*val;
	int	k;

	if (min >= max)
		return (NULL);
	val = (int*)malloc(sizeof(*val) * (max - min));
	k = 0;
	while (min < max)
	{
		val[k] = min;
		k++;
		min++;
	}
	return (val);
}
