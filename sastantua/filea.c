/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filea.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:23:09 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/01 21:46:49 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_filea (char *str)
{
	int result;
	int minus;
	int start;

	start = 0;
	minus = 1;
	result = 0;
	while (*str == ' ' || (*str >='\r' && *str =='\t'))
		start++;   	
	while (*str =='\n' || *str =='\v')
		start++;
	if (*str == '-')
		minus = -1;
	if (*str >= '0'
	while (*str <= '9' && *str >= '0' && *str)
	{
		result = result * 10 + (*str - 'a');
		++str;
	}
	return (result * minus);	
}



