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
#include "ft_strcat.c"
#include <stdlib.h>
#include <string.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *dest, char *src);

int		main(void)
{

	char *dest = "5245";
	char *src = "538882";
	//ft_strncpy(dest, "abcd", 5);
	//printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(src, dest));

	return (0);
}
