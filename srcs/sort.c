/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:22:55 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/19 16:54:00 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
		sa(stack->a, stack->a_len);
}

void	sort_three(t_stack *stack)
{
	int	larger;

	larger = find_larger(stack->a, stack->a_len);
	if (larger == 0)
		ra(stack->a, stack->a_len);
	else if (larger == 1)
		rra(stack->a, stack->a_len);
	sort_two(stack);
}

void	sort_five(t_stack *stack)
{
	if (stack->a_len == 5)
		push_smaller(stack);
	push_smaller(stack);
	sort_three(stack);
	pa(stack);
	pa(stack);
}

void	sort_big(t_stack *stack, int chunks)
{
	int	smaller;
	int	larger;
	int	diff;
	int	max;
	int	i;

	smaller = stack->a[find_smaller(stack->a, stack->a_len)];
	larger = stack->a[find_larger(stack->a, stack->a_len)];
	diff = larger - smaller;
	i = 0;
	while (i < chunks)
	{
		max = smaller + diff / chunks;
		if (max > larger && smaller > larger)
			break ;
		while (handle_chunk(stack, smaller, max))
		{
		}
		if (is_sort(stack->a, stack->a_len) == 0)
			break ;
		smaller = max + 1;
		i++;
	}
	empty_b(stack);
}
