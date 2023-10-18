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