/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:38:12 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/16 19:47:34 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>
//	#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "\200";
	char	s2[] = "\0";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d", strncmp(s1, s2, 2));
}
*/
