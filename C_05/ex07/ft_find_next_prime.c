/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:01:06 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/15 13:51:42 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	unsigned int	nb_us;

	nb_us = nb;
	i = 2;
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while ((i * i) <= nb_us)
	{
		if ((nb_us % i) == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}	
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 30)
	{
		printf("Le nombre est : %d => %d\n", i, ft_find_next_prime(i));
		i++;
	}
}
*/
