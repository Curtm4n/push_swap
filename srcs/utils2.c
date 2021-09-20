/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:49:43 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/19 16:42:32 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_larger(int *arr, int size)
{
	int	i;
	int	nb;
	int	index;

	i = 0;
	nb = arr[0];
	index = 0;
	while (i < size)
	{
		if (arr[i] > nb)
		{
			index = i;
			nb = arr[i];
		}
		i++;
	}
	return (index);
}

int	find_smaller(int *arr, int size)
{
	int	i;
	int	nb;
	int	index;

	i = 0;
	nb = arr[0];
	index = 0;
	while (i < size)
	{
		if (arr[i] < nb)
		{
			index = i;
			nb = arr[i];
		}
		i++;
	}
	return (index);
}

void	push_smaller(t_stack *stack)
{
	int	smaller;

	smaller = find_smaller(stack->a, stack->a_len);
	if (smaller == 1)
		sa(stack->a, stack->a_len);
	else if (smaller == 2)
	{
		rra(stack->a, stack->a_len);
		rra(stack->a, stack->a_len);
	}
	else if (smaller == 3)
		rra(stack->a, stack->a_len);
	if ((smaller == 2 || smaller == 3 || smaller == 4) && stack->a_len == 5)
		rra(stack->a, stack->a_len);
	pb(stack);
}

void	empty_b(t_stack *stack)
{
	int	larger;

	while (stack->b_len > 0)
	{
		larger = find_larger(stack->b, stack->b_len);
		if (larger <= stack->b_len / 2)
		{
			while (larger > 0)
			{
				rb(stack->b, stack->b_len);
				larger--;
			}
		}
		else
		{
			while (larger < stack->b_len)
			{
				rrb(stack->b, stack->b_len);
				larger++;
			}
		}
		pa(stack);
	}
}

int	is_sort(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}
