/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 21:05:37 by exam              #+#    #+#             */
/*   Updated: 2017/08/14 22:21:15 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		if (is_charset(str[i], charset) == 0
			&& str[i] != '\0')
		{
			while (is_charset(str[i], charset) == 0
					&& str[i] != '\0')
				i++;
			word++;
		}
	}
	return (word);
}

char	**fill_tab(char **tab, char *str, char *charset)
{
	int	word;
	int	j;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		if (is_charset(str[i], charset) == 0
			&& str[i] != '\0')
		{
			j = 0;
			while (is_charset(str[i], charset) == 0
					&& str[i] != '\0')
			{
				tab[word][j] = str[i];
				i++;
				j++;
			}
			tab[word++][j] = '\0';
		}
	}
	return (tab);
}

char	**make_tab(char **tab, int *word, char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char*) * count_words(str, charset) + 1);
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		if (is_charset(str[i], charset) == 0
			&& str[i] != '\0')
		{
			j = 0;
			while (is_charset(str[i], charset) == 0
					&& str[i] != '\0')
			{
				i++;
				j++;
			}
			tab[*word] = (char *)malloc(sizeof(char) * j + 1);
			(*word)++;
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;
	int		i;

	i = 0;
	word = 0;
	tab = 0;
	if (str[0] != '\0')
	{
		tab = make_tab(tab, &word, str, charset);
		tab = fill_tab(tab, str, charset);
		tab[word] = 0;
	}
	else
	{
		tab = (char**)malloc(sizeof(char*));
		tab[0] = 0;
	}
	return (tab);
}
