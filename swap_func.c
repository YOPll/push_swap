/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:34:29 by yopi              #+#    #+#             */
/*   Updated: 2022/02/16 20:54:42 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->filled == 0)
		return ;
	temp = stack->arr[0];
	stack->arr[0] = stack->arr[1];
	stack->arr[1] = temp;
}

void	swap_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->filled == 0)
		return ;
	i = 0;
	tmp = stack->arr[0];
	while (i < stack->filled - 1)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[i] = tmp;
}

void	rotate_rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	push_to(t_stack *pushed_to, t_stack *from)
{
	int	i;

	if (from->filled == 0)
		return ;
	i = pushed_to->filled;
	while (i > 0)
	{
		pushed_to->arr[i] = pushed_to->arr[i - 1];
		i --;
	}
	pushed_to->arr[0] = from->arr[0];
	pushed_to->filled += 1;
	from->filled -= 1;
	i = 0;
	while (i < from->filled)
	{
		from->arr[i] = from->arr[i + 1];
		i++;
	}
}
