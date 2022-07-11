/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:02:50 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/11 16:00:56 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 74;
	b = 12;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d et b = %d.\nLa division donne %d.\n", a, b, div);
	printf("le reste est %d.\n", mod);
}
*/
