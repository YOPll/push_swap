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

int	perfect_sort(t_stack *stack_a, t_stack *stack_b)
{
	int *arr;
	int min_index;
	arr = total_movement(stack_a, stack_b);
	min_index = find_min_num_index(arr, stack_a->arr);
	free(arr);
	return (min_index);
}