/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:16:51 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/07 16:52:47 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
	    write (1, &c, 1);
}

void ft_putstr (char *str)
{
	 int i;
		    
	 i = 0;
	 while (str[i] != '\0')
	 {
		 ft_putchar(str[i]);
		 i++;
	 }
}

int main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	if (argc == 3)
	 {
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_putstr(argv[1]);
	 }
	
	else
	{
		ft_putstr("toto\n");
	}
		ft_putchar('\n');
		return 0;
}
