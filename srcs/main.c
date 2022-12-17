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

void	deallocate(char **strs)
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

	stack_a = malloc(sizeof(t_stack));
	if (stack_a == NULL)
		return (ft_putstr_fd("Error\n", 2), 0);
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 2), 0);
	else
	{
		strs = ft_concat_split(argc, argv);
		if (is_valid_params(strs) == 0)
			return (ft_putstr_fd("Error\n", 2), 0);
		else
			ft_printf("Let's go !\n");
		deallocate(strs);
	}
	free(stack_a);
	return (0);
}
