/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchaban <abchaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:55:20 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/19 11:00:31 by abchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *del;
	t_stack *new;

	del = (*stack_a)->next;
	if (!*stack_a)
		return (0);
	new = new_lst((*stack_a)->value);
	add_front(stack_b, new);
	free(*(stack_a));
	*stack_a = del;
	return (1);
}

int	ra(t_stack *stack)
{
	int		first;
	t_stack *tmp;

	if (ft_count_stack(stack) <= 1)
		return (1);
	first = stack->value;
	while (stack->next)
	{
		tmp = stack->next;
		stack->value = tmp->value;
		stack = stack->next;
	}
	stack->value = first;
	return (1);
}

int	rb(t_stack *stack)
{
	int		first;
	t_stack	*tmp;

	if (ft_count_stack(stack) <= 1)
		return (1);
	first = stack->value;
	while (stack->next)
	{
		tmp = stack->next;
		stack->value = tmp->value;
		stack = stack->next;
	}
	stack->value = first;
	return (1);
}

int	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (ra(stack_a) && rb(stack_b))
		return (1);
	return (0);
}

// rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier.
// 
// int	rra(t_stack *stack)
// {
// 	int last;
// 	t_stack *first;
// 	t_stack	*n;
// 	int last;
// 	first = stack;
// 	while (stack)
// 	{
// 		n = stack->next;
		
// 		if (first != stack)
// 		{
// 			n->value = 
// 		}	
// 		else
// 		{
			
// 			n->value = stack->value;
// 		}
		
// 		stack = stack->next;
// 	}
// 	return (1);
// }
// tmp = 9
// 9 5 2 1 
// 5 -> tmp
// 
// 2 -> 
// 
