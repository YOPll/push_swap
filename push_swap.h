/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:16 by yopi              #+#    #+#             */
/*   Updated: 2022/02/14 02:36:19 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    conv(char *av[], int *tab);
int		ft_atoi(const char *str);
int		ft_str_isnum(char *str);
void    is_dup(int ac, int *arr);

#endif