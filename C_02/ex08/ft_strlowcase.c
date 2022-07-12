/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:23:55 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/12 11:31:16 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "@ABCXYZ{`abcxyz{";

	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}
*/
