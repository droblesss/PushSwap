/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:19 by drobles           #+#    #+#             */
/*   Updated: 2023/10/26 19:37:55 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	choosealg(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 0)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	else if (size <= 3)
		ft_order_3(stack_a);
	else if (size >= 4 && size <= 10)
		ft_sort10(stack_a, stack_b);
	else if (size > 10)
		ft_radix(stack_a, stack_b);
}

void	ft_error(int flag)
{
	if (flag == 1)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
}

void	ft_int_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL)
		return;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*lst = NULL; // Establece el puntero de la pila a NULL
}