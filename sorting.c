/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:10:49 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/03/02 20:20:24 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void    sorting_stack_a(t_stack *stack_a)
{
    int min_index;
    
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
            write(1 ,"rra\n",4);
            min_index++;
        }
    }   
}

void    first_rotate(t_stack *stack_a, int *head, int counter)
{
    int i;
    
    i = 0;
    if (head[counter] == 1 && i <= stack_a->filled / 2)
    {
        rotate(stack_a);
        write(1,"ra\n",3);
        i++;
    }
    if (head[counter] == 1 && i > stack_a->filled / 2)
    {
        rev_rotate(stack_a);
        write(1,"rra\n", 1);
        i--;
    }
}

void    start_sorting(t_stack *stack_a, t_stack *stack_b, int *head)
{
    int i;
    int counter;
    int size;
    
    i = 0;
    while (i < stack_a->filled && stack_a->arr[i] < stack_a->arr[i + 1])
        i++;
    counter = 0;
    size = stack_a->filled;
    if (i != stack_a->filled)
    {
        i = 0;
        while (counter < size)
        {
            i = 0;
            if (head[counter] == 0)
            {
                push_to(stack_b, stack_a);
                write(1,"pb\n", 3);
            }
            first_rotate(stack_a, head, counter);
            counter++;
        }
    }
}