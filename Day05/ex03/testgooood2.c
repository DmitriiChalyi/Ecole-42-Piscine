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
#include "ft_strcpy.c"
#include <stdlib.h>
#include <string.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "0";
	char dest[] = "0";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
