/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/19 19:06:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdlib.h>

typedef struct s_piece
{
	int					value;
	int					index;
	struct s_piece		*next;
	struct s_piece		*previous;
}							t_piece;

int			digit_check(char *c);
void		check_duplicates(t_piece *start, t_piece *temp);
int			sort_check(t_piece *list);
void		indexing(t_piece *list);
int			parse(char **s, t_piece **a);

void		terminate(void);
void		free_node(t_piece **lst_a);
int			rev_sort_check(t_piece *list);

t_piece		*new_node(char *str_input);
t_piece		*lstlast(t_piece *lst);
void		lstadd_back(t_piece **list, t_piece *new);
void		lstadd_front(t_piece **lst, t_piece *new);
int			list_length(t_piece *list);

void		pa(t_piece **top_s, t_piece **top_d);
void		pb(t_piece **top_s, t_piece **top_d);
void		reverse_rotate(t_piece **stack);
void		rra(t_piece **a);
void		rrb(t_piece **b);
void		rrr(t_piece **a, t_piece **b);
void		rotate(t_piece **stack);
void		ra(t_piece **a);
void		rb(t_piece **b);
void		rr(t_piece **a, t_piece **b);
void		swap(t_piece **stack);
void		sa(t_piece **a);
void		sb(t_piece **b);
void		ss(t_piece **a, t_piece **b);

int			find_min(t_piece const *lst_a);
void		three_sort(t_piece **lst_a);
void		little_sort(t_piece **lst_a, t_piece **lst_b);
void		big_sort(t_piece **lst_a, t_piece **lst_b);
void		sort(t_piece **lst_a, t_piece **lst_b);

#endif