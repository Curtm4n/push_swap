/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:58:12 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 00:02:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_to(int *from, int *to, int len_from, int len_to)
{
	push(pop(from, len_from), to, len_to);
}

void	pa(t_stack *stack)
{
	if (stack->b_len > 0)
	{
		push_to(stack->b, stack->a, stack->b_len, stack->a_len);
		stack->b_len--;
		stack->a_len++;
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_stack *stack)
{
	if (stack->a_len > 0)
	{
		push_to(stack->a, stack->b, stack->a_len, stack->b_len);
		stack->a_len--;
		stack->b_len++;
		ft_putstr_fd("pb\n", 1);
	}
}
