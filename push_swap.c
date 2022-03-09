/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:42:26 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/03/04 14:47:43 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	push_swap(int ac, char *av[])
{
	t_stack stack_a;
	t_stack stack_b;
	int	*arr;
	int	*marked_head;

	arr = malloc(sizeof(int) * ac);
	conv(av, arr);
	is_dup(ac, arr);
	stack_handle(&stack_a, &stack_b, ac, arr);
	if(stack_a.filled < 4 || stack_a.filled == 5)
		quick_sort(&stack_a, &stack_b);
	marked_head = greater_than(stack_a.arr, stack_a.filled);
	start_sorting(&stack_a, &stack_b, marked_head);
	mid_sorting(&stack_a, &stack_b);
	last_sorting(&stack_a);
	ft_free(marked_head, arr);
	ft_free(stack_a.arr, stack_b.arr);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "Error\n", 6);
	push_swap(ac - 1, av + 1);
	return (0);
}
