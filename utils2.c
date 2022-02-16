/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:05 by yopi              #+#    #+#             */
/*   Updated: 2022/02/15 19:39:56 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	conv(char *av[], int *tab)
{
	int	i;

	i = 0;
	while (av[i])
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
}

void	is_dup(int ac, int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (arr[i] == arr[j])
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	check_max_and_min(long x)
{
	if (x < INT_MIN || x > INT_MAX)
		ft_error();
}

void	ft_free(int *tab1, int *tab2)
{
	free(tab1);
	free(tab2);
}
