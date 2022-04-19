/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:42:26 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/03/24 15:39:33 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	is_sorted(int *arr, int arr_size)
{
	int	i;

	i = 0;
	while (i < arr_size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	push_swap(int ac, char *av[], int *arr, int *marked_head)
{
	int i = 0;
	int count;
	t_stack	stack_a;
	t_stack	stack_b;

	count = ft_size_tab(ac, av);
	arr = malloc(sizeof(int) * count);
	if (!arr)
		exit(1);
	arr = ft_resize(ac, count, av);
	is_dup(count, arr);
	stack_handle(&stack_a, &stack_b, count, arr);
	if (is_sorted(arr, stack_a.filled))
		return ;
	if (stack_a.filled < 4 || stack_a.filled == 5)
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
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' && !ft_isdigit(av[i][j + 1]))
				ft_error();
			j++;
		}
		i++;
	}
	if (is_integer(ac, av) == 1)
		push_swap(ac , av, NULL, NULL);
	else if (is_integer(ac, av) == 0)
		ft_error();
	return (0);
}
