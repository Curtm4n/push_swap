/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:26:56 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 02:05:28 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(int *arr, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = *arr;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

void	ra(int *a, int size)
{
	if (size > 1)
	{
		rotate(a, size);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(int *b, int size)
{
	if (size > 1)
	{
		rotate(b, size);
		ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_stack *stack)
{
	if (stack->a_len > 1)
		rotate(stack->a, stack->a_len);
	if (stack->b_len > 1)
		rotate(stack->b, stack->b_len);
	ft_putstr_fd("rr\n", 1);
}
