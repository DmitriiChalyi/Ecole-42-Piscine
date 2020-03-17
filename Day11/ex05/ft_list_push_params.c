/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:33:46 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/11 17:24:21 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		t;
	t_list	*temp;

	if (argc <= 0)
		return (NULL);
	t = 0;
	temp = NULL;
	while (t < argc)
	{
		list = ft_create_elem(argv[t]);
		list->next = temp;
		temp = list;
		++t;
	}
	return (list);
}
