/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:11:58 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/11 12:54:06 by shinfray         ###   ########.fr       */
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
	int	j;

	i = 0;
	j = 0;
	while (i <= (size / 2))
	{
		ft_swap(&tab[j], &tab[size - 1]);
		size--;
		i++;
		j++;
	}
}

/*
int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	size = 5;
	tab[0] = 25;
	tab[1] = 78;
	tab[2] = 65;
	tab[3] = 12;
	tab[4] = 38;
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
