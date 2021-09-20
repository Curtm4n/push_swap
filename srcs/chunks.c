/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:47:23 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/19 17:25:03 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_second(int *arr, int limit, int min, int max)
{
	int	i;

	i = limit - 1;
	while (i >= 0)
	{
		if (arr[i] >= min && arr[i] <= max)
			return (i);
		i--;
	}
	return (-1);
}

int	find_first(int *arr, int limit, int min, int max)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		if (arr[i] >= min && arr[i] <= max)
			return (i);
		i++;
	}
	return (-1);
}

int	find_dist(int index, int size)
{
	int	mid;

	mid = size / 2;
	if (index <= mid)
		return (index);
	else
		return (size - index);
}

void	push_to_top(t_stack *stack, int diff, int direction)
{
	int	i;

	i = 0;
	while (i < diff)
	{
		if (direction)
			rra(stack->a, stack->a_len);
		else
			ra(stack->a, stack->a_len);
		i++;
	}
	pb(stack);
}

int	handle_chunk(t_stack *stack, int min, int max)
{
	int	hold_first;
	int	hold_second;

	hold_first = find_first(stack->a, stack->a_len, min, max);
	if (hold_first == -1)
		return (0);
	hold_second = find_second(stack->a, stack->a_len, min, max);
	if (hold_first == hold_second && hold_first <= stack->a_len / 2)
		push_to_top(stack, hold_first, 0);
	else if (hold_first == hold_second && hold_first > stack->a_len / 2)
		push_to_top(stack, stack->a_len - hold_first, 1);
	else if (find_dist(hold_first, stack->a_len) <= \
		find_dist(hold_second, stack->a_len))
		push_to_top(stack, find_dist(hold_first, stack->a_len), 0);
	else
		push_to_top(stack, find_dist(hold_second, stack->a_len), 1);
	return (1);
}
