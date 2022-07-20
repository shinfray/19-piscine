/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:38:03 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/20 16:48:15 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tab_size;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_size = max - min;
	tab = malloc(sizeof(*tab) * tab_size);
	if (!tab)
		return (-1);
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (tab_size);
}

/*
#include <stdio.h>

int	main(void)
{
	int	min = 5;
	int	max = 15;
	int	i = 0;
	int	size;
	int	*ptr;

	size = ft_ultimate_range(&ptr, min, max);
	while (i < size)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
}
*/
