/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:42:26 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/02/15 03:17:51 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int ac, char *av[])
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	arr = malloc(sizeof(int) * ac);
	conv(av, arr);
	is_dup(ac, arr);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "Error\n", 6);
	push_swap(ac - 1, av + 1);
	return (0);
}
