/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:19 by drobles           #+#    #+#             */
/*   Updated: 2023/10/18 19:00:20 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push.h"

void choosealg(t_list *stack_a, int size)
{
	if (size < 1)
	{
		printf ("There is no arguments");
		exit (1);
	}
	if (size <= 3)
		ft_order_3(&stack_a);
	/*else if (size >= 4 && size <= 10)
		ft_order_10(stack_a);
	else
		ft_radix;*/
}