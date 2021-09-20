/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 02:03:23 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 02:44:04 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rev_rot(int *arr, int size)
{
	int	i;
	int	tmp;

	i = size - 1;
	tmp = arr[i];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = tmp;
}

void	rra(int *a, int size)
{
	if (size > 1)
	{
		rev_rot(a, size);
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(int *b, int size)
{
	if (size > 1)
	{
		rev_rot(b, size);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_stack *stack)
{
	if (stack->a_len > 1)
		rev_rot(stack->a, stack->a_len);
	if (stack->b_len > 1)
		rev_rot(stack->b, stack->b_len);
	ft_putstr_fd("rrr\n", 1);
}
