/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchaban <abchaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:55:20 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/21 09:42:03 by abchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*del;
	t_stack	*new;

	if (ft_count_stack((*stack_a)) < 1)
		return (1);
	del = (*stack_a)->next;
	new = new_lst((*stack_a)->value);
	add_front(stack_b, new);
	free(*(stack_a));
	*stack_a = del;
	return (0);
}

int	ra(t_stack **stack)
{
	t_stack	*current;
	t_stack	*first;

	if (ft_count_stack((*stack)) <= 1)
		return (1);
	current = *stack;
	first = (*stack);
	(*stack) = (*stack)->next;
	while (current->next)
	{
		current = current->next;
	}
	current->next = first;
	first->next = NULL;
	return (0);
}

int	rb(t_stack **stack)
{
	t_stack	*current;
	t_stack	*first;

	current = *stack;
	if (ft_count_stack((*stack)) <= 1)
		return (1);
	first = (*stack);
	(*stack) = (*stack)->next;
	while (current->next)
	{
		current = current->next;
	}
	current->next = first;
	first->next = NULL;
	return (0);
}

int	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (ra((stack_a)) == 0 && rb((stack_b)) == 0)
		return (0);
	return (1);
}
