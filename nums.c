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