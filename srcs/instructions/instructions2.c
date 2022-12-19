/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:55:20 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/19 16:37:30 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*del;
	t_stack	*new;

	if (ft_count_stack((*stack_a)) <= 1)
		return (0);
	del = (*stack_a)->next;
	new = new_lst((*stack_a)->value);
	add_front(stack_b, new);
	free(*(stack_a));
	*stack_a = del;
	return (1);
}

// int	ra(t_stack **stack)
// {
// 	int		first;
// 	t_stack	*tmp;

// 	if (ft_count_stack((*stack)) <= 1)
// 		return (1);
// 	first = (*stack)->value;
// 	while ((*stack)->next)
// 	{
// 		tmp = (*stack)->next;
// 		(*stack)->value = tmp->value;
// 		(*stack) = (*stack)->next;
// 	}
// 	(*stack)->value = first;
// 	return (1);
// }

int	ra(t_stack **stack)
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
	return (1);
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
	return (1);
}

int	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (ra((stack_a)) && rb((stack_b)))
		return (1);
	return (0);
}
