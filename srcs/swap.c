/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:18:50 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 02:31:41 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *stack)
{
	int	tmp;

	tmp = *stack;
	*stack = stack[1];
	stack[1] = tmp;
}

void	sa(int *a, int size)
{
	if (size > 1)
	{
		swap(a);
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(int *b, int size)
{
	if (size > 1)
	{
		swap(b);
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_stack *stack)
{
	if (stack->a_len > 1)
		swap(stack->a);
	if (stack->b_len > 1)
		swap(stack->b);
	ft_putstr_fd("ss\n", 1);
}
