/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:32:04 by vcamila           #+#    #+#             */
/*   Updated: 2020/02/29 21:39:35 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "ft_atoi.c"
#include <stdlib.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str);

int		main(void)
{
	int b;

	b = ft_atoi("     658999999999999999999556868");
	printf("%d\n", b);
	printf("%d\n", atoi("     658999999999999999999556868"));
	return (0);
}
