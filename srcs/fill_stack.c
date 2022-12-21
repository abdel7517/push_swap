/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filll_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:32:59 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/17 19:32:59 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	insert_end(t_stack **root, long long int value)
{
	t_stack	*new_node;
	t_stack	*current;

	current = *root;
	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (-1);
	new_node->next = NULL;
	new_node->value = value;
	if (*root == NULL)
	{
		*root = new_node;
		return (0);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (0);
}

void	deallocate_lists(t_stack **root)
{
	t_stack	*current;
	t_stack	*tmp;

	current = *root;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*root = NULL;
}

int	fill_stack(char **args, t_stack **root)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (insert_end(root, ft_atoi(args[i])) != 0)
		{
			deallocate_lists(root);
			return (-1);
		}
		i++;
	}
	return (0);
}

void	print_list(t_stack **root)
{
	t_stack	*current;

	current = *root;
	while (current)
	{
		ft_printf("[%d] : %d\n", current->index, current->value);
		current = current->next;
	}
}
