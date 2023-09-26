

# include "push.h"


int main(int argc, char **argv)
{
    t_list *stackA = NULL;
    t_list *stackB = NULL;

	//stackB->size = 0;
	int i = 1;
		
	fillA(&stackA,argv);
	(*stackA).size = argc -1;
	ft_print_stack_horizontal(stackA, stackB);
	rra(&stackA,0);
	ft_print_stack_horizontal(stackA, stackB);
	pb(&stackA, &stackB);
	pb(&stackA, &stackB);
	ft_print_stack_horizontal(stackA, stackB);
	rr(&stackA,&stackB,1);
	ft_print_stack_horizontal(stackA, stackB);

	return 0;
}