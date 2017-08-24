/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:14:36 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 15:59:13 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_inferior(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i = i + 1;
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	i = 0;
	if (tab[0] == 0)
		return ;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (is_inferior(tab[i], tab[j]) == 1)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
