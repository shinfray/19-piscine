/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:55:21 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/12 14:38:43 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

int	ft_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alphanum(str[i]) == 1)
		{
			if (ft_is_lowercase(str[i]) == 1)
			{
				str[i] = str[i] -32;
			}
			while (ft_is_alphanum(str[i + 1]) == 1)
			{
				if (ft_is_uppercase(str[i + 1]) == 1)
					str[i + 1] = str[i + 1] + 32;
				i++;
			}
			i++;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "1saLUTt, co[mm42ent ,,, tu vatnquante+et+un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/
