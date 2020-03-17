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
#include "ft_strncpy.c"
#include <stdlib.h>
#include <string.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "4kr8";
	char dest[] = "sghkj";
	//ft_strncpy(dest, src, 5);
	//printf("%s\n", dest);
	//char *src = "trtr";
	strncpy(dest, src, 5);
	printf("%s\n", dest);

	return (0);
}
