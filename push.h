/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:11 by drobles           #+#    #+#             */
/*   Updated: 2023/10/26 20:21:51 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	long				content;
	struct s_list		*next;
	long				size;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		lstpop(t_list **stack);
void	ft_print_stack_horizontal(t_list *stack_a, t_list *stack_b);
long	ft_atoi(const char *str);
void	filla(t_list **stackA, char **argv);
int		ft_isdigit(char src);
int		ft_sign(char src);
int		ft_lowest(t_list *stack_a);
int		ft_highest(t_list	*stack_a);
int		postionfinder(t_list *stack, int num);
void	ft_order_3(t_list **stack_a);
void	ft_sort10(t_list **stack_a, t_list **stack_b);
void	ft_radix(t_list **stack_a, t_list **stack_b);
void	bitsorter(int i, int num, t_list **stack_a, t_list **stack_b);
void	ft_error(int flag);
void	ft_int_lstclear(t_list **lst);
int		ft_strlen(const char *str);

//MOVES

void	sa(t_list **stack_a, int ss);
void	sb(t_list **stack_b, int ss);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b, int ss);
void	ra(t_list **stack_a, int ss);
void	rb(t_list **stack_b, int ss);
void	rr(t_list **stack_a, t_list **stack_b, int ss);
void	rra(t_list **stack_a, int ss);
void	rrb(t_list **stack_b, int ss);

//CHECKERS

void	not_repeat(t_list *stack_a);
int		all_elements_are_numbers(char **list);
int		ft_lstsize(t_list *lst);
int		checksorted(t_list *stack_a);
int		postionfinder(t_list *stack, int num);
void	choosealg(t_list **stack_a, t_list **stack_b);
void	ft_intsize(t_list *stack_a);

#endif