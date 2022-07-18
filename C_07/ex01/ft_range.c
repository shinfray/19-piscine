/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:49:02 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/18 15:46:55 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	tab_size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab_size = max - min;
	tab = malloc(sizeof(*tab) * tab_size);
	if (!tab)
		return (0);
	while (min != max)
		tab[i++] = min++;
	return (tab);
}
