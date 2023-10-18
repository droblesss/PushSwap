/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:59:28 by drobles           #+#    #+#             */
/*   Updated: 2023/10/18 18:59:29 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push.h"

void ft_order_3(t_list **stack_a)
{
	int min;
	int max;

	min = postionfinder(*stack_a, ft_lowest(*stack_a));
	max = postionfinder(*stack_a, ft_highest(*stack_a));
	if (min == 0 && max == 1)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (min == 1 && max == 2)
		sa(stack_a, 0);
	else if (max == 1 && min == 2)
		rra(stack_a, 0);
	else if (max == 0 && min == 1)
		ra(stack_a, 0);
	else if (max == 0 && min == 2)
	{
		rra(stack_a, 0);
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
}

void	ft_sort10(t_list **stack_a, t_list **stack_b)
{
	int min;
	int max;

	min = postionfinder(*stack_a, ft_lowest(*stack_a));
	max = postionfinder(*stack_a, ft_highest(*stack_a));
	if (checksorted(*stack_a) == 1)
		return;
	while (ft_lstsize(*stack_a) > 3)
	{
		while (postionfinder(*stack_a, ft_lowest(*stack_a))!= 0)
		{
			if ((postionfinder(*stack_a, ft_lowest(*stack_a))) < (ft_lstsize(*stack_a) / 2))
				ra(stack_a,0);
			else
				rra(stack_a,1);
		}
		pb(stack_a, stack_b);
	}
	ft_order_3(stack_a);
	while (ft_lstsize(*stack_b)> 0)
	{
		pa(stack_a, stack_b);
	}
}

/*void ft_sort10(t_list **stack_a, t_list **stack_b)
{
    if (checksorted(*stack_a) == 1 || ft_lstsize(*stack_a) < 2)
        return;

    while (ft_lstsize(*stack_a) > 3)
    {
        int lowest = ft_lowest(*stack_a);
        //int highest = ft_highest(*stack_a);

        while ((*stack_a)->content != lowest)
        {
            if (postionfinder(*stack_a, lowest) < ft_lstsize(*stack_a) / 2)
                ra(stack_a, 0);
            else
                rra(stack_a, 1);
        }

        pb(stack_a, stack_b);
    }

    ft_order_3(stack_a);

    while (ft_lstsize(*stack_b) > 0)
    {
        pa(stack_a, stack_b);
    }
}*/

	