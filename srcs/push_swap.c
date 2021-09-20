/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:29:42 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/19 16:39:56 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap(int nb, char **numbers)
{
	t_stack	*stack;

	check_errors(nb, numbers);
	if (nb > 1)
	{
		stack = ft_calloc(1, sizeof(t_stack));
		if (!stack)
			quit_error();
		init_stack(nb, numbers, stack);
		if (is_sort(stack->a, stack->a_len))
			find_algo(stack);
		quit_success(stack);
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_push_swap(ac - 1, av + 1);
	return (0);
}
