/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:11:58 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/11 16:24:23 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

/*
int	main(void)
{
	int	tab[3];
	int	size;
	int	i;

	size = 3;
	tab[0] = 25;
	tab[1] = 78;
	tab[2] = 65;
	i = 0;
	while (i < size)
	{
		printf("%d / ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d / ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
