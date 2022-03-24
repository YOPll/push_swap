/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_movements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:00:51 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/03/24 15:39:55 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	abs_move(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

int	*instructions_to_a(t_stack *stack_a, t_stack *stack_b, int i, int j)
{
	int	*a;
	int	index_min;

	index_min = find_min_num_index(stack_a->arr, stack_a->filled);
	a = malloc(sizeof(int) * stack_b->filled);
	if (!a)
		exit(1);
	while (j < stack_b->filled)
	{
		i = index_min;
		while (i < stack_a->filled && stack_a->arr[i] < stack_b->arr[j])
		i++;
		if (i == stack_a->filled && stack_a->arr[i] < stack_b->arr[j])
		{
			i = 0;
			while (i < index_min && stack_a->arr[i] < stack_b->arr[j])
				i++;
		}
		a[j] = i;
		if (a[j] > stack_a->filled / 2)
			a[j] = (stack_a->filled - i) * -1;
		j++;
	}
	return (a);
}

int	*instructions_to_b(t_stack *stack_b)
{
	int	*b;
	int	i;

	i = 0;
	b = malloc(sizeof(int) * stack_b->filled);
	if (!b)
		exit(1);
	while (i < stack_b->filled)
	{
		b[i] = i;
		if (b[i] > stack_b->filled / 2)
			b[i] = (stack_b->filled - i) * -1;
		i++;
	}
	return (b);
}

void	infer_move(t_stack *stack_a, t_stack *stack_b, int a, int b)
{
	while (a < 0)
	{
		rev_rotate(stack_a);
		write(1, "rra\n", 4);
		a++;
	}
	while (b < 0)
	{
		rev_rotate(stack_b);
		write(1, "rrb\n", 4);
		b++;
	}
}

void	push_all_to_a(t_stack *stack_a, t_stack *stack_b, int best_index)
{
	int	*tab_move_a;
	int	*tab_move_b;
	int	a_bestmove;
	int	b_bestmove;

	tab_move_a = instructions_to_a(stack_a, stack_b, 0, 0);
	tab_move_b = instructions_to_b(stack_b);
	a_bestmove = tab_move_a[best_index];
	b_bestmove = tab_move_b[best_index];
	both_stacks(stack_a, stack_b, &a_bestmove, &b_bestmove);
	super_move(stack_a, stack_b, a_bestmove, b_bestmove);
	infer_move(stack_a, stack_b, a_bestmove, b_bestmove);
	push_to(stack_a, stack_b);
	write(1, "pa\n", 3);
	ft_free(tab_move_a, tab_move_b);
}
