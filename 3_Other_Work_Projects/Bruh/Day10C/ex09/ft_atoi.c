/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:25:51 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 12:40:04 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_cursor(int i, char *str, int *sign)
{
	i = 0;
	while (str[i] >= 1 && str[i] <= 32)
		i = i + 1;
	if (str[i] == '-')
	{
		*sign = *sign * -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i = i + 1;
	i = i - 1;
	return (i);
}

int	ft_atoi(char *str)
{
	int	neg_token;
	int pw;
	int	nb;
	int i;

	pw = 1;
	neg_token = 1;
	nb = 0;
	i = 0;
	i = get_cursor(i, str, &neg_token);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb + (str[i] - '0') * pw;
		pw = pw * 10;
		i = i - 1;
	}
	nb = nb * neg_token;
	return (nb);
}
