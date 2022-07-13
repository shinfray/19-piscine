/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:50:28 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/13 22:12:42 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (str[i])
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (0);
		while (str[j] && (str[i] != str[j]))
		{
			j++;
		}
		if (str[i] == str[j])
			return (0);
		i++;
		j = i + 1;
	}
	return (i);
}

void	ft_recurs(unsigned int nbr_us, char *base, unsigned int base_len)
{
	unsigned char	c;

	if (nbr_us > (base_len - 1))
	{
		ft_recurs(nbr_us / base_len, base, base_len);
	}
	c = base[nbr_us % base_len];
	ft_putchar(c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_us;
	unsigned int	base_len;

	nbr_us = 0;
	base_len = ft_strlen(base);
	if (base_len > 1)
	{
		if (base_len >= 1)
		{
			if (nbr < 0)
			{
				ft_putchar('-');
				nbr_us = -nbr;
			}
			else
				nbr_us = nbr;
			ft_recurs(nbr_us, base, base_len);
		}
	}
	return ;
}

/*
int	main(void)
{
	ft_putnbr_base(-74, "0jd5lp1");
}
*/
