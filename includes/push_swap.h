/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:26:18 by cdapurif          #+#    #+#             */
/*   Updated: 2021/09/19 16:40:11 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

# include <stdio.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	a_len;
	int	b_len;
}				t_stack;

void	check_errors(int nb, char **numbers);
long	ft_atol(char *str);
t_stack	*init_stack(int nb, char **numbers, t_stack *stack);
void	quit_error(void);
void	find_algo(t_stack *stack);
void	quit_success(t_stack *stack);
void	sa(int *a, int size);
void	sb(int *b, int size);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
int		pop(int *arr, int size);
void	push(int nb, int *arr, int size);
void	ra(int *a, int size);
void	rb(int *b, int size);
void	rr(t_stack *stack);
void	rra(int *a, int size);
void	rrb(int *b, int size);
void	rrr(t_stack *stack);
void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack);
void	sort_big(t_stack *stack, int chunks);
int		find_larger(int *arr, int size);
int		find_smaller(int *arr, int size);
void	push_smaller(t_stack *stack);
int		handle_chunk(t_stack *stack, int min, int max);
void	empty_b(t_stack *stack);
int		is_sort(int *arr, int size);

#endif
