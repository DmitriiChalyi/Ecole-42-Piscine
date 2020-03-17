/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:56:27 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/03 23:19:45 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *l;

	l = str;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	str++;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 32;
		if (*str >= 'a' && *str <= 'z')
		{
			if ((*(str - 1) >= 123) && (*(str - 1) <= 127))
				*str = *str - 32;
			else if ((*(str - 1) >= 32) && (*(str - 1) <= 48))
				*str = *str - 32;
			else if ((*(str - 1) >= 8) && (*(str - 1) <= 14))
				*str = *str - 32;
			else if ((*(str - 1) >= 58) && (*(str - 1) <= 64))
				*str = *str - 32;
		}
		str++;
	}
	return (l);
}
