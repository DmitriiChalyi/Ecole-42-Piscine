/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:16:51 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/07 15:14:47 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int		main(int argc, char *argv[])
{
	int i;
    char letter;
    
	i = 0;
	if (argc == 2)
	{
	    while (argv[1][i])
	    {
		    letter = argv [1][i];
		    if (argv [1][i] >= 'A' && argv[1][i] <= 'Y')
		        letter = letter + 1;
		    if(argv[1][i] >='a' && argv[1][i] <= 'y')
		        letter = letter + 1;
		       if (argv[1][i] == 'z' || argv[1][i] == 'Z')
		        letter = letter - 25;
		    write (1, &letter, 1);
		    i++;
	    }
	    write (1, "\n", 1);
	    return (0);
	}
}