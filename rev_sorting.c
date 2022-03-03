/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:01:39 by yopi              #+#    #+#             */
/*   Updated: 2022/03/03 02:04:04 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	rev_sorting(t_stack *stack_a, t_stack *stack_b)
{
	int index;
	
	while (stack_b->filled != 0)
	{
		index = perfect_sort(stack_a, stack_b);
		
	}
	
}