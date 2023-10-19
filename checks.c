/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:59:44 by drobles           #+#    #+#             */
/*   Updated: 2023/10/19 12:17:13 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	all_elements_are_numbers(char **list)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (list[i])
	{
		j = 0;
		while (list[i][j])
		{
			if ((list[i][j] == '-' || list[i][j] == '+') && j == 0)
				j++;
			ft_isdigit(list[i][j]);
			j++;
		}
		i++;
	}
	return (1);
}

void	not_repeat(t_list *stack_a)
{
	t_list	*current;
	t_list	*compare;
	int		size;
	int		number;

	size = ft_lstsize(stack_a);
	current = stack_a;
	while (size > 0)
	{
		number = current->content;
		compare = current->next;
		while (compare != NULL)
		{
			if (number == compare->content)
			{
				printf("Error\n");
				exit(1);
			}
			compare = compare->next;
		}
		size--;
		current = current->next;
	}
}

int	ft_sign(char src)
{
	if (((src >= '0') && (src <= '9')) || src == '-' || src == '+')
	{
		return (0);
	}
	exit(1);
}

int	checksorted(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_intsize(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		if (stack_a->content > INT_MAX || stack_a->content < INT_MIN)
		{
			printf("Error\n");
			exit(1);
		}
		stack_a = stack_a->next;
	}
}