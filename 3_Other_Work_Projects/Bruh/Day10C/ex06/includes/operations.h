/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:25:07 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 15:58:38 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

typedef struct	s_op
{
	char	op;
	int		(*f)(int, int);
}				t_op;

int				add(int a, int b);
int				sub(int a, int b);
int				mul(int a, int b);
int				divide(int a, int b);
int				mod(int a, int b);

#endif
