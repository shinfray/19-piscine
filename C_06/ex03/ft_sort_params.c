/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:33:18 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/16 23:15:26 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char **s1, char **s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

void	ft_sort(char **str, int count)
{
	int		i;
	int		j;
	char	**temp;

	i = 1;
	temp = NULL;
	while (i == (count - 2))
	{
		j = i + 1;
		if (ft_strcmp(str[i][0], str[j][0]) > 0)
		{
			temp = &str[i];
			str[i][0] = str[j][0];
			str[j][0] = **temp;
		}
		else
			i++;
	}
	
}


int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < (argc - 2))
	{
		ft_sort(argv[i][0], argc);
		i++;
	}
	i = 1;
	while (i < (argc - 1))
	{
		ft_putstr(&argv[i][0]);
			i++;
	}
}
