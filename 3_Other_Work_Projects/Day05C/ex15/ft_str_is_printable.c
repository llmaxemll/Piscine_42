/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <adhondt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:14:46 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/17 23:35:02 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
			return (0);
		else
			index++;
	}
	return (1);
}
