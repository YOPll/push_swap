/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:42:26 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/02/18 18:25:20 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include <stdio.h>

void	push_swap(int ac, char *av[])
{
	t_stack stack_a;
	t_stack stack_b;
	int	*arr;

	arr = malloc(sizeof(int) * ac);
	conv(av, arr);
	is_dup(ac, arr);
	stack_handle(&stack_a, &stack_b, ac, arr);


}

int	main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "Error\n", 6);
	push_swap(ac - 1, av + 1);
	return (0);
}
