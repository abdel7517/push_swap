/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:24:57 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/20 09:27:52 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int	rrb(t_stack **stack)
{
	t_stack	*current;
	t_stack	*last;

	current = *stack;
	if (ft_count_stack((*stack)) <= 1)
		return (1);
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}


int	rra(t_stack **stack)
{
	t_stack	*current;
	t_stack	*last;

	current = *stack;
	if (ft_count_stack((*stack)) <= 1)
		return (1);
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}


int	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (rra(stack_a) == 0 && rrb(stack_b) == 0)
		return (0);
	return (1);
}
