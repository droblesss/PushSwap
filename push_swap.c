/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:07 by drobles           #+#    #+#             */
/*   Updated: 2023/10/26 19:47:35 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

/*void	leaker(void)
{
	system("leaks -q push_swap");
}*/

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	filla(&stack_a, argv);
	choosealg(&stack_a, &stack_b);
	ft_int_lstclear(&stack_a);
	ft_int_lstclear(&stack_b);
	//atexit(leaker);
	return (0);
}
