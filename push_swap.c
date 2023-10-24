/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:07 by drobles           #+#    #+#             */
/*   Updated: 2023/10/24 19:38:55 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	filla(&stack_a, argv);
	(*stack_a).size = ft_lstsize(stack_a);
	(*stack_a).size = 0;
	//ft_print_stack_horizontal(stack_a, stack_b);
	choosealg(&stack_a, &stack_b);
	//ft_print_stack_horizontal(stack_a, stack_b);
	return (0);
}
