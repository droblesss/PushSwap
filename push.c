/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:07 by drobles           #+#    #+#             */
/*   Updated: 2023/10/18 19:00:08 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include "push.h"


int main(int argc, char **argv)
{
    t_list *stackA = NULL;
    t_list *stackB = NULL;

	(void)argc;
	fillA(&stackA,argv);
	(*stackA).size = ft_lstsize(stackA);
	(*stackA).size = 0;
	ft_print_stack_horizontal(stackA, stackB);
	//choosealg(stackA, stackA->size);
	ft_sort10(&stackA, &stackB);
	ft_print_stack_horizontal(stackA, stackB);

	return 0;
}