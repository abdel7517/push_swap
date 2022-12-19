/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchaban <abchaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:24:57 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/19 13:30:32 by abchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

static int is_affect(t_stack *stack, long long *last)
{
	long long tmp;

	tmp = *last;
	*last = stack->next->value;
	return (tmp);
}


int	rra(t_stack *stack_a)
{
	long long tmp;
	t_stack *first;

	first = stack_a;
	tmp = stack_a->value;
	while (stack_a->next)
	{
		stack_a->next->value = is_affect(stack_a, &tmp);
		stack_a = stack_a->next;
	}
	first->value = tmp;
	return (0);
}

int	rrb(t_stack *stack_b)
{
	long long tmp;
	t_stack *first;

	first = stack_b;
	tmp = stack_b->value;
	while (stack_b->next)
	{
		stack_b->next->value = is_affect(stack_b, &tmp);
		stack_b = stack_b->next;
	}
	first->value = tmp;
	return (0);
}

int	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (rra(stack_a) && rrb(stack_b))
		return (1);
	return (0);
}