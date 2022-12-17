/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 09:28:28 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/17 09:28:28 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>

# include "./../libft/libft.h"
# include "./../ft_printf/ft_printf.h"

typedef struct s_stack
{
	long long int				value;
	int							index;
	struct s_stack				*next;
}	t_stack;

char	**ft_concat_split(int argc, char **argv);
char	*ft_strcat(char *dest, char *src);
char	*ft_concat(int argc, char **argv);
void	print_list(t_stack **root);
void	deallocate_args(char **strs);
void	deallocate_lists(t_stack **root);
int		fill_stack(char **args, t_stack **root);
int		insert_end(t_stack **root, long long int value, int index);
int		is_present(char **argv, char *str, int index);
int		is_valid_params(char **argv);
int		is_all_digit(char *str);

#endif