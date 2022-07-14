/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:18:22 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/14 15:48:27 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (str[i])
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (0);
		while (str[j] && (str[i] != str[j]))
		{
			j++;
		}
		if (str[i] == str[j])
			return (0);
		i++;
		j = i + 1;
	}
	return (i);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	plinbase(char *base, char *str)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (*str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	answer;
	int	base_len;

	i = 0;
	sign = 1;
	base_len = ft_strlen(base);
	answer = 0;
	if (base_len <= 1)
		return (0);
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (plinbase(base, &str[i]) >= 0)
	{
		answer = answer * base_len + plinbase(base, &str[i]);
		i++;
	}
	return (answer * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "j";
	char	base[] = "ppj";

	printf("%d\n", ft_atoi_base(str, base));
}
*/
