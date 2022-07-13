/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:33 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/13 11:28:38 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;
	unsigned int	j;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	j = destlen;
	if (size == 0 || destlen >= size)
		return (srclen + size);
	while (src[i] && i < (size - destlen - 1))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (destlen + srclen);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[100] = "blablabla";
	char	dest[100] = "refrefrefref";

	printf("%lu\n", strlcat(dest, src, 11));
	printf("%s\n", dest);
}
*/
