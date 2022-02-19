/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:37:01 by yopi              #+#    #+#             */
/*   Updated: 2022/02/18 19:14:26 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	two_solve(t_stack *stack)
{
	if (stack->arr[0] > stack->arr[1])
	{
		swap(stack);
		write(1, "sa\n", 3);
	}
}

void	tree_solve(t_stack *stack)
{
	if (stack->arr[0] < stack->arr[1] && stack->arr[1] > stack->arr[2])
	{
		rev_rotate(stack);
		write(1, "rra\n", 4);
	}
	if (stack->arr[0] > stack->arr[1] && stack->arr[1] > stack->arr[2])
	{
		rotate(stack);
		write(1, "ra\n", 3);
	}
	if (stack->arr[0] > stack->arr[1] && stack->arr[0] < stack->arr[2])
	{
		swap(stack);
		write(1, "sa\n", 3);
	}
	if (stack->arr[0] > stack->arr[1] && stack->arr[0] > stack->arr[2])
	{
		rotate(stack);
		write(1, "ra\n", 3);
	}
	if (stack->arr[1] > stack->arr[0] && stack->arr[1] > stack->arr[2])
	{
		rev_rotate(stack);
		write(1, "rrxa\n", 5);
	}

	
}

void	quick_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->filled == 1)
		exit(0);
	if (stack_a->filled == 2)
		two_solve(stack_a);
	if (stack_a->filled == 3)
		tree_solve(stack_a);
	/*if (stack_a->filled == 5)
		last_solve();*/	
	exit(0);
}