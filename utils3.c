/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:05 by yopi              #+#    #+#             */
/*   Updated: 2022/02/18 18:47:07 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	is_integer(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= ac - 1)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] >= 48 && av[i][j] <= 57) || \
				av[i][j] == 43 || av[i][j] == 45 || av[i][j] == 32)
			{
				j++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}
