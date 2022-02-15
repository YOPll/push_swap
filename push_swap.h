/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:16 by yopi              #+#    #+#             */
/*   Updated: 2022/02/15 03:07:54 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

size_t	ft_strlen(const char *s);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    conv(char *av[], int *tab);
int		ft_atoi(const char *str);
int		ft_str_isnum(char *str);
void    is_dup(int ac, int *arr);
void	ft_error(void);
void	check_max_and_min(long x);

#endif