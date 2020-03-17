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
#include "ft_strncmp.c"
#include <stdlib.h>
#include <string.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	unsigned int k = 6;
	char s1[] = "5000000";
	char s2[] = "8000009";
	//ft_strncpy(dest, "abcd", 5);
	printf("%d\n", ft_strncmp(s1, s2, k));
	printf("%d\n", strncmp(s1, s2, k));
	return (0);
}
