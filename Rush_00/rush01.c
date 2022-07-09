/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:13:40 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/09 15:46:39 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_fline(int x)
{
	int	i;

	i = 0;
	ft_putchar('/');
	x = x - 2;
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 0)
		ft_putchar(92);
	ft_putchar('\n');
}

void	ft_print_lline(int x)
{
	int	i;

	x = x - 2;
	ft_putchar(92);
	i = 0;
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 0)
		ft_putchar('/');
	ft_putchar('\n');
}

void	ft_print_mline(int x, int y)
{
	int	i;

	y = y - 2;
	x = x - 2;
	while (y > 0)
	{
		i = 0;
		ft_putchar('*');
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		if (x >= 0)
			ft_putchar('*');
		ft_putchar('\n');
		y--;
	}
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	ft_print_fline(x);
	ft_print_mline(x, y);
	if (y > 1)
		ft_print_lline(x);
	return (0);
}
