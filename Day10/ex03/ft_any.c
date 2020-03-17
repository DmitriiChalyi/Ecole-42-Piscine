/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:22:32 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/09 17:32:01 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int k;

	k = 0;
	while (tab[k] != 0)
	{
		if (f(tab[k]) == 1)
			return (1);
		k = k + 1;
	}
	return (0);
}