/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:01:49 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/16 18:11:32 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	quit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	check_min_max(long nb, char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (ft_strlen(str) > 10)
		quit_error();
	if (nb < 0 && ft_strlen(str) == 10)
	{
		if (ft_strcmp(str, "2147483648") > 0)
			quit_error();
	}
	if (nb >= 0 && ft_strlen(str) == 10)
	{
		if (ft_strcmp(str, "2147483647") > 0)
			quit_error();
	}
}

void	check_numbers(int nb, char **numbers)
{
	char	*str;
	int		i;

	i = 0;
	while (i < nb)
	{
		str = numbers[i];
		if (*str == '-' || *str == '+')
			str++;
		if (*str == '\0')
			quit_error();
		while (*str)
		{
			if (!(*str >= '0' && *str <= '9'))
				quit_error();
			str++;
		}
		check_min_max(ft_atol(numbers[i]), numbers[i]);
		i++;
	}
}

void	check_doubles(int nb, char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (++i < nb)
	{
		j = -1;
		while (++j < i)
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				quit_error();
		}
	}
}

void	check_errors(int nb, char **numbers)
{
	check_numbers(nb, numbers);
	check_doubles(nb, numbers);
}
