/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:53:40 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/15 13:50:24 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nb_us;

	nb_us = nb;
	i = 5;
	if (nb < 2)
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	else if (((nb % 2) == 0) || ((nb % 3) == 0))
		return (0);
	else
	{
		while (i * i <= nb_us)
		{
			if ((nb_us % i) == 0)
				return (0);
			i = i + 2;
		}
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 2147483647;
//	while (i < 25)
//	{
		printf("%d\n", ft_is_prime(i));
//		i++;
//	}	
}
*/
