/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 21:45:58 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/11 21:49:58 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef	struct		s_list
{
		struct s_list	*next;
			void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#endif

#include <stdio.h>

t_list *ft_list_push_params(int ac, char **av);


int main(int argc,char **argv)
{
	t_list *list;
	list = ft_list_push_params(argc, argv);

	while (list)
	{
		printf("%s\n",list->data);
		list = list->next;
	}
}
