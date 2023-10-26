/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:59:28 by drobles           #+#    #+#             */
/*   Updated: 2023/10/26 20:19:17 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "push.h"

void	ft_order_3(t_list **stack_a)
{
	int	min;
	int	max;

	if (checksorted(*stack_a) == 1)
		return ;
	min = postionfinder(*stack_a, ft_lowest(*stack_a));
	max = postionfinder(*stack_a, ft_highest(*stack_a));
	if (min == 0 && max == 1)
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (min == 1 && max == 2)
		sa(stack_a, 0);
	else if (max == 1 && min == 2)
		rra(stack_a, 0);
	else if (max == 0 && min == 1)
		ra(stack_a, 0);
	else if (max == 0 && min == 2)
	{
		sa(stack_a, 0);
		rra(stack_a, 0);
	}
}

void	ft_sort10(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;

	min = postionfinder(*stack_a, ft_lowest(*stack_a));
	max = postionfinder(*stack_a, ft_highest(*stack_a));
	if (checksorted(*stack_a) == 1)
		return ;
	while (ft_lstsize(*stack_a) > 3)
	{
		while (postionfinder(*stack_a, ft_lowest(*stack_a)) != 0)
		{
			if ((postionfinder(*stack_a, ft_lowest(*stack_a)))
				< (ft_lstsize(*stack_a) / 2))
				ra(stack_a, 0);
			else
				rra(stack_a, 0);
		}
		pb(stack_a, stack_b);
	}
	ft_order_3(stack_a);
	while (ft_lstsize(*stack_b) > 0)
	{
		pa(stack_a, stack_b);
	}
}

int	max_bits(t_list *stack)
{
	int	nbr_bits;
	int	max;

	nbr_bits = 0;
	max = ft_highest(stack);
	while (max >> nbr_bits)
		nbr_bits++;
	return (nbr_bits);
}

void	ft_radix(t_list **stack_a, t_list **stack_b)
{
	int	max_bits_val;
	int	i;
	int	size;
	int	j;
	int	num;

	if (checksorted(*stack_a) == 1 || ft_lstsize(*stack_a) < 2)
		return ;
	max_bits_val = max_bits(*stack_a);
	i = 0;
	while (i < max_bits_val)
	{
		size = ft_lstsize(*stack_a);
		j = 0;
		while (j < size)
		{
			num = (*stack_a)->content;
			bitsorter(i, num, stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b) > 0)
			pa(stack_a, stack_b);
		i++;
	}
}

void	bitsorter(int i, int num, t_list **stack_a, t_list **stack_b)
{
	if ((num >> i) & 1)
		ra(stack_a, 0);
	else
		pb(stack_a, stack_b);
}
