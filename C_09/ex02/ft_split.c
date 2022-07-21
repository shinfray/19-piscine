/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:52:37 by shinfray          #+#    #+#             */
/*   Updated: 2022/07/21 23:03:39 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(charset[j] && (c != charset[j]))
		j++;
	if (c == charset[j])
		return (1);
	else
		return (0);
}

int	word_counter(char *str, char *charset)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		if (check_charset(str[i], charset) == 0)
		{
			wc++;
			while (str[i] && check_charset(str[i], charset) == 0)
				i++;
		}
	}
	return (wc);
}

int	ft_strlen(char *str,char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_charset(str[i], charset) != 1)
		i++;
	return (i);
}

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	j = 0;
	k = 0;
	count = 0;
	tab = malloc(sizeof(*tab) * (word_counter(str, charset) + 1));
	while (str[i] && count < word_counter(str, charset))
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		printf("Malloc'd %d bytes\n", ft_strlen(&str[i], charset) + 1);
		tab[j] = malloc(sizeof(*str) * (ft_strlen(&str[i], charset) + 1));
		while (str[i] && check_charset(str[i], charset) == 0)
		{
			printf("%c | i:%d | j:%d | k:%d\n", str[i], i, j, k);
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		printf("%s\n\n", tab[j]);
		// printf("%s?\n", tab[j]);
		count++;
		j++;
		k = 0;
	}
	tab[j] = 0;
	printf("%d\n", *tab[0]);
	return (tab);
}

int	main(void)
{
	char	str[] = "";
	char	charset[] = "!)?";
	int		i;
	char	**tab;

	i = 0;
	printf("%d\n", word_counter(str, charset));
	tab = ft_split(str, charset);
	while (tab[i] != 0)
	{
		printf("%p: %s\n", tab[i], tab[i]);
		i++;
	}
	printf("%d\n", *tab[0]);
}
