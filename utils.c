/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:58:09 by yopi              #+#    #+#             */
/*   Updated: 2022/02/18 18:31:39 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst || n == 0)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int	ft_atoi(const char *str)
{
	int		j;
	long	res;

	j = 1;
	res = 0;
	while (*str == '\t' || *str == '\f' || *str == '\r'
		|| *str == ' ' || *str == '\v' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	check_max_and_min(res);
	return (res * j);
}

void	stack_handle(t_stack *stack_a, t_stack *stack_b, int size, int *tab)
{
	stack_a->arr = malloc(sizeof(int) * size);
	if (!stack_a->arr)
		exit (1);
	stack_a->filled = size;
	ft_memcpy(stack_a->arr, tab, (size) * 4);
	stack_b->arr = malloc(sizeof(int) * size);
	if (!stack_b->arr)
		exit (1);
	stack_b->filled = 0;
}

int	ft_size_tab(int ac, char *av[])
{
	int	i;
	int	j;
	int	x;

	i = 1;
	x = 0;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] != ' ')
			x++;
		while (av[i][j])
		{
			if (av[i][j] == ' ' && av[i][j + 1] >= 48 && av[i][j + 1] <= 57)
				x++;
			j++;
		}
		i++;
	}
	return (x);
}
