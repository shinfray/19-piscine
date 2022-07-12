/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:59:03 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/12 21:46:17 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[50] = "Geeks";
	char	dest[50] = "Forgeeks";

	printf("Src : %s\n", src);
	printf("Dest : %s\n", dest);
	ft_strcat(dest, src);
	printf("Src : %s\n", src);
	printf("Dest : %s\n", dest);
}
*/
