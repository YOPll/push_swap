/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_made_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 02:21:43 by yopi              #+#    #+#             */
/*   Updated: 2022/03/27 02:32:59 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void    push_swap_checker(char **str, int filled)
{
    int *arr;
    
    conv(str, arr);
    is_dup(str, arr);
    free(arr);
}
int main(int ac, int *av[])
{
    if (ac == 1)
        exit(0);
    push_swap_checker(av + 1, ac - 1);
    return (0);
}