/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:20:45 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/12 14:27:41 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main ()
{
	write (1, "Hell\n", 5);
}
af1
int main (int ac, char *av[])
{
	int i;
	i = 0;
	
	if (av < 2) 
	{
		write (1, '\n', 1);
	}	
	else 
	{
		while (av[1][i])
		{
			write(1, av[1][i++], 1);
		}
		write (1, '\n', 1);
	}
	return (0);
}

afa

int main (int ac, char *av[])
	int i;
	if (av != 2)
	{	
		write (1, 'z\n', 2)
		return (0);
	} 
	else  
	{
		while (av[1][i])
		{
			if(av[1][i] == 'z')
			{
				write (1, 'z', 1);
				break;
			}
			i += 1;
		}	
		write (1, '\n', 1);
		return (0);
	}

str ypc
char *ft_str(char *s1, char *s2)
{
	while (*s1++ = *s2++)
		;
	return (s1);
}

len
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_sw (int *a, int *b)
{
	int tmp;
	tmp = a*;
	a* = b*;
	b* = tmp;
}

revpr

int main (int ac, char *av[])
{
	int i;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			i = i+1;
		}
		while (i)
		{
			write (1, &av[1][--i],1);
		}
		write (1, "\n", 1);
	}
	return(0);
}

fw.c
int main(int ac, char *av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1]='\n'||*av[1]='\v'||*av[1]='\r'||*av[1]='\f'||*av[1]=' '))
			++av[1];
		while (*av[1] != 0 && (*av[1]='\n'||*av[1]='\v'||*av[1]='\r'||*av[1]='\f'||*av[1]=' '))
			write(1, av[1]++, 1);
	}
	write(1,"\n" ,1);
	return (0);
}

rot

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1)
}

void rotone (char *s)
{
	while (*s)
	{
		if (*s>= 'A' && *s<= 'Y')||(*s>='a' && *s<='y')
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else 
			ft_putchar(*s);
		++s;
	}
}

int main (int ac, char *av[])
{
	if (ac == 2)
		rotone (av[1])
	ft_putchar('\n');
	return (0);
}

int main (int ac, *char av[])

int i;
if (ac != 2)
	{
	write (1, 'a\n', 2);
	return (0);
	}


int ft_at(char *str)
{
	int minus;
	int result;
	minus = 1;
	result = 0;
	while ((*str >= 8) && (*str <= 14) || (*str = 32))
			*str++;
	if (*str == '-')
	{
		minus = -1;
		*str++;
	}
	if(*str == '+')
		*str++;
	while (*str >= '0' && *str <= '9' && *str)
	{	
		result = (result*10 + *str - '0');
		*str++;
	}
	return (result*minus);
}












