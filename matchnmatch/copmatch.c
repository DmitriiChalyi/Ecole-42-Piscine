/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:06:24 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/07 23:29:18 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int skip(char *s1, char *s2, int i)
{
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return(i);
}

int match(char *s1, char *s2)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		i = skip(s1, s2, i);
		j = i;
		if (s1[i] == '\0' || (s2[j] == '\0' && (s2[j - 1] == '*')))
			return (1);
		if (s1[i] == '\0' && s2[j] != '\0' && s2[j - 1] != '*')
			return (0);
		while (s2[j] == '*')
			j++;
		while (s1[i] != s2[j] && s1[i] != '\0')
			i++;
		if (s1[i] != s2[j] && s2[j] != '\0')
			return(0);
	}
	if (s2[j] !='\0')
		return(0);
	return(1);
}

int main (int argc, char **argv)
{
	int a;
	(void)argc;
		a = match(argv[1], argv[2]) + '0';
		write (1, &a, 1);
	return (0);
}





/*if (s2[j] =='\0' && s1[i] =='\0')
	    if (*s1 != *s2)
	        return (0);
			    if (*s1 == '\0' && *s2 != '\0')
				        return (0);
						    if((*s1 != '\0') && (*s2 != '\0')
									        return (0);

*/
