# include "push.h"


int	ft_lowest(t_list *stack_a)
{
	int number;

	number = stack_a->content;
	while (stack_a)
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
	while (stack_a)
	{
		if (number < stack_a->next->content)
		number = stack_a->next->content;
		stack_a = stack_a->next;
	}
	return (number);

}

void order_3(t_list *stack_a, t_list *stack_b)
{
	t_list *aux;
	int min;
	int i;
	int max;
	int j;

	min = ft_lowest(stack_a);
	max = ft_highest;
	aux = stack_a;
	i= 0;
	while (stack_a->content != min)
	{
		stack_a = stack_a->next;
		i++;
	}
	stack_a = aux;
	while (stack_a->content != max)
	{
		stack_a = stack_a->next;
		j++;
	}
	
}

void sort3(t_list *stack_a, t_list *stack_b){

	if (min == 0 && max 2)
	return;
	else if (min == 1)

}