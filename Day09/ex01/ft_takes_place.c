/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:56:29 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/10 23:26:13 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_why(int hour)
{
	int y;

	y = hour + 1;
	if (hour > 12 && y > 12)
	{
		if (hour == 24)
		{
			hour = hour - 12;
			y = y - 24;
			printf("THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d.00 P.M. AND %d.00 A.M.\n", hour, y);
		}
		else
		{
			if (12 < hour && hour < 24)
			{
				hour = hour - 12;
				y = y - 12;
				printf("THE FOLLOWING TAKES PLACE BETWEEN ");
				printf("%d.00 P.M. AND %d.00 P.M.\n", hour, y);
			}
		}
	}
}

void	ft_bruh(int hour)
{
	int y;

	y = hour + 1;
	if (hour > 12 && y < 12)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour, y);
	}
	else
	{
		ft_why(hour);
	}
}

void	ft_takes_place(int hour)
{
	int y;

	y = hour + 1;
	if (hour < 12 && y < 12)
	{
		if (hour == 0)
		{
			hour = hour + 12;
			printf("THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d.00 P.M. AND %d.00 A.M.\n", hour, y);
		}
		else
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, y);
		}
	}
	else
	{
		ft_bruh(hour);
	}
}
