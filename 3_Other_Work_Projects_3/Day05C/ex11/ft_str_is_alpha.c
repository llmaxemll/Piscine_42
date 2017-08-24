/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <adhondt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:14:46 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/16 10:10:53 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z') ||
		(str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		else
			index++;
	}
	return (1);
}
