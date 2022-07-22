/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:10:24 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/22 11:43:26 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_calcul_total_len(char **strs, char *sep, int size)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	if (size > 0)
		total_len -= ft_strlen(sep);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(*tab) * ft_calcul_total_len(strs, sep, size) + 1);
	if (!tab)
		return (0);
	while (j < size)
	{
		while (strs[j][k])
			tab[i++] = strs[j][k++];
		k = 0;
		while (j < size - 1 && sep[k])
			tab[i++] = sep[k++];
		k = 0;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int		size;
	char	sep[] = "*****";
	char	*result;
	char	**strs;

	size = 5;
	strs = malloc(sizeof(*strs) * size);
	strs[0] = "Hello";
	strs[1] = "you";
	strs[2] = "and everyone!";
	strs[3] = "abcd";
	strs[4] = "efgh";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(strs);
	free(result);
}
*/
