/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchaban <abchaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:17:04 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/19 11:00:22 by abchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_count_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}


int	sa(t_stack *stack_a)
{
	int	tmp;
	t_stack *stack_tmp;

	if (ft_count_stack(stack_a) <= 1)
		return (0);
	tmp = stack_a->value;
	stack_tmp = stack_a->next;
	stack_a->value = stack_tmp->value;
	stack_tmp->value = tmp;
	return (1);
}

int	sb(t_stack *stack_b)
{
	int	tmp;
	t_stack *stack_tmp;

	if (ft_count_stack(stack_b) <= 1)
		return (0);
	tmp = stack_b->value;
	stack_tmp = stack_b->next;
	stack_b->value = stack_tmp->value;
	stack_tmp->value = tmp;
	return (1);
}

int	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (sa(stack_a) && sb(stack_b))
		return (1);
	return (0);
}

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *del;
	t_stack *new;

	del = (*stack_b)->next;
	if (!*stack_b)
		return (0);
	new = new_lst((*stack_b)->value);
	add_front(stack_a, new);
	free(*(stack_b));
	*stack_b = del;
	return (1);
}
