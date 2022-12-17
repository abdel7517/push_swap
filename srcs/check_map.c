/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:55:07 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/17 12:55:07 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	is_all_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	is_present(char **argv, char *str, int index)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	while (i < index)
	{
		if (ft_atoi(str) == ft_atoi(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_valid_params(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (is_all_digit(argv[i]) == 0)
			return (0);
		if (is_present(argv, argv[i], i) == 1)
			return (0);
		i++;
	}
	return (1);
}
