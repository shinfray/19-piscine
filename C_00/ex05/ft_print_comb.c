/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:35:39 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/08 11:00:39 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	nb[3];

	nb[0] = '0';
	nb[1] = '1';
	nb[2] = '2';
	while (nb[0] <= '7')
	{
		while (nb[1] <= '8')
		{
			while (nb[2] <= '9')
			{
				print(nb[0], nb[1], nb[2]);
				nb[2]++;
			}
			nb[1]++;
			nb[2] = nb[1] + 1;
		}
		nb[0]++;
		nb[1] = nb[0] + 1;
		nb[2] = nb[1] + 1;
	}
}
