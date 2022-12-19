/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:20:19 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/17 11:20:19 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	str_len;

	str_len = 0;
	str_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[str_len + i] = src[i];
		i++;
	}
	dest[str_len + i] = '\0';
	return (dest);
}

char	*ft_concat(int argc, char **argv)
{
	char	*str;
	int		len;
	int		i;

	i = 1;
	len = 0;
	str = NULL;
	while (i < argc)
		len += ft_strlen(argv[i++]) + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		ft_strcat(str, " ");
		i++;
	}
	str[len - 1] = '\0';
	return (str);
}

char	**ft_concat_split(int argc, char **argv)
{
	char	**strs;
	char	*str;

	str = ft_concat(argc, argv);
	strs = ft_split(str, ' ');
	free(str);
	return (strs);
}

int	create_stack_b(t_stack *stack_a, t_stack **stack_b)
{
	int		i;
	int		j;
	t_stack	*tmp;
	t_stack	*first;

	i = 0;
	j = 0;
	while (stack_a)
	{
		i++;
		stack_a = stack_a->next;
	}
	first = new_lst(0);
	ft_addback(stack_b, first);
	while (i > j)
	{
		tmp = new_lst(0);
		if (!tmp)
		{
			deallocate_lists(stack_b);
			return (-1);
		}
		ft_addback(stack_b, tmp);
		j++;
	}
	return (0);
}
