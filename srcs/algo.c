/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:43:21 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/20 17:12:46 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_algo(t_stack *stack)
{
	if (stack->a_len == 2)
		sort_two(stack);
	else if (stack->a_len == 3)
		sort_three(stack);
	else if (stack->a_len >= 4 && stack->a_len <= 5)
		sort_five(stack);
	else if (stack->a_len > 5)
	{
		if (stack->a_len <= 100)
			sort_big(stack, 5);
		else
			sort_big(stack, 11);
	}
}
