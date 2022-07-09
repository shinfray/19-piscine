/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exoexamen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:20:49 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/09 10:55:49 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const	char *str)
{
	int	i;
	char	c;
	
	c = 0;
	i = 0;

	while (str[i] != '\0')
		{
			c = str[i];
			write(1, &c, 1);
			i++;
		}
}

int	main(void)
{
	ft_putstr("Ceci est un test !!!");
}
