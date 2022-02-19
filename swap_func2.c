/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:29:26 by yopi              #+#    #+#             */
/*   Updated: 2022/02/16 21:06:33 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void    rev_rotate(t_stack *stack)
{
    int i;
    int temp;

    if (stack->filled == 0)
        return ;
    i = stack->filled - 1;
    temp = stack->arr[i];
    while (i > 0)
    {
        stack->arr[i] = stack->arr[i - 1];
        i--;
    }
    stack->arr[0] = temp;
}

void    rrr(t_stack *stack_a, t_stack stack_b)
{
    rev_rotate(stack_a);
    rev_rotate(stack_a);
}