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

int	*ft_resize(int ac, int count, char *av[])
{
	int	i;
	int	j;
	int	x;
	int	*tab;

	i = 1;
	x = -1;
	tab = (int *)malloc(sizeof(int) * count);
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		if (av[i][j] != ' ')
			tab[++x] = ft_atoi(av[i]);
		while (av[i][j])
		{
			if (av[i][j] == ' ' && av[i][j + 1] >= 48 && av[i][j + 1] <= 57)
				tab[++x] = ft_atoi(&av[i][j]);
			j++;
		}
		i++;
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
