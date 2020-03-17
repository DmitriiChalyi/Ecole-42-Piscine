/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:20:00 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/05 15:54:23 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*str;

	k = 0;
	while (src[k] != '\0')
		k++;
	str = (char*)malloc(sizeof(*str) * (k + 1));
	i = 0;
	while (i < k)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
