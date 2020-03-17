/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 17:51:11 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/11 17:55:34 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_clear(t_list **begin_list)
{
	t_list	*cur;
	t_list	*n;

	cur = *begin_list;
	while (cur)
	{
		n = cur->next;
		free(cur);
		cur = n;
	}
	*begin_list = NULL;
}
