/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:12:31 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/11 12:49:13 by shinfray         ###   ########.fr       */
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

/*
int	main(void)
{
	int	a;
	int	b;

	a = -785;
	b = 14;
	printf("a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d et b = %d\n", a, b);
}
*/
