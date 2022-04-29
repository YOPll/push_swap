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

int	*ft_resize(int ac, int count, char *av[], int i)
{
	int	j;
	int	x;
	int	*tab;

	x = -1;
	tab = (int *)malloc(sizeof(int) * count);
	while (tab && ++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+' \
			|| (av[i][j] >= '0' && av[i][j] <= '9'))
			{
				tab[++x] = ft_atoi(&av[i][j]);
				(av[i][j] == '+' || av[i][j] == '-') && j++;
				while (av[i][j] && (av[i][j] >= '0' && av[i][j] <= '9'))
					j++;
			}
			else
				j++;
		}
	}
	return (tab);
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
			{
				free(arr);
				ft_error();
			}
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

void	check_max_and_min(long x, char *str)
{
	if (!(!*str || *str == ' ') || x < INT_MIN || x > INT_MAX)
		ft_error();
}

void	ft_free(int *tab1, int *tab2)
{
	free(tab1);
	free(tab2);
}
