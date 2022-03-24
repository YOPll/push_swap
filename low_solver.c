/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:13:30 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/03/24 15:38:27 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	*sort_five(int *arr, int filled, int i, int j)
{
	int temp;
	int *sorted;
	
	sorted = malloc(sizeof(int) * 5);
	if (!sorted)
		return (ft_free(arr, NULL),exit(1), NULL);
	while (++i < filled)
		sorted[i] = arr[i];
	i = - 1;
	while (++i + 1 < filled)
	{
		j = i + 1;
		while (j < filled)
		{
			if (sorted[j] < sorted[i])
			{
				temp = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = temp;
			}
			j++;
		}
	}
	return (sorted);
}

void	solver_stackb(t_stack *stack_a, t_stack *stack_b)
{
	tree_solve(stack_a);
	if (stack_b->arr[0] < stack_b->arr[1])
	{ 
		swap(stack_b);
		write(1, "sb\n", 3);
	}
	push_to(stack_a, stack_b);
	write(1, "pa\n", 3);
	push_to(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	solver(t_stack *stack_a, t_stack *stack_b)
{
	int *arr;

	arr = sort_five(stack_a->arr, stack_a->filled, -1 , 0);
	while (stack_a->filled != 3)
	{
		if (stack_a->arr[0] < arr[2])
		{
			push_to(stack_b, stack_a);
			write(1, "pb\n", 3);
		}
		rev_rotate(stack_a);
		write(1, "rra\n", 4);
	}
	solver_stackb(stack_a, stack_b);
	free (arr);
}