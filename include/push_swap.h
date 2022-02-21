/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:16 by yopi              #+#    #+#             */
/*   Updated: 2022/02/21 18:30:19 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	int	filled;
	int	*arr;
}	t_stack;

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	conv(char *av[], int *tab);
int		ft_atoi(const char *str);
void	is_dup(int ac, int *arr);
void	ft_error(void);
void	check_max_and_min(long x);
void	ft_free(int *tab1, int *tab2);
void    swap(t_stack *stack);
void    swap_ss(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	rotate_rr(t_stack *stack_a, t_stack *stack_b);
void	push_to(t_stack *pushed_to, t_stack *from);
void    rev_rotate(t_stack *stack);
void    rrr(t_stack *stack_a, t_stack stack_b);
void	stack_handle(t_stack *stack_a, t_stack *stack_b, int size, int *tab);
void	quick_sort(t_stack *stack_a, t_stack *stack_b);
void	two_solve(t_stack *stack);
void	tree_solve(t_stack *stack);
void	last_solve(t_stack *stack_a, t_stack *stack_b);
void	solver(t_stack *stack_a, t_stack *stack_b);
int		*sort_five(int *arr, int filled);
void	solver_stackb(t_stack *stack_a, t_stack *stack_b);


#endif