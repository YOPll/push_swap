/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_made_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 02:21:43 by yopi              #+#    #+#             */
/*   Updated: 2022/03/29 15:26:45 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	check_sorting(t_stack *stack_a, t_stack *stack_b, char *actions)
{
	if (ft_strncmp(actions, "sa\n", 3) == 0)
		swap(stack_a);
	else if (ft_strncmp(actions, "sb\n", 3) == 0)
		swap(stack_b);
	else if (ft_strncmp(actions, "ss\n", 3) == 0)
		swap_ss(stack_a, stack_a);
	else if (ft_strncmp(actions, "ra\n", 3) == 0)
		rotate(stack_a);
	else if (ft_strncmp(actions, "rb\n", 3) == 0)
		rotate(stack_b);
	else if (ft_strncmp(actions, "rr\n", 3) == 0)
		rotate_rr(stack_a, stack_b);
	else if (ft_strncmp(actions, "rra\n", 4) == 0)
		rev_rotate(stack_a);
	else if (ft_strncmp(actions, "pa\n", 3) == 0)
		push_to(stack_a, stack_b);
	else if (ft_strncmp(actions, "pb\n", 3) == 0)
		push_to(stack_b, stack_a);
	else if (ft_strncmp(actions, "rrb\n", 4) == 0)
		rev_rotate(stack_b);
	else if (ft_strncmp(actions, "rrr\n", 3) == 0)
		rrr(stack_a, stack_b);
	else
		ft_error();
}

void	is_all_sorted(t_stack *stack_a, t_stack *stack_b, int filled)
{
	int	i;
	int	j;

	i = 0;
	j = stack_a->filled;
	while (i + 1 < j && stack_a->arr[i] < stack_a->arr[i + 1])
		i++;
	if (i + 1 == stack_a->filled)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (i + 1 != filled)
		free(stack_b->arr);
	free(stack_a->arr);
}

void	checker(t_stack *stack_a, t_stack *stack_b, int filled)
{
	char	*actions;

	actions = get_next_line(STDIN_FILENO);
	while (actions)
	{
		check_sorting(stack_a, stack_b, actions);
		free(actions);
		actions = get_next_line(STDIN_FILENO);
	}
	is_all_sorted(stack_a, stack_b, filled);
}

void	push_swap_checker(int ac, char **av, int *arr, int count)
{
	t_stack	stack_a;
	t_stack	stack_b;

	count = ft_size_tab(ac, av, 0, 1);
	arr = ft_resize(ac, count, av, 0);
	is_dup(count, arr);
	stack_a.arr = malloc(sizeof(int) * count);
	if (!stack_a.arr)
	{
		ft_free(stack_a.arr, arr);
		exit (1);
	}
	stack_a.filled = count;
	ft_memset(&stack_b, 0, sizeof(t_stack));
	stack_b.arr = malloc(sizeof(int) * count);
	if (!stack_b.arr)
	{
		free(arr);
		ft_free(stack_a.arr, stack_b.arr);
		exit (1);
	}
	ft_memcpy(stack_a.arr, arr, sizeof(int) * count);
	checker(&stack_a, &stack_b, count);
	free(arr);
}

int	main(int ac, char **av)
{
	if (is_integer(ac, av) == 1)
		push_swap_checker(ac, av, NULL, 0);
	else
		ft_error();
	return (0);
}
