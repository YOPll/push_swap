/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:16 by yopi              #+#    #+#             */
/*   Updated: 2022/03/28 13:51:59 by yopi             ###   ########.fr       */
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
void	swap(t_stack *stack);
void	swap_ss(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	rotate_rr(t_stack *stack_a, t_stack *stack_b);
void	push_to(t_stack *pushed_to, t_stack *from);
void	rev_rotate(t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	stack_handle(t_stack *stack_a, t_stack *stack_b, int size, int *tab);
void	quick_sort(t_stack *stack_a, t_stack *stack_b);
void	two_solve(t_stack *stack);
void	tree_solve(t_stack *stack);
void	last_solve(t_stack *stack_a, t_stack *stack_b);
void	solver(t_stack *stack_a, t_stack *stack_b);
int		*sort_five(int *arr, int filled, int i, int j);
void	solver_stackb(t_stack *stack_a, t_stack *stack_b);
int		*greater_than(int *arr, int filled);
int		*true_false(int *arr, int filled, int index, int i);
int		find_mark_head(int *arr, int filled, int i);
int		find_max_num_index(int *arr, int filled);
void	start_sorting(t_stack *stack_a, t_stack *stack_b, int *head);
int		find_min_num_index(int *arr, int filled);
void	first_rotate(t_stack *stack_a, int *head, int counter);
void	sorting_stack_a(t_stack *stack_a);
void	mid_sorting(t_stack *stack_a, t_stack *stack_b);
void	last_sorting(t_stack *stack_a);
int		perfect_sort(t_stack *stack_a, t_stack *stack_b);
void	both_stacks(t_stack *stack_a, t_stack *stack_b, int *a, int *b);
void	super_move(t_stack *stack_a, t_stack *stack_b, int a, int b);
void	infer_move(t_stack *stack_a, t_stack *stack_b, int a_move, int b_move);
int		*total_movement(t_stack *stack_a, t_stack *stack_b);
int		*instructions_to_a(t_stack *stack_a, t_stack *stack_b, int i, int j);
int		*instructions_to_b(t_stack *stack_b);
void	push_all_to_a(t_stack *stack_a, t_stack *stack_b, int best_index);
int		abs_move(int x);
// bonus
char	*ft_strdup(const char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*get_next_line(int fd);
void	*ft_memset(void *b, int c, size_t len);

#endif