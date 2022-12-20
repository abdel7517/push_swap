/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 09:27:12 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/17 09:27:12 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	deallocate_args(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

int	main(int argc, char **argv)
{
	char	**strs;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 2), 0);
	else
	{
		strs = ft_concat_split(argc, argv);
		if (is_valid_params(strs) == 0)
			return (ft_putstr_fd("Error\n", 2), 0);
		else
		{
			if (fill_stack(strs, &stack_a) != 0)
				return (ft_putstr_fd("Error ici\n", 2), 0);
			ft_printf("Let's go !\n");
		}
		deallocate_args(strs);
	}

	puts("--------------");
	puts("--- BEFORE ---");
	puts("--------------");
	puts("--- STACK_A ---");
	print_list(&stack_a);
	puts("--- STACK_B ---");
	print_list(&stack_b);

	sa(&stack_a);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	rr(&stack_a, &stack_b);
	rrr(&stack_a, &stack_b);
	sa(&stack_a);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);


	puts("--------------");
	puts("--- AFTER ---");
	puts("--------------");
	puts("--- STACK_A ---");
	print_list(&stack_a);
	puts("--- STACK_B ---");
	print_list(&stack_b);
	deallocate_lists(&stack_a);
	deallocate_lists(&stack_b);

	return (0);
}
