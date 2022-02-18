/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:37:01 by yopi              #+#    #+#             */
/*   Updated: 2022/02/18 18:55:23 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	two_solve(t_stack *stack_a)
{
	if (stack_a->arr[0] > stack_a->arr[1])
	{
		swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void	quick_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->filled == 1)
		exit(0);
	if (stack_a->filled == 2)
		two_solve(stack_a);
	/*if (stack_a->filled == 3)
		tree_solve();
	if (stack_a->filled == 5)
		last_solve();*/	
}