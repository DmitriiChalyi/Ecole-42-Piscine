/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:56:30 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/09 16:16:58 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int k;
	int *val;

	val = (int*)malloc(sizeof(*val) * (length));
	k = 0;
	while (k < length)
	{
		val[k] = f(tab[k]);
		k++;
	}
	return (val);
}
