/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:44:52 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 18:16:03 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	quit_success(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
	exit(EXIT_SUCCESS);
}

int	pop(int *arr, int size)
{
	int	tmp;
	int	i;

	tmp = *arr;
	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
	return (tmp);
}

void	push(int nb, int *arr, int size)
{
	while (size > 0)
	{
		arr[size] = arr[size - 1];
		size--;
	}
	arr[0] = nb;
}

long	ft_atol(char *str)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}

t_stack	*init_stack(int nb, char **numbers, t_stack *stack)
{
	int	i;

	stack->a = malloc(sizeof(int) * nb);
	if (!stack->a)
	{
		free(stack);
		quit_error();
	}
	i = 0;
	while (i < nb)
	{
		stack->a[i] = ft_atoi(numbers[i]);
		i++;
	}
	stack->b = malloc(sizeof(int) * nb);
	if (!stack->b)
	{
		free(stack->a);
		free(stack);
		quit_error();
	}
	stack->a_len = nb;
	return (stack);
}
