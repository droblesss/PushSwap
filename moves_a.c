/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:59:54 by drobles           #+#    #+#             */
/*   Updated: 2023/10/24 09:59:32 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "push.h"

void	sa(t_list **stack_a, int ss)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	if ((*stack_a) != NULL && (*stack_a)->next != NULL)
	{
		first = (*stack_a);
		second = (*stack_a)->next;
		temp = first->content;
		first->content = second->content;
		second->content = temp;
	}
	if (ss == 0)
		write(1, "sa\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	ft_lstadd_front(stack_a, ft_lstnew(lstpop(stack_b)));
	write(1, "pa\n", 3);
}

void	ra(t_list **stack_a, int ss)
{
	int	extract;

	if ((*stack_a) != NULL && (*stack_a)->next != NULL)
	{
		extract = lstpop(stack_a);
		ft_lstadd_back(stack_a, ft_lstnew(extract));
	}
	if (ss == 0)
		write(1, "ra\n", 3);
}

void	rra(t_list **stack_a, int ss)
{
	t_list	*current;
	t_list	*previous;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	current = *stack_a;
	previous = NULL;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	current->next = *stack_a;
	*stack_a = current;
	if (ss == 0)
		write(1, "rra\n", 4);
}

void	ss(t_list **stack_a, t_list **stack_b, int ss)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	ss = 0;
	if (ss == 0)
		write(1, "ss\n", 3);
}
