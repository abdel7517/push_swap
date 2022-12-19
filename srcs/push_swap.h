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
	long long int				s;
	int							index;
	struct s_stack				*next;
}	t_stack;

int		sa(t_stack *stack_a);
int		sb(t_stack *stack_b);
int		ss(t_stack *stack_a, t_stack *stack_b);
int		pa(t_stack **stack_a, t_stack **stack_b);
int		pb(t_stack **stack_a, t_stack **stack_b);
int		ra(t_stack *stack);
int		rb(t_stack *stack);
int		rr(t_stack *t_stack_a, t_stack *t_stack_b);
int		rra(t_stack *stack);
int		ft_count_stack(t_stack *stack);
t_stack	*new_lst(int content);
int		ft_addback(t_stack **list, t_stack *new);
int		add_front(t_stack **stack, t_stack *new);
int		del_one(t_stack **list, t_stack **del);
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