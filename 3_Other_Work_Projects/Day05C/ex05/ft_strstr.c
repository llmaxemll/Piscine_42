/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:40:20 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/19 22:03:15 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int len;

	len = 0;
	i = 0;
	k = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
