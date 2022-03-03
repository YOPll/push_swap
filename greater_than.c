/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greater_than.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:36:16 by yopi              #+#    #+#             */
/*   Updated: 2022/03/02 19:52:23 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	find_min_num_index(int *arr, int filled)
{
	int	min;
	int index;
	int i;
	
	i = 1;
	index = 0;
	min = arr[0];
	while (i < filled)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	*true_false(int *arr, int filled, int index)
{
	int	i;
	int	temp;
	int	*check;
	int traverse;
	
	check = malloc(sizeof(int) * filled);
	i = index;
	temp = arr[index];
	traverse = 0;
	while (traverse < filled)
	{
		if (temp < arr[i])
		{
			check[i] = 1;
			temp = arr[i];	
		}
		else
			check[i] = 0;
		i++;
		i = i % filled;
		traverse++;
	}
	check[index] = 1;
	return (check);	
}

int	find_max_num_index(int *arr, int filled)
{
	int max;
	int	index;
	int	i;
	
	i = 1;
	index = 0;
	max = arr[0];
	while (i < filled)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_mark_head(int *arr, int filled, int i)
{
	int	count;
	int traverse;
	int	place;
	int	j;

	traverse = 0;
	count = 1;
	j = i;
	place = arr[i];
	while (traverse < filled)
	{
		if (place < arr[i])
		{
			place = arr[j];
			count++;
		}
		j++;
		j = j % filled;
		traverse++;
	}
	return(count);
}

int	*greater_than(int *arr, int filled)
{
	int	*arrays;
	int	*true_or_false;
	int	i;
	int max_index;

	arrays = malloc(sizeof(int) * filled);
	i = 0;
	while (i < filled)
	{
		arrays[i] = find_mark_head(arr, filled, i);
		i++;
	}
	max_index = find_max_num_index(arrays, filled);
	true_or_false = true_false(arr, filled, max_index);
	free(arrays);
	return (true_or_false);
}