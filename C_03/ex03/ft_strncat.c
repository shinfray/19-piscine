/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:51:11 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/12 22:25:27 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>
//	#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[50] = "Geeks";
	char	dest[50] = "Forgeeks";
	unsigned int	nb;

	nb = 3;
	printf("Src : %s\n", src);
	printf("Dest : %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("Src : %s\n", src);
	printf("Dest : %s\n", dest);
}
*/
