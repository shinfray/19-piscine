/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:36:53 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/11 16:29:34 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 56;
	b = 5;
	printf("a = %d et b = %d.\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, et mod = %d.\n", a, b);
}
*/
