/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exoexamen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:20:49 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/08 22:40:28 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(void)
{
	ft_putstr("a;sfkjas;dfj");
}