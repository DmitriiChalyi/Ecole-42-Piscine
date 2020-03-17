/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:50:04 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/01 16:20:40 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_printH(int n) 
{
	int i = 1;
	ft_putchar('A');
	if (n > 1)
	{
		while (i < n - 1)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void ft_printL (int n)
{
	int i = 1;
	ft_putchar('B');
	while (i < n - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (n > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void ft_printU(int n)
{
	int i = 1;
	ft_putchar('C');
	while (i < n - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (n > 1)
		ft_putchar('A');
}

void rush (int n, int m)
{
	int i = 1;
	if (n == 0 || m == 0)
		return;
	ft_printH(n);
	if (m > 1)
	{
		while (i < m - 1)
		{
			ft_printL(n);
			i++;
		}
		ft_printU(n);
	}
	ft_putchar('\n');
}

