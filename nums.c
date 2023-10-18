/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:02 by drobles           #+#    #+#             */
/*   Updated: 2023/10/18 19:00:03 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push.h"


int	ft_lowest(t_list *stack_a)
{
	int number;

	number = stack_a->content;
	while (stack_a->next != NULL)
	{
		if (number > stack_a->next->content)
			number = stack_a->next->content;
		stack_a = stack_a->next;
	}
	return (number);

}

int	ft_highest(t_list	*stack_a)
{
	int number;

	number = stack_a->content;
	while (stack_a->next != NULL)
	{
		if (number < stack_a->next->content)
		number = stack_a->next->content;
		stack_a = stack_a->next;
	}
	return (number);

}

int	postionfinder(t_list *stack, int num)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		if (stack->content == num)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}