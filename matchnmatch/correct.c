/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:06:24 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/08 19:56:58 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_zero(char *s1, char *s2, int j)
{
	while (s1[0] == '\0')
	{
		if (s2[j] == '\0')
			return (1);
		while (s2[j] == '*')
			j++;
		if (s2[j] != '\0')
			return (0);	
	}
	return(1);
}

int ft_check (char *s1, char *s2, int i, int j)
{
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j] && s1[i] != '\0')
		{
			i = i + 1;
			j = j + 1;
		}
		if (s1[i] != '\0' && s2[j] == '\0' && s2[j - 1] != '*')
			return (0);
		if (s1[i] == '\0' || (s2[j] == '\0' && (s2[j - 1] == '*')))
			return (1);
		while (s2[j] == '*')
			j++;
		while (s1[i] != '\0' && s1[i] != s2[j])
			i++;
		if (s2[j] != '\0' && s1[i] != s2[j])
			return (0);
	}
	return (1);
}

int	match(char *s1, char *s2)
{
	int	i;
	int j;
	int z;
	int c;

	j = 0;
	i = 0;
	c = 0;
	
	z = ft_zero(s1, s2, j);
	if (z == 0)
		return (0);

	c = ft_check(s1, s2, i, j);
	if (c == 0)
		return (0);
	return (1);
}

int	main	(int argc, char **argv)
{
	int a;
	(void)argc;
		a = match(argv[1], argv[2]) + '0';
		write (1, &a, 1);
	return (0);
}

