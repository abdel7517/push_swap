/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchaban <abchaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:08:13 by abchaban          #+#    #+#             */
/*   Updated: 2022/12/19 11:00:42 by abchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *new_lst(int value)
{
	t_stack *new = malloc(sizeof(t_stack) );
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

int	ft_addback(t_stack **list, t_stack *new)
{
	t_stack	*lst;

	lst = *list;
	if (!new)
		return (0);
	if (!(*(list)))
	{
		*(list) = new;
		return (0);
	}
	while (lst)
	{
		if (((lst))->next == NULL)
		{
			((lst))->next = new;
			return (1);
		}
		((lst)) = ((lst))->next;
	}
	return (0);
}


int	add_front(t_stack **stack_a, t_stack *new)
{
	if (!new && !stack_a)
		return (0);
	new->next = *(stack_a);
	*(stack_a) = new;
	return (1);
}

int	del_one(t_stack **list, t_stack **del)
{
	if (*(list) == *(del))
	{
		(*(list))->next = (*(del))->next;
		free(*(del));
		return (1);
	}
	while (*(list))
	{
		if ((*(list))->next == *(del))
		{
			(*(list))->next = (*(del))->next;
			free(del);
			return (1);
		}
		*(list) = (*(list))->next;
	}
	return (0);
}