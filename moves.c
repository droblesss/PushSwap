/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:59:58 by drobles           #+#    #+#             */
/*   Updated: 2023/10/19 12:22:27 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	sb(t_list **stack_b, int ss)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	if ((*stack_b) != NULL && (*stack_b)->next != NULL)
	{
		first = (*stack_b);
		second = (*stack_b)->next;
		temp = first->content;
		first->content = second->content;
		second->content = temp;
	}
	if (ss == 0)
		write(1, "sb\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_lstadd_front(stack_b, ft_lstnew(lstpop(stack_a)));
	write(1, "pb\n", 3);
}

void	rb(t_list **stack_b, int ss)
{
	int	extract;

	if ((*stack_b) != NULL && (*stack_b)->next != NULL)
	{
		extract = lstpop(stack_b);
		ft_lstadd_back(stack_b, ft_lstnew(extract));
	}
	if (ss == 0)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int ss)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	if (ss == 1)
		write(1, "rr\n", 3);
}

void	rrb(t_list **stack_b, int ss)
{
	if(*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
    t_list	*current = *stack_b;
    t_list	*previous = NULL;

    while(current->next != NULL) {
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    current->next = *stack_b;
    *stack_b = current;
    if (ss == 0)
        write(1, "rra\n", 4);
}
