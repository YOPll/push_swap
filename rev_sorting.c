/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:01:39 by yopi              #+#    #+#             */
/*   Updated: 2022/03/04 14:50:38 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	last_sorting(t_stack *stack_a)
{
	int	min_index;

	min_index = find_min_num_index(stack_a->arr, stack_a->filled);
	if (min_index <= stack_a->filled / 2)
	{
		while (min_index > 0)
		{
			rotate(stack_a);
			write(1, "ra\n", 3);
			min_index--;
		}
	}
	else
	{
		while (min_index < stack_a->filled)
		{
			rev_rotate(stack_a);
			write(1, "rra\n", 4);
			min_index++;
		}
	}
}
