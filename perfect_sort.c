/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perfect_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:15:46 by yopi              #+#    #+#             */
/*   Updated: 2022/03/03 02:18:44 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void both_stacks(t_stack *stack_a, t_stack *stack_b, int *a, int *b)
{
	while((*a) > 0 && (*b) > 0)
	{
		rotate_rr(stack_a, stack_b);
		write(1, "rr\n", 3);
		(*a)--;
		(*b)--;
	}
	while ((*a) < 0 && (*b) < 0)
	{
		rrr(stack_a, stack_b);
		write(1, "rrr\n", 4);
		(*a)++;
		(*b)++;
	}
}

void	super_move(t_stack *stack_a, t_stack *stack_b, int a, int b)
{
	while(a > 0)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
		a--;
	}
	while (b > 0)
	{
		rotate(stack_b);
		write(1, "rb\n", 3);
		b--;
	}
	
}

void	mid_sorting(t_stack *stack_a, t_stack *stack_b)
{
	int index;
	while (stack_b->filled != 0)
	{
		index = perfect_sort(stack_a, stack_b);
		push_all_to_a(stack_a, stack_b, index);
	}
}

int	*total_movement(t_stack *stack_a, t_stack *stack_b)
{
	int *movements;
	int *min_index_a;
	int *min_index_b;
	int i;

	min_index_a = instructions_to_a(stack_a, stack_b);
	min_index_b= instructions_to_b(stack_b);
	i = 0;
	movements = malloc(sizeof(int) * stack_b->filled);
	while (i < stack_b->filled)
	{
		movements[i] = abs_move(min_index_a[i]) + abs_move(min_index_b[i]);
		i++;
	}
	ft_free(min_index_a, min_index_b);
	return (movements);
}

int	perfect_sort(t_stack *stack_a, t_stack *stack_b)
{
	int *arr;
	int min_index;

	arr = total_movement(stack_a, stack_b);
	min_index = find_min_num_index(arr, stack_a->filled);
	free(arr);
	return (min_index);
}
